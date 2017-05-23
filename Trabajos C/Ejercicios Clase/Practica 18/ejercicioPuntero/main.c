#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

#define TAM 10
#define TAMSTR 10

int main()
{
    int* a;
    char* nombre[5];
    int dif=0,difStr=0,opcion;
    char pregunta='s';
    a=(int*)malloc(sizeof(int)*TAM);
    nombre=(char*)malloc(sizeof(char)*20);

    cargarArray(a,TAM+dif);

    mostrarArray(a,TAM+dif);


    do
    {


        printf("\n1.Borrar numero.");
        printf("\n2.Agregar numero.");
        printf("\n3.Agregar Nombre.");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            dif-=eliminaNum(a,TAM+dif);

            mostrarArray(a,TAM+dif);

            break;
        case 2:
            dif+=agregarNum(a,TAM+dif);

            mostrarArray(a,TAM+dif);

            break;
        case 3:
            difStr+=agregarNombre(nombre,difStr);

            mostrarArrayStr(nombre,difStr);


        }


        /*printf("\n\nDesea eliminar otro numero?(s/n)");
        fflush(stdin);
        pregunta=getche();*/
    }
    while(pregunta=='s');



    return 0;
}
