#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int parserEmployee(FILE* pFile , ArrayList* pArrayListEmployee)
{

    char index[100],nombre[100],apellido[100],estado[100];
    Employee* newEmployee;


int i=0;
    while(!feof(pFile))
    {
        fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n",index,nombre,apellido,estado);
        if(i==0)
        {
            i++;
            continue;
        }





      newEmployee=employee_param(index,nombre,apellido,estado);

     pArrayListEmployee->add(pArrayListEmployee, newEmployee);


    }

    return 0;
}
