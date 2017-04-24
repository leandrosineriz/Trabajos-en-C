#include "funciones.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define BOXER 1
#define DALMATA 2
#define PP 3

/*void mostrarDatos(perro perros[],duenio duenios[],char razas[][])
{
    int i;
    char raza[20];
    for(i=0;i<5;i++)
    {
        if(perros[i].duenio==duenios[i].codigo)
        {
            raza=razas[i][];
            printf("Dueño: codigo: %d---nombre: %s---telefono: %s\nPerro:\n id: %d---- raza: %s----nombre: %s----vacunas al dia: %d"
                   ,duenios[i].codigo,duenios[i].nombre,duenios[i].telefono,perros[i].identificador,raza,perros[i].)
        }
    }
}*/

/*void cargarDuenio(eDuenio duenios[])
{
    int codigo[5]={6,7,8,9,10},i;
    char nombre[5][50]={"Dario","Pedro","Juan","Jose","Ivan"};
    char telefono[5][50]={"42569","432565","372819","846273","91872763"};

    for(i=0;i<5;i++)
    {
        duenios[i].codigo=codigo[i];
        strcpy(duenios[i].nombre,nombre[i]);
        strcpy(duenios[i].telefono,telefono[i]);
    }

    printf("DUENIOS: \n");

    for(i=0;i<5;i++)
    {
        printf("Id: %d-----nombre: %s-----telefono: %s\n",duenios[i].codigo,duenios[i].nombre,duenios[i].telefono);
    }

}*/
void setDuenios(eDuenio duenios[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        duenios[i].estado=0;
        duenios[i].codigo=0;
    }
}

int buscarLibre(eDuenio duenios[],int tam)
{
    int i;
    int libre;

    for(i=0;i<tam;i++)
    {
        if(duenios[i].estado==0)
        {
            libre=i;
            return libre;
        }

    }

    return -1;
}

void validarCodigo(eDuenio duenios[],int tam, int libre)
{
    int i;

    while(duenios[libre].codigo<1000 || duenios[libre].codigo>9999)
    {
        printf("ERROR.Reingrese un Codigo de 4 digitos: ");
        scanf("%d",&duenios[libre].codigo);
    }

    for(i=0;i<tam;i++)
    {
        if(i!=libre)
        {

        while(duenios[libre].codigo==duenios[i].codigo)
        {
            printf("ERROR.Codigo ya utilizado Reingrese: ");
            scanf("%d",&duenios[libre].codigo);

        }

        }

    }

}

int ingresarDuenio(eDuenio duenios[],int tam)
{
    int i,libre,lenChar,auxNum;
    char auxCadena[8];

    libre=buscarLibre(duenios,tam);
    printf("posicion:%d",libre);

    if(libre==-1)
    {
        printf("No hay lugar para nuevos duenios");
        return 0;
    }

    printf("Ingrese un Codigo de 4 digitos: ");

    scanf("%d",&duenios[libre].codigo);

    validarCodigo(duenios,tam,libre);



    printf("Ingrese el nombre: ");
    fflush(stdin);
    gets(duenios[libre].nombre);

    strlwr(duenios[libre].nombre);

    printf("Ingrese el telefono: ");
    fflush(stdin);
    gets(duenios[libre].telefono);

    lenChar=strlen(duenios[libre].telefono);

    while(lenChar!=8)
    {
        printf("ERROR.Ingrese un telefono de 8 digitos: ");
        fflush(stdin);
        gets(duenios[libre].telefono);
        lenChar=strlen(duenios[libre].telefono);
    }

        strcpy(auxCadena,duenios[libre].telefono);
        auxNum=atoi(auxCadena);

         while(auxNum<0)
        {
             printf("ERROR.el telefono no puede tener numeros negativos, Reingrese: ");
             fflush(stdin);
             gets(duenios[libre].telefono);
             strcpy(auxCadena,duenios[libre].telefono);
             lenChar=strlen(duenios[libre].telefono);
             auxNum=atoi(auxCadena);

          while(lenChar!=8)
         {
            printf("ERROR.Ingrese un telefono de 8 digitos: ");
            fflush(stdin);
            gets(duenios[libre].telefono);
            lenChar=strlen(duenios[libre].telefono);
         }
        }

        duenios[libre].estado=1;



    return 0;





}

void mostrarSoloDueniosActivos(eDuenio duenios[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        if(duenios[i].estado==1)
        {
          printf("Id: %d-----nombre: %s-----telefono: %s\n\n",duenios[i].codigo,duenios[i].nombre,duenios[i].telefono);

        }
    }
}


