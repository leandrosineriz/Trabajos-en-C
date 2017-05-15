#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#include <ctype.h>
#include <conio.h>

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

void alta(eLibro lista[],int tam)
{
    lista.Id=pedirInt("Ingrese el id del ")
}


