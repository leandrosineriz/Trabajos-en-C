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

    for(i=0;i<tam;i++)
    {
        printf("\nel numero en la posicion %d es : %d",i,*(pInt+i));
    }
}
