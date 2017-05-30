#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include "parser.h"

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
    Employee* newEmployee;
    int tam,i;



    data=fopen("data.csv","r");

    if(data==NULL)
    {
        printf("NULL");
        exit(1);
    }

    pArrayListEmployee=al_newArrayList();


    parserEmployee(data,pArrayListEmployee);

    tam=pArrayListEmployee->len(pArrayListEmployee);

    newEmployee=employee_new();

    for(i=0;i<tam;i++)
    {

        newEmployee=pArrayListEmployee->get(pArrayListEmployee,i);
        employee_print(newEmployee);
    }

    pArrayListEmployee



    return 0;
}
