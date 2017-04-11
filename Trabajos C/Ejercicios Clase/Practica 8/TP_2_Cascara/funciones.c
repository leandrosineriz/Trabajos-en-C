#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

int setLista(ePersona lista[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        lista[i].estado=0;
    }
    return 0;
}

void mostrarLista(ePersona lista[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%d\n",lista[i].estado);

    }

}

int obtenerEspacioLibre(ePersona lista[],int tam)
{
    int i;
    int retorno;

    for(i=0;i<tam;i++)
    {
        if(lista[i].estado==0)
        {
            retorno=i+1;
            break;

        }
    }

    return retorno;


}

void OrdenarPorDni(ePersona lista[],int tam)
{
    int i,j;
    ePersona aux;

    for(i=0;i<tam-1;i++)
    {
        for(j=0+1;j<tam;j++)
        {
            if(lista[i].dni>lista[j].dni)
            {
                aux=lista[i];
                lista[i]=lista[j];
                lista[j]=aux;

            }
        }
    }

}
