#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include <string.h>


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    char empleadoA[500],empleadoB[500];
    strcpy(empleadoA,pEmployeeA);
    strcpy(empleadoB,pEmployeeB);


    return strcmp(empleadoA,empleadoB);
}


void employee_print(Employee* this)
{
    if(this!=NULL)
    {
       printf("%d,%s,%s,%d\n",this->id,this->name,this->lastName,this->isEmpty);
       return;
    }
    printf("NULL");

}


Employee* employee_new(void)
{
    Employee* newEmployee;

    newEmployee=(Employee*)malloc(sizeof(Employee));


    return newEmployee;

}

Employee* employee_param(char* index,char* nombre,char* apellido,char* estado)
{
    Employee* newEmployee;

    newEmployee=employee_new();

    newEmployee->id=atoi(index);
    strcpy(newEmployee->name,nombre);
    strcpy(newEmployee->lastName,apellido);
    newEmployee->isEmpty=atoi(estado);


    return newEmployee;

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


