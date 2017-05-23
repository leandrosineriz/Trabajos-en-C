#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"


void cargarArray(int* a,int tam)
{
    int i;

    int num[10]={1,2,3,4,5,6,7,8,9,10};

    for(i=0;i<10;i++)
    {
        *(a+i)=num[i];
    }
}

void mostrarArray(int* a,int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("\nNUM en posicion %d : %d",i,*(a+i));
    }
}

void mostrarArrayStr(char* nombre[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("\nNombre en posicion %s : %s",i,*(nombre+i));
    }
}

int eliminaNum(int* a,int tam)
{
    int auxA;

    int auxInt,i,j,x,retorno;
    printf("\nIngrese el numero a eliminar: ");
    scanf("%d",&auxInt);

    for(i=0;i<tam;i++)
    {
        if(auxInt==*(a+i))
        {
            for(j=i;j<tam-1;j++)
            {
                for(x=j+1;x<tam;x++)
                {
                    *(a+j)=*(a+x);
                    break;
                }


            }
            a=(int*)realloc(a,sizeof(int)*(tam-1));

            return 1;

        }
    }

    printf("No se encontro el numero");
    return 0;


}


int agregarNum(int* a,int tam)
{
    int auxInt;
    char pregunta;

    printf("Ingrese el numero a ingresar.");
    scanf("%d",&auxInt);

    printf("Esta seguro qeu desea agregar este elemento (%d):(s/n) ",auxInt);
    fflush(stdin);
    pregunta=getche();

    if(pregunta=='s')
    {
     a=(int*)realloc(a,sizeof(int)*(tam+1));
     *(a+tam)=auxInt;
     return 1;
    }




    return 0;

}

int agregarNombre(char* nombre[],int tam)
{
    char auxNombre[20];


    printf("Ingrese un nombre : ");
    fflush(stdin);
    gets(auxNombre);

    nombre=(char*)realloc(nombre,sizeof(nombre)*(tam+1));

    return 1;
}
