
#include "LibFunciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>


//HARCODEAR DATOS

void cargarSeries(eSerie series[])
{
    int idSerie[5]= {100,101,102,103,104};
    int estado[5]= {1,1,1,1,1};
    char titulo[5][30]= {"TBBT","BB","GOT","AHS","SCD"};
    int temporadas[5]= {9,7,7,6,1};
    char genero[5][30]= {"Comedia","Policial","Ciencia Ficcion","Terror","Comedia"};

    int i;
    for(i=0; i<5; i++)
    {
        series[i].idSerie = idSerie[i];
        strcpy(series[i].titulo, titulo[i]);
        series[i].estado = estado[i];
        series[i].temporadas = temporadas[i];
        strcpy(series[i].genero, genero[i]);
    }

}
void cargarClientes(eCliente clientes[])
{
    int id[10] = {1,2,3,4,5,6,7,8,9,10};
    char nombres[10][30]= {"juan","maria","pedro","luis","romina","jose","andrea","patricia","luciano","camila"};
    int estado[10]= {1,1,1,1,1,1,1,1,1,1};
    int i;

    for(i=0; i<10; i++)
    {
        clientes[i].idCliente = id[i];
        strcpy(clientes[i].nombre, nombres[i]);
        clientes[i].estado = estado[i];
    }

}

void CargarSeriesClientes(eSeriesCliente clientes[])
{
    int idCliente[20] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};
    int idSerie[20]= {100,100,101,103,103,101,102,103,100,102,101,102,103,100,102,101,103,103,101,102};
    int i;

    for(i=0; i<20; i++)
    {
        clientes[i].idCliente = idCliente[i];
        clientes[i].idSerie = idSerie[i];
    }

}


//TP 1
int pedirInt(char texto[])
{
    int num;

    printf("%s",texto);
    scanf("%d",&num);

    return num;
}

float pedirFloat(char texto[])
{
    float num;

    printf("%s",texto);
    scanf("%f",&num);

    return num;
}

char pedirChar(char texto[])
{
    char letra;

    printf("%s",texto);
    fflush(stdin);
    letra=getche();

    return letra;
}

char pedirString(char texto[],char stringe[])
{
    printf("%s",texto);
    fflush(stdin);
    gets(stringe);
}

//TP 2
void setLista(ePersona lista[],int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        lista[i].estado=0;
        lista[i].dni=0;
        lista[i].edad=-1;
    }

}

void mostrarLista(ePersona lista[],int tam)
{
    int i,flag=0;



    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {
            flag=1;
            printf("\n\t|DNI: %d\t|%s|\tEdad: %d|\n",lista[i].dni,lista[i].nombre,lista[i].edad);
        }


    }
    if(flag==0)
    {
        printf("\nNo se registro ningun usuario.\n");
    }

}

int obtenerEspacioLibre(ePersona lista[],int tam)
{
    int i;
    int retorno=tam;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==0)
        {
            retorno=i;
            break;

        }
    }

    return retorno;


}

void OrdenarPorNombre(ePersona lista[],int tam)
{
    int i,j;
    ePersona aux;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            //auxInt=strcmp(lista[i].nombre,lista[j].nombre);
            if(strcmp(lista[i].nombre,lista[j].nombre)>0 && lista[j].estado==1)
            {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }

}

void validarNumEntre(ePersona lista[],int tam,int libre,int min,int max)
{
    int i;

    while(lista[libre].dni<min || lista[libre].dni>max)
    {
        printf("\nERROR. El NUMERO ingresado debe ser MAYOR a %d y MENOR a %d , Reingrese: ",min,max);
        scanf("%d",&lista[libre].dni);

    }



}

void Alta(ePersona lista[],int tam)
{
    int libre;

    libre=obtenerEspacioLibre(lista,tam);

    if(libre<tam)
    {

    }
    else
    {
        printf("No hay lugar libre en el ARRAY.")
    }
}



void Baja(ePersona lista[],int tam)
{
    int borrarDni,posicion,estadoLista;


        estadoLista=buscarEstadoActivoLista(lista,tam);

        if(estadoLista==1)
        {
        printf("\nIngrese el ID de la COSA que desea eliminar: ");
        scanf("%d",&borrarDni);


        posicion=buscarPorDni(lista,tam,borrarDni);

        if(posicion>=0)
        {
            printf("\n\t|DNI: %d\t|%s|\tEdad: %d|\nEsta seguro que desea eliminar a este usuario?:(s/n) ",lista[posicion].dni,lista[posicion].nombre,lista[posicion].edad);
            pregunta=getche();
            validarSoN(pregunta);
            if(pregunta=='s')
            {
                lista[posicion].estado=0;
                printf("\nEl usuario a sido eliminado correctamente.");

            }
            else
            {
                printf("\nAccion cancelada.");

            }

        }



        }
        else
        {
            printf("\nNo hay usuarios para eliminar.");
            return;
        }




}

char validarSoN(char opcion)
{
    opcion=tolower(opcion);

    while(opcion!='s' && opcion!='n')
    {
        printf("\nERROR. Ingrese S o N para continuar: ");
        opcion=getche();
        opcion=tolower(opcion);
    }

    return opcion;

}

int buscarPorInt(ePersona lista[],int tam,int borrarDni)
{
    int i;

    for(i=0; i<tam; i++)
    {

        if(lista[i].dni==borrarDni && lista[i].estado==1)
        {
            return i;
        }

    }

    printf("\nNo se encontro coincidencia en la lista con el NUMERO ingresado.");

    return -1;
}


int buscarEstadoActivoLista(ePersona lista[],int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {

            return 1;

        }
    }

    return 0;

}
