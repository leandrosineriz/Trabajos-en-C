#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    /*duenio duenios[5]={333,"Pepe","15354267",666,"Dario","43567893",555,"Jose","45678234"};
    perro perros[3]={123,1,"Rocky",1,333,456,2,"Camy",0,555,898,3,"Bella",1,666};
    char razas[3][20]={"Boxer","Dalmata","Mastin"};*/

    eDuenio duenios[5];
    ePerro perros[5];

    printf("BOXER 1-- DALMATA 2 --- MASTIN 3\n\n");
    cargarDuenio(duenios);
    printf("\n\n");
    cargarPerro(perros);
    printf("\n\n");

    mostrarPerrosConDuenios(perros,duenios);


    return 0;
}
