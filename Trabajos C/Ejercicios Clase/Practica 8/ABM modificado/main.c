#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** \brief
 *
 * \param vector de enteros
 * \param capacidad del vector
 * \return
 *
 */
typedef struct
{
    int A=5;
    char nombres[5][15];
    int legajos[5];
    int estados[5]={0};
}eAlumno;


int main()
{
    int i, j;
    int A = 5;
    char auxCadena[15];
    int auxInt;
    int opcion;
    char seguir='s';

eAlumno alumno;

    do
    {

        printf("1. Alta\n");
        printf("2. Baja\n");
        printf("3. Modificacion\n");
        printf("4. Mostrar\n");
        printf("5. Ordenar\n");
        printf("6. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
            cargarDatos(alumno);
            break;
        case 2:
            bajaDatos(alumno);
            break;
        case 3:
            modificarDatos(alumno);
            break;
        case 4:
            mostrarDatos(alumno);
            break;
        case 5:
            ordenarPorNombre(alumno);
            break;

        }

    }while(seguir=='s');





    return 0;
}

