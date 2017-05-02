
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

void validarDNI(ePersona lista[],int tam,int libre)
{
    int i;

    while(lista[libre].dni<10000000 || lista[libre].dni>99999999)
    {
        printf("\nERROR. El DNI ingresado debe ser de 8 digitos, Reingrese: ");
        scanf("%d",&lista[libre].dni);

    }

    for(i=0; i<tam; i++)
    {
        while(lista[libre].dni==lista[i].dni && lista[i].estado==1)
        {

            printf("\nERROR. No pueden existir 2 personas con el mismo DNI. Reingrese: ");
            scanf("%d",&lista[libre].dni);
            while(lista[libre].dni<10000000 || lista[libre].dni>99999999)
            {
                printf("\nERROR. El DNI ingresado debe ser de 8 digitos, Reingrese: ");
                scanf("%d",&lista[libre].dni);

            }
        }
    }


}

void agregarPersona(ePersona lista[],int tam)
{
    int espacioLibre,numChar,i;
    espacioLibre=obtenerEspacioLibre(lista,tam);
    char nombre[50],apellido[50];

    if(espacioLibre==tam)
    {
        printf("\nNo hay espacio libre ");
        return;
    }



    printf("\nIngrese el DNI: ");
    scanf("%d",&lista[espacioLibre].dni);

    validarDNI(lista,tam,espacioLibre);

    lista[espacioLibre].estado=1;

    printf("\nIngrese el Nombre: ");
    fflush(stdin);
    gets(nombre);
    strlwr(nombre);
    nombre[0]=toupper(nombre[0]);

    numChar=strlen(nombre);

    for(i=0; i<numChar; i++)
    {
        if(nombre[i]==' ')
        {
            nombre[i+1]=toupper(nombre[i+1]);
        }
    }

    printf("\nIngrese el Apellido: ");
    fflush(stdin);
    gets(apellido);
    strlwr(apellido);
    apellido[0]=toupper(apellido[0]);



    numChar=strlen(apellido);

    for(i=0; i<numChar; i++)
    {
        if(apellido[i]==' ')
        {
            apellido[i+1]=toupper(apellido[i+1]);
        }
    }



    strcat(nombre," ");
    strcat(nombre,apellido);


    strcpy(lista[espacioLibre].nombre,nombre);

    printf("\nIngrese Edad: ");


    scanf("%d",&lista[espacioLibre].edad);

    while(lista[espacioLibre].edad<0)
    {
        printf("\nError. Edad no puede ser menor a 0. Reingrese Edad: ");
        scanf("%d",&lista[espacioLibre].edad);
    }

    printf("\nPersona registrada con exito.");


}



void borrarPersona(ePersona lista[],int tam)
{
    int borrarDni,posicion,estadoLista;
    char seguir='s',pregunta;



    printf("\nDesea ver la lista de personas?(s/n): ");
    pregunta=getche();
    validarSoN(pregunta);

    if(pregunta=='s')
    {
        mostrarLista(lista,tam);
    }


    do
    {

        estadoLista=buscarEstadoActivoLista(lista,tam);

        if(estadoLista==1)
        {
        printf("\nIngrese el DNI de la persona que desea eliminar: ");
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



        printf("\nDesea eliminar otro usuario?(s/n): ");
        seguir=getche();
        validarSoN(seguir);


        }
        else
        {
            printf("\nNo hay usuarios para eliminar.");
            return;
        }





    }
    while(seguir=='s');


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

int buscarPorDni(ePersona lista[],int tam,int borrarDni)
{
    int i;

    while(borrarDni<10000000 || borrarDni>99999999)
    {
        printf("\nERROR. El DNI ingresado debe ser de 8 digitos, Reingrese: ");
        scanf("%d",&borrarDni);

    }

    for(i=0; i<tam; i++)
    {


        if(lista[i].dni==borrarDni && lista[i].estado==1)
        {
            return i;
        }

    }

    printf("\nNo se encontro coincidencia en la lista con el DNI ingresado.");

    return -1;
}


void estadistica(ePersona lista[],int tam)
{
    int i,j,max,flag=0;
    int menor18=0,entre19_35=0,mayor35=0;


    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {
            if(lista[i].edad>=0 && lista[i].edad<18)
            {
                menor18++;
            }
            else if(lista[i].edad>=19&&lista[i].edad<=35)
            {
                entre19_35++;
            }
            else if(lista[i].edad>35)
            {
                mayor35++;
            }

        }
    }

    int cantidades[3]= {menor18,entre19_35,mayor35};

    for(i=0; i<3; i++)
    {
        if(flag==0)
        {
            flag=1;
            max=cantidades[i];
        }
        else if(cantidades[i]>max)
        {
            max=cantidades[i];
        }

    }

    for(i=max; i>0; i--)
    {
        for(j=0; j<3; j++)
        {
            if(cantidades[j]>=i)
            {
                printf("       *     ");

            }
            else
            {
                printf("             ");

            }
        }
        printf("\n");
    }

    printf("  Menor 18  <--Entre 19 y 35-->  Mayor35\n");
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
