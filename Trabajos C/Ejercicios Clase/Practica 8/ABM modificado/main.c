#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** \brief
 *
 * \param vector de enteros
 * \param capacidad del vector
 * \return
 *
 */

 void estadistica(int[]);
/*typedef struct
{
    int A=5;
    char nombres[5][15];
    int legajos[5];
    int estados[5]={0};
}eAlumno;*/


int main()
{
   /* int i, j;
    int A = 5;
    char auxCadena[15];
    int auxInt;
    int opcion;
    char seguir='s';

eAlumno alumno;



    do
    {

        printf("1. Alta\n");
        printf("2. Baja\n");
        printf("3. Modificacion\n");
        printf("4. Mostrar\n");
        printf("5. Ordenar\n");
        printf("6. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
            cargarDatos(alumno);
            break;
        case 2:
            bajaDatos(alumno);
            break;
        case 3:
            modificarDatos(alumno);
            break;
        case 4:
            mostrarDatos(alumno);
            break;
        case 5:
            ordenarPorNombre(alumno);
            break;

        }

    }while(seguir=='s');
    */

    int edades[10]={10,18,22,35,45,89,22,33,45,55};

    estadistica(edades);





    return 0;
}




void estadistica(int edades[])
{
    int i,j,max,flag=0;
    int menor18=0,entre18_25=0,mayor25=0;



    for(i=0;i<10;i++)
    {
        if(edades[i]<18)
        {
            menor18++;
        }
        else if(edades[i]>=18&&edades[i]<=25)
        {
            entre18_25++;
        }
        else
        {
            mayor25++;
        }
    }

    int cantidades[3]={menor18,entre18_25,mayor25};

    for(i=0;i<3;i++)
    {
        if(flag==0)
        {
            flag=1;
            max=cantidades[i];
        }
        else if(edades[i]>max)
        {
            max=cantidades[i];
        }

    }

    for(i=max;i>0;i--)
    {
        for(j=0;j<3;j++)
        {
            if(cantidades[j]>=i)
            {
                printf(" * ");

            }
            else
            {
                printf("   ");

            }
        }
        printf("\n");
    }
}

