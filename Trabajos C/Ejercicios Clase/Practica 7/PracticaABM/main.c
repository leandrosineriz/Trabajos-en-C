#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#define P 200

void darAlta(int[],char[][],char[][],int);
void main()
{
    char nombre[P][15];
    char apellido[P][15];
    int legajo[P];
    char pregunta='s';
    int opcion;

    do
    {
        printf("1.Dar de alta a un usuario.\n");
        printf("2.Dar de baja a un usuario.\n");
        printf("3.Modificar un usuario.\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:

            break;
        case 2:
            break;
        case 3:
            break;

        }




    }
    while(pregunta=='s');

}
