#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 4


int main()
{
    ePersona personas[TAM]={"",5,1,38888888,"",5,1,3777777,"",5,1,36666666,"",5,1,35555555};
    char seguir='s';
    int opcion=0;
    int libre;
    int i;

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        setLista(personas,TAM);
        mostrarLista(personas,TAM);
        libre=obtenerEspacioLibre(personas,TAM);
        printf("el indice libre es: %d\n",libre);
        OrdenarPorDni(personas,TAM);
        for(i=0;i<TAM;i++)
        {
            printf("%s",personas[i]);
        }

        switch(opcion)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
