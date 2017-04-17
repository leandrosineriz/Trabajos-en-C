#include "funciones.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define BOXER 1
#define DALMATA 2
#define MASTIN 3

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

void cargarDuenio(eDuenio duenios[])
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

}


void cargarPerro(ePerro perros[])
{
    int identificador[5]={1,2,3,4,5},i;
    int raza[5]={BOXER,DALMATA,BOXER,MASTIN,DALMATA};
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



