#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAMPROF 30
#define TAMAUTO 30
#define TAMPLAYA 30
#define AUDI 101
#define FIAT 102
#define FORD 103
#define PEUGEOT 104
#define TOYOTA 105


int main()
{
    char seguir='s';
    int opcion=0,flag=0;
    eProfesor profesores[TAMPROF];
    eAutomovil automoviles[TAMAUTO];
    ePlaya playa[TAMPLAYA];

    setEstados(automoviles,profesores,playa,TAMAUTO,TAMPROF,TAMPLAYA);

    cargarProfesores(profesores);

    cargarAutomoviles(automoviles);
    flag=1;

    cargarPlaya(playa);

    while(seguir=='s')
    {
        /*mostrarAutosHabilitados(automoviles,TAMAUTO);
        mostrarAutosEnPLaya(playa);
        mostrarAutosEsperando(playa,TAMPLAYA);*/

        printf("\n1.Alta veiculo\n");
        printf("2.Baja veiculo\n");
        printf("3.Ingreso veiculo\n");
        printf("4.Egreso veiculo\n");
        printf("5.Mostrar Lista\n");
        printf("6.Salir\n\n");



        scanf("%d",&opcion);



        switch(opcion)
        {
        case 1:
            altaAutomovil(automoviles,profesores,TAMPROF,TAMAUTO);
            flag=1;

            break;
        case 2:

            if(flag==1)
            {
                bajaAutomovil(automoviles,TAMAUTO);
            }
            else
            {
                printf("Tiene que habilitar un Automovil primero.");
            }
            break;
        case 3:
            if(flag==1)
            {
                ingreso(automoviles,playa,TAMAUTO,TAMPLAYA);
            }
            else
            {
                printf("Tiene que habilitar un Automovil primero.");
            }
            break;
        case 4:
            if(flag==1)
            {
                egreso(playa,TAMPLAYA);
            }
            else
            {
                printf("Tiene que habilitar un Automovil primero.");
            }
            break;
        case 5:
            if(flag==1)
            {
                informes(automoviles,playa,TAMAUTO,TAMPLAYA);
            }
            else
            {
                printf("Tiene que habilitar un Automovil primero.");
            }

            break;
        case 6:
            seguir = 'n';
            break;
        default:
            printf("La opcion ingresada es incorrecta.");
        }
        printf("\n\n");
    }





    return 0;
}
