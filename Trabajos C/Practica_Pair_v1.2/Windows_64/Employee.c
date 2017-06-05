#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include <string.h>


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    int comp;
    pEmployeeA=(Employee*)pEmployeeA;
    pEmployeeB=(Employee*)pEmployeeB;

    comp=strcmp(employee_getName(pEmployeeA),employee_getName(pEmployeeB));
    return comp;
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

    return this->id;

}

char* employee_getName(Employee* this)
{
    return this->name;
}

