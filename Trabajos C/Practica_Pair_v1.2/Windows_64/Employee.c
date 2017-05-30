#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    return 0;
}


void employee_print(Employee* this)
{
    int i;
    ArrayList* arrayListEmployee;


    for(i=0;i<arrayListEmployee->size;i++)
    {
        printf("\n%s,%s,%s,%s\n",);
    }

}


Employee* employee_new(void)
{
    Employee* newEmployee;

    newEmployee=(Employee*)malloc(sizeof(Employee));


    return newEmployee;

}

Employee* employee_param(char index[],char nombre[],char apellido[],char estado[])
{
    Employee* newEmployee;

    newEmployee=employee_new();

    newEmployee

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{

    return 0;

}

int employee_getId(Employee* this)
{

    return 0;

}


