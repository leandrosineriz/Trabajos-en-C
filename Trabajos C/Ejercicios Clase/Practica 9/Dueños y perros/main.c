#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define TAM 5


int main()
{
    /*duenio duenios[5]={333,"Pepe","15354267",666,"Dario","43567893",555,"Jose","45678234"};
    perro perros[3]={123,1,"Rocky",1,333,456,2,"Camy",0,555,898,3,"Bella",1,666};
    char razas[3][20]={"Boxer","Dalmata","Mastin"};*/

    eDuenio duenios[TAM];
    ePerro perros[TAM];
    int opcion;
    char seguir='s';

    setDuenios(duenios,TAM);

    do
    {
    printf("BOXER 1-- DALMATA 2 --- PP 3\n\n");
    //cargarDuenio(duenios);
    printf("\n\n");
    cargarPerro(perros);
    printf("\n\n");

    printf("\n1.Ingresar duenio.\n");
    printf("2.Mostrar perros con datos del duenio.\n");
    printf("3.Mostrar duenio con datos del perro.\n");
    printf("4.Mostrar duenio con perros raza pp.\n");
    printf("5.Mostrar duenios con perros sin vacunar.\n");
    printf("6.Salir\n");
    printf("7.Mostrar duenios activos.\n");

    printf("\nElija una opcion: ");
    scanf("%d",&opcion);

    printf("\n\n");

    switch(opcion)
    {
    case 1:
        ingresarDuenio(duenios,TAM);
        break;
    case 2:
        mostrarPerrosConDuenios(perros,duenios);
        break;
    case 3:
        mostrarDueniosConPerros(perros,duenios);
        break;
    case 4:
        mostrarDueniosConPerrosPP(perros,duenios);
        break;
    case 5:
        mostrarDueniosConPerrosSinVacunar(perros,duenios);
        break;
    case 6:
        seguir='n';
        break;
    case 7:
        mostrarSoloDueniosActivos(duenios,TAM);
        break;

    }


    }while(seguir=='s');
    return 0;
}
