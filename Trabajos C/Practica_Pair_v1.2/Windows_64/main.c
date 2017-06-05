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
    ArrayList* subArrayListEmp;
    Employee* newEmployee;
    int tam,i,j,retorno;



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

    /*for(i=0;i<tam;i++)
    {
        if(i%250==0)
        {
            system("pause");
        }

        newEmployee=pArrayListEmployee->get(pArrayListEmployee,i);
        employee_print(newEmployee);
    }
*/

    /*retorno=pArrayListEmployee->sort(pArrayListEmployee,employee_compare,1);
    if(retorno==-1)
    {
       printf("nada");
    }*/


    /*for(i=0;i<tam;i++)
    {
        if(i%250==0)
        {
            system("pause");
        }

        newEmployee=pArrayListEmployee->get(pArrayListEmployee,i);
        employee_print(newEmployee);
    }
*/

    /*newEmployee=employee_new();

    newEmployee=employee_param("1001","Zeta","Zones","0");

    pArrayListEmployee->add(pArrayListEmployee,newEmployee);

    tam=pArrayListEmployee->len(pArrayListEmployee);

    for(i=0;i<tam;i++)
    {
        if(i%250==0)
        {
            system("pause");
        }

        newEmployee=pArrayListEmployee->get(pArrayListEmployee,i);
        employee_print(newEmployee);
    }

    system("pause");

    newEmployee=pArrayListEmployee->pop(pArrayListEmployee,1000);

    employee_print(newEmployee);

    tam=pArrayListEmployee->len(pArrayListEmployee);

    for(i=0;i<tam;i++)
    {
        if(i%250==0)
        {
            system("pause");
        }

        newEmployee=pArrayListEmployee->get(pArrayListEmployee,i);
        employee_print(newEmployee);
    }*/

    subArrayListEmp=pArrayListEmployee->subList(pArrayListEmployee,0,200);

    tam=subArrayListEmp->len(subArrayListEmp);

    for(i=0;i<tam;i++)
    {
        if(i%250==0)
        {
            system("pause");
        }

        newEmployee=subArrayListEmp->get(subArrayListEmp,i);
        employee_print(newEmployee);
    }


    return 0;
}
