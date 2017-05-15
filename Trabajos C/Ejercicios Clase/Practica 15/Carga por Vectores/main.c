#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 10


int main()
{
    int vectorInt[TAM];
    int* pInt;
    int i;

    pInt=vectorInt;

    ingresoDatos(pInt,TAM);

    for(i=0;i<TAM;i++)
    {
        printf("\nel numero en la posicion %d es : %d",i,*(pInt+i));
    }
    ordenarNum(pInt,TAM);

    for(i=0;i<TAM;i++)
    {
        printf("\nel numero en la posicion %d es : %d",i,*(pInt+i));
    }

    return 0;
}
