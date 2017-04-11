
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblio.h"

typedef struct
{
    int A=5;
    char nombres[5][15];
    int legajos[5];
    int estados[5]={0};
}eAlumno;

void mostrarDatos(eAlumno alumno)
{
    int i;
    for(i=0; i<alumno.A; i++)
    {
        if(est[i]==1)
            printf("%d--%s\n",alumno.legajos[i], alumno.nombres[i]);
    }
}


void cargarDatos(eAlumno alumno)
{
    int i;
    int hayLugar=0;


    for(i=0; i<alumno.A; i++)
    {
        if(alumno.estados[i]==0)
        {
            printf("Ingrese un legajo: ");
            scanf("%d", &alumno.legajos[i]);
            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(alumno.nombres[i]);
            alumno.estados[i]=1;
            hayLugar = 1;
            break;
        }


    }
    if(!hayLugar)
    {
        printf("No hay lugar disponible");
    }
}


void bajaDatos(eAlumno alumno)
{
    int legajo, i;
    char respuesta;
    int flagEncontro=0;
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);
    for(i=0; i<alumno.A;i++)
    {
        if(alumno.estados[i]== 1 && alumno.legajos == leg[i])
        {
            printf("%d--%s", alumno.legajos[i], alumno.nombres[i]);
            printf("Esta seguro que desea dar de baja? s/n");
            respuesta = getche();
            if(respuesta=='s')
            {
                alumno.estados[i] = 0;
            }
            else
            {
                printf("Accion cancelada!!!");
            }

            flagEncontro = 1;
            break;
        }

    }
    if(!flagEncontro)
    {
        printf("Legajo inexistente");
    }


}
void modificarDatos(eAlumno alumno)
{
    int legajo, i;
    char respuesta, auxNombre[15];
    int flagEncontro=0;
    printf("Ingrese legajo: ");
    scanf("%d", &alumno.legajos);
    for(i=0; i<alumno.A;i++)
    {
        if(alumno.estados[i]== 1 && legajo == alumno.legajos[i])
        {
            printf("%d--%s", alumno.legajos[i], alumno.nombres[i]);
            printf("ingrese el nuevo nombre: ");
            fflush(stdin);
            gets(auxNombre);
            printf("Esta seguro que desea modificar? s/n");
            respuesta = getche();
            if(respuesta=='s')
            {
                strcpy(alumno.nombres[i], auxNombre);
            }
            else
            {
                printf("Accion cancelada!!!");
            }

            flagEncontro = 1;
            break;
        }

    }
    if(!flagEncontro)
    {
        printf("Legajo inexistente");
    }


}
void ordenarPorNombre(eAlumno alumno)
{
    int i, j;
    char auxCadena[15];
    int auxInt;
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<alumno.A; j++)
        {
            if(strcmp(alumno.nombres[i],alumno.nombres[j])>0)
            {
                strcpy(auxCadena,alumno.nombres[i]);
                strcpy(alumno.nombres[i], alumno.nombres[j]);
                strcpy(alumno.nombres[j], auxCadena);

                auxInt = alumno.legajos[i];
                alumno.legajos[i] = alumno.legajos[j];
                alumno.legajos[j] = auxInt;

                auxInt = alumno.estados[i];
                alumno.estados[i] = alumno.estados[j];
                alumno.estados[j] = auxInt;

            }
            else
            {
                if(strcmp(alumno.nombres[i],alumno.nombres[j])==0)
                {
                    if(alumno.legajos[i]>alumno.legajos[j])
                    {

                        auxInt = alumno.legajos[i];
                        alumno.legajos[i] = alumno.legajos[j];
                        alumno.legajos[j] = auxInt;


                auxInt = alumno.estados[i];
                alumno.estados[i] = alumno.estados[j];
                alumno.estados[j] = auxInt;
                    }
                }
            }
        }
    }
}