void cargarPerro(ePerro perros[])
{
    int identificador[5]={1,2,3,4,5},i;
    int raza[5]={BOXER,DALMATA,BOXER,PP,DALMATA};
    char nombre[5][50]={"Bella","Rocky","Tharja","Camy","Pelusa"};
    int vacunasAlDia[5]={1,1,0,0,1};
    int duenio[5]={6,8,9,6,8};

    for(i=0;i<5;i++)
    {
        perros[i].identificador=identificador[i];
        perros[i].raza=raza[i];
        strcpy(perros[i].nombre,nombre[i]);
        perros[i].vacunasAlDia=vacunasAlDia[i];
        perros[i].duenio=duenio[i];
    }
    printf("PERROS: \n");

    for(i=0;i<5;i++)
    {
        printf("Id: %d-----Raza: %d-----Nombre: %s----Vacunas al dia: %d-----Duenio: %d\n",perros[i].identificador,perros[i].raza,perros[i].nombre,perros[i].vacunasAlDia,perros[i].duenio);
    }

}

void mostrarPerrosConDuenios(ePerro perros[],eDuenio duenios[])
{
    int i,j;

    printf("PERROS CON DUENIOS: \n");

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(perros[i].duenio==duenios[j].codigo)
            {

                printf("Id: %d-----Raza: %d-----Nombre: %s----Vacunas al dia: %d-----Duenio: %d\n",perros[i].identificador,perros[i].raza,perros[i].nombre,perros[i].vacunasAlDia,perros[i].duenio);
                printf("Id: %d-----nombre: %s-----telefono: %s\n\n",duenios[j].codigo,duenios[j].nombre,duenios[j].telefono);

            }
        }
        printf("\n\n");
    }
}


void mostrarDueniosConPerros(ePerro perros[],eDuenio duenios[])
{
    int i,j,flag;

    printf("DUENIOS CON PERROS: \n");

    for(i=0;i<5;i++)
    {
        flag=0;

        for(j=0;j<5;j++)
        {
            if(duenios[i].codigo==perros[j].duenio)
            {

                if(flag==0)
                {
                    flag=1;
                    printf("Id: %d-----nombre: %s-----telefono: %s\n\n",duenios[i].codigo,duenios[i].nombre,duenios[i].telefono);
                }

               printf("Id: %d-----Raza: %d-----Nombre: %s----Vacunas al dia: %d-----Duenio: %d\n",perros[j].identificador,perros[j].raza,perros[j].nombre,perros[j].vacunasAlDia,perros[j].duenio);
            }
        }
        printf("\n\n");
    }
}

void mostrarDueniosConPerrosPP(ePerro perros[],eDuenio duenios[])
{
    int i,j;

    printf("DUENIOS CON PERROS PP: \n");

    for(i=0;i<5;i++)
    {

        for(j=0;j<5;j++)
        {
            if(duenios[i].codigo==perros[j].duenio && perros[j].raza==PP)
            {


               printf("Id: %d-----nombre: %s-----telefono: %s\n\n",duenios[i].codigo,duenios[i].nombre,duenios[i].telefono);


               printf("Id: %d-----Raza: %d-----Nombre: %s----Vacunas al dia: %d-----Duenio: %d\n",perros[j].identificador,perros[j].raza,perros[j].nombre,perros[j].vacunasAlDia,perros[j].duenio);

               break;
            }
        }
        printf("\n\n");
    }
}

void mostrarDueniosConPerrosSinVacunar(ePerro perros[],eDuenio duenios[])
{
    int i,j,flag;

    printf("DUENIOS CON PERROS SIN VACUNAR: \n");

    for(i=0;i<5;i++)
    {
        flag=0;

        for(j=0;j<5;j++)
        {
            if(duenios[i].codigo==perros[j].duenio && perros[j].vacunasAlDia==0)
            {


                if(flag==0)
                {
                    flag=1;
                    printf("Id: %d-----nombre: %s-----telefono: %s\n\n",duenios[i].codigo,duenios[i].nombre,duenios[i].telefono);
                }

               printf("Id: %d-----Raza: %d-----Nombre: %s----Vacunas al dia: %d-----Duenio: %d\n",perros[j].identificador,perros[j].raza,perros[j].nombre,perros[j].vacunasAlDia,perros[j].duenio);

            }
        }
        printf("\n\n");
    }
}

