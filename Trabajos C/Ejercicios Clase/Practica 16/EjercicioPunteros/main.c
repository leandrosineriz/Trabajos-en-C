#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1.Altas\n");
        printf("2.Baja\n");
        printf("3.Modificar\n");
        printf("4.Ordenar\n");
        printf("5.Listar\n");



        scanf("%d",&opcion);



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

            break;
        case 6:
            seguir = 'n';
            break;
        default:
            printf("La opcion ingresada es incorrecta.");
        }
        printf("\n\n");
        system("pause");
    }

    return 0;
}
