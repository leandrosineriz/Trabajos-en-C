#include "Funciones.h"
#include <stdio.h>
#include <stdlib.h>

int pedirNumero(char texto[])
{
    int numero;

    printf("%s",texto);
    scanf("%d",&numero);

    return numero;
}

float pedirNumeroFloat(char texto[])
{
    float numero;

    printf("%s",texto);
    scanf("%f",&numero);

    return numero;
}

int mostrarNumero(char texto[],int numero)
{

    printf("%s: %d",texto,numero);

}

int validacionNumeroLeg(int num)
{
    while(num<1000 || num>9999)
    {
        printf("Error. Ingrese un numero positivo de 4 cifras: ");
        scanf("%d",&num);
    }
    printf("El numero ingresado es valido.");
    return num;
}

float validacionSueldo(float num,int min,int max)
{
    while(num<min || num>max)
    {
        printf("Error. Ingrese un sueldo entre %d y %d: ",min,max);
        scanf("%f",&num);
    }
    printf("Sueldo valido");
    return num;
}

char validacionSexo(char sexo)
{


}
