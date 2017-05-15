#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>


void ingresoDatos(int* pInt,int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("ingrese un numero: ");
        scanf("%d",pInt+i);
    }


}

void ordenarNum(int* pInt,int tam)
{
    int i,j;
    int aux;

    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if(*(pInt+i)>*(pInt+j))
            {
                aux=*(pInt+i);
                *(pInt+i)=*(pInt+j);
                *(pInt+j)=aux;
            }
        }

    }
}
