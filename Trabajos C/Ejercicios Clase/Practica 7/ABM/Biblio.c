
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblio.h"


void mostrarDatos(int leg[], char nom[][15],  int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d--%s\n",leg[i], nom[i]);
    }
}


void cargarDatos(int leg[], char nom[][15],  int tam)
{
    int i;



    for(i=0; i<tam; i++)
    {
        printf("Ingrese un legajo: ");
        scanf("%d", &leg[i]);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nom[i]);
    }
}

void ordenarPorNombre(int leg[], char nom[][15],  int tam)
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
                    }
                }
            }
        }
    }
}

