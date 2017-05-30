#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    FILE* data;
    ArrayList* pArrayListEmployee;



    data=fopen("data.csv","r");

    if(data==NULL)
    {
        printf("NULL");
        exit(1);
    }



    return 0;
}
