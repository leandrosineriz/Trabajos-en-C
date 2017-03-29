#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    char respuesta='s';

    printf("#############SISTEMA DE REGISTRO################");

    do
    {

    int numLeg;
    float sueldo;

    numLeg=pedirNumero("\n\nIngrese el numero de legajo: ");
    validacionNumeroLeg(numLeg);
    sueldo=pedirNumeroFloat("\nIngrese el sueldo neto: ");
    sueldo=validacionSueldo(sueldo,1500,10000);
    printf("%.2f",sueldo);










    printf("\nQuiere ingresar otro empleado(s/n): ");
    respuesta=tolower(getche());
    }while(respuesta=='s');
}




