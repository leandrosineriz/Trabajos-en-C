#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int parserEmployee(FILE* pFile , ArrayList* pArrayListEmployee)
{

    char index[100],nombre[100],apellido[100],estado[100];
    int cont=0;
    Employee* newEmployee;

    fscanf(pFile, "%[^,],%[^,],%[^,],%[^,]\n",index,nombre,apellido,estado);

    while(!feof(pFile))
    {

      fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n",index,nombre,apellido,estado);

      newEmployee=employee_new();


      pArrayListEmployee->add(index);
      pArrayListEmployee->add(nombre);
      pArrayListEmployee->add(apellido);
      pArrayListEmployee->add(estado);

      cont++;

    }

    return 0;
}
