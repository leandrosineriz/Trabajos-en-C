#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 10


int main()
{
    int vectorInt[TAM];
    int* pInt;

    pInt=vectorInt;

    ingresoDatos(pInt,TAM);

    return 0;
}
