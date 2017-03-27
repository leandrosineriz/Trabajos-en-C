#include <stdio.h>
#include <stdlib.h>

int pedirNumero(char texto[]);
int mostrarNumero(char texto[],int);
int validacionNumeroLeg(int);
float validacionSueldo(float,int,int);
char validacionSexo(char);
int validacionEdad(int,int,int);

int main()
{
    int numLeg;
    numLeg=pedirNumero("Ingrese el numero de legajo: ");

}



int pedirNumero(char texto[])
{
    int numero;

    printf("%s",texto);
    scanf("%d",&numero);

    return numero;
}

int mostrarNumero(char texto[],int numero)
{

    printf("%s: %d",texto,numero);

}

int validacionNumeroLeg(int num)
{
    while(num<0 || num>9999)
    {
        printf("ingrese un numero de 4 cifras: ");
        scanf("%d",num);
    }
    return num;
}

/*int validacionSueldo(float num)
{
    while(num<1500 || num>10000)
    {

    }
}*/
