#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define A 5
/** \brief
 *
 * \param vector de enteros
 * \param capacidad del vector
 * \return
 *
 */


int main()
{
    int i, j;
    char nombres[A][15];
    int legajos[A];
    char auxCadena[15];
    int auxInt;

    cargarDatos(legajos, nombres, A);

    mostrarDatos(legajos, nombres, A);

    ordenarPorNombre(legajos, nombres, A);

     mostrarDatos(legajos, nombres, A);

    return 0;
}

