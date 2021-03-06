#include "BiblioFunciones.h"
#include <stdio.h>
#include <string.h>
#include <conio.h>


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

int funcionFactorial(int n)
{
    int valor;
    if(n==0)
    {
        return 1;
    }
    else
    {
        valor=n*funcionFactorial(n-1);
        return valor;
    }
}

void mostrarDatos(int leg[], char nom[][15],int est[],  int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(est[i]==1)
            printf("%d--%s\n",leg[i], nom[i]);
    }
}


void cargarDatos(int leg[], char nom[][15], int est[], int tam)
{
    int i;
    int hayLugar=0;


    for(i=0; i<tam; i++)
    {
        if(est[i]==0)
        {
            printf("Ingrese un legajo: ");
            scanf("%d", &leg[i]);
            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(nom[i]);
            est[i]=1;
            hayLugar = 1;
            break;
        }


    }
    if(!hayLugar)
    {
        printf("No hay lugar disponible");
    }
}


void bajaDatos(int leg[], char nom[][15], int est[],  int tam)
{
    int legajo, i;
    char respuesta;
    int flagEncontro=0;
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);
    for(i=0; i<tam;i++)
    {
        if(est[i]== 1 && legajo == leg[i])
        {
            printf("%d--%s", leg[i], nom[i]);
            printf("Esta seguro que desea dar de baja? s/n");
            respuesta = getche();
            if(respuesta=='s')
            {
                est[i] = 0;
            }
            else
            {
                printf("Accion cancelada!!!");
            }

            flagEncontro = 1;
            break;
        }

    }
    if(!flagEncontro)
    {
        printf("Legajo inexistente");
    }


}
void modificarDatos(int leg[], char nom[][15], int est[],  int tam)
{
    int legajo, i;
    char respuesta, auxNombre[15];
    int flagEncontro=0;
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);
    for(i=0; i<tam;i++)
    {
        if(est[i]== 1 && legajo == leg[i])
        {
            printf("%d--%s", leg[i], nom[i]);
            printf("ingrese el nuevo nombre: ");
            fflush(stdin);
            gets(auxNombre);
            printf("Esta seguro que desea modificar? s/n");
            respuesta = getche();
            if(respuesta=='s')
            {
                strcpy(nom[i], auxNombre);
            }
            else
            {
                printf("Accion cancelada!!!");
            }

            flagEncontro = 1;
            break;
        }

    }
    if(!flagEncontro)
    {
        printf("Legajo inexistente");
    }


}
void ordenarPorNombre(int leg[], char nom[][15], int est[],  int tam)
{
    int i, j;
    char auxCadena[15];
    int auxInt;
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(nom[i],nom[j])>0)
            {
                strcpy(auxCadena,nom[i]);
                strcpy(nom[i], nom[j]);
                strcpy(nom[j], auxCadena);

                auxInt = leg[i];
                leg[i] = leg[j];
                leg[j] = auxInt;

                auxInt = est[i];
                est[i] = est[j];
                est[j] = auxInt;

            }
            else
            {
                if(strcmp(nom[i],nom[j])==0)
                {
                    if(leg[i]>leg[j])
                    {

                        auxInt = leg[i];
                        leg[i] = leg[j];
                        leg[j] = auxInt;


                auxInt = est[i];
                est[i] = est[j];
                est[j] = auxInt;
                    }
                }
            }
        }
    }
}
