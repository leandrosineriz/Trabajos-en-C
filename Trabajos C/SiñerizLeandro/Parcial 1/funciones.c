#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#define AUDI 101
#define FIAT 102
#define FORD 103
#define PEUGEOT 104
#define TOYOTA 105

void setEstados(eAutomovil autos[],eProfesor profesor[],ePlaya playa[],int tamAuto,int tamProfe,int tamPLaya)
{
    int i;

    for(i=0; i<tamAuto; i++)
    {
        autos[i].estado=0;

    }

    for(i=0; i<tamProfe; i++)
    {
        profesor[i].estado=0;
    }

    for(i=0; i<tamPLaya; i++)
    {
        playa[i].estado=0;
    }
}

void cargarAutomoviles(eAutomovil automovil[])
{
    char patente[20][30]= {"AAA","BBB","CCC","DDD","EEE","FFF","GGG","HHH","III","JJJ","KKK","LLL","MMM","NNN","OOO","PPP","QQQ","RRR","SSS","UUU"};
    int marca[20]= {101,102,103,104,105,101,102,103,104,105,101,102,103,104,105,101,102,103,104,105};
    char modelo[20][30]= {"Mito","524","Q5","V3","Vantaje","H2","K3","F5","F1","Mito","524","Q5","V3","Vantaje","H2","K3","F5","F1","L3","K2"};
    int idProfesor[20]= {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};
    int estado[20]= {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};



    int i;
    for(i=0; i<20; i++)
    {
        strcpy(automovil[i].patente,patente[i]);
        automovil[i].marca = marca[i];
        strcpy(automovil[i].modelo,modelo[i]);
        automovil[i].idProfesor=idProfesor[i];
        automovil[i].estado = estado[i];
    }

}

void cargarProfesores(eProfesor profesor[])
{
    int id[10] = {1,2,3,4,5,6,7,8,9,10};
    char nombres[10][30]= {"juan","maria","pedro","luis","romina","jose","andrea","patricia","luciano","camila"};
    int estado[10]= {1,1,1,1,1,1,1,1,1,1};
    int i;

    for(i=0; i<10; i++)
    {
        profesor[i].idProfesor = id[i];
        strcpy(profesor[i].nombre,nombres[i]);
        profesor[i].estado=estado[i];
    }

}

void cargarPlaya(ePlaya playa[])
{
    char patente[20][30]= {"AAA","BBB","CCC","DDD","EEE","FFF","GGG","HHH","III","JJJ","KKK","LLL","MMM","NNN","OOO","PPP","QQQ","RRR","SSS","UUU"};
    int idProfesor[20]= {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};
    int estado[20]= {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int hora[20]= {13,14,12,05,16,18,19,20,6,3,4,19,10,9,17,14,18,9,10,12};



    int i;
    for(i=0; i<20; i++)
    {
        strcpy(playa[i].patente,patente[i]);
        playa[i].idProfesor=idProfesor[i];
        playa[i].estado = estado[i];
        playa[i].hora=hora[i];
    }

}

void mostrarProfesores(eProfesor profesor[],int tamProf)
{
    int i;

    printf("\nProfesores: \n");
    for(i=0; i<tamProf; i++)
    {
        if(profesor[i].estado==1)
        {
            printf("\nId Profesor: %d| Nombre: %s",profesor[i].idProfesor,profesor[i].nombre);

        }
    }
}

void mostrarAutosHabilitados(eAutomovil autos[],int tamAuto)
{
    int i;

    printf("\nTODOS LOS AUTOS HABILITADOS: \n");
    for(i=0; i<tamAuto; i++)
    {
        if(autos[i].estado==1)
        {
            printf("\nPatente: %s| Marca: %d| Modelo: %s| Profesor: %d",autos[i].patente,autos[i].marca,autos[i].modelo,autos[i].idProfesor);

        }
    }

}

void mostrarAutosEnPLaya(ePlaya playa[])
{
    int i;

    printf("\nEn PLAYA: \n");
    for(i=0; i<20; i++)
    {
        if(playa[i].estado==1)
        {
            printf("\nPatente: %s| Profesor: %d",playa[i].patente,playa[i].idProfesor);

        }
    }

}

void mostrarAutosEsperando(ePlaya playa[],int tamPlaya)
{
    int i;

    printf("\nESPERANDO: \n");
    for(i=20; i<tamPlaya; i++)
    {
        if(playa[i].estado==1)
        {
            printf("\nPatente: %s| Profesor: %d",playa[i].patente,playa[i].idProfesor);

        }
    }

}

int obtenerEspacioLibreAuto(eAutomovil lista[],int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==0)
        {
            return i;


        }
    }

    return -1;
}

int obtenerEspacioLibrePlaya(ePlaya lista[],int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==0)
        {
            return i;


        }
    }

    return -1;
}


void altaAutomovil(eAutomovil autos[],eProfesor profesor[],int tamProf,int tamAuto)
{
    char auxPatente[50],auxModelo[50];
    int auxMarca,auxId,libre,i,flagProf=0;

    libre=obtenerEspacioLibreAuto(autos,tamAuto);

    if(libre==-1)
    {
        printf("\nNo se pueden dar de alta mas autos");
    }
    else
    {
        printf("\nIngrese la patente: ");
        fflush(stdin);
        gets(auxPatente);
        strupr(auxPatente);

        for(i=0; i<tamAuto; i++)
        {
            if(strcmp(auxPatente,autos[i].patente)==0 && autos[i].estado==1)
            {
                printf("\nError.La patente ya se encuentra registrada.");
                return;
            }
        }
        printf("\nAUDI: 101 | FIAT: 102 | FORD: 103 | PEUGEOT: 104| NISSAN: 105");

        printf("\nIngrese la marca: ");
        scanf("%d",&auxMarca);

        printf("\nIngrese el Modelo: ");
        fflush(stdin);
        gets(auxModelo);
        strupr(auxModelo);

        mostrarProfesores(profesor,tamProf);

        printf("\nIngrese el ID del profesor: ");
        scanf("%d",&auxId);

        for(i=0; i<tamProf; i++)
        {
            if(auxId==profesor[i].idProfesor)
            {
                flagProf=1;
            }
        }
        if(flagProf==0)
        {
            printf("\nError.El id ingresado no corresponde a ningun profesor.");
            return;
        }
        strcpy(autos[libre].patente,auxPatente);
        autos[libre].marca=auxMarca;
        strcpy(autos[libre].modelo,auxModelo);
        autos[libre].idProfesor=auxId;
        autos[libre].estado=1;

        printf("\n Auto ingresado correctamente");


    }



}


void bajaAutomovil(eAutomovil autos[],int tamAuto)
{
    int i;
    char auxPatente[50];

    printf("\nIngrese la patente del auto que desea dar de baja: ");
    fflush(stdin);
    gets(auxPatente);
    strupr(auxPatente);

    for(i=0; i<tamAuto; i++)
    {
        if(strcmp(auxPatente,autos[i].patente)==0 && autos[i].estado==1)
        {
            autos[i].estado=0;
            printf("\nEl auto a sido dado de baja correctamente.");
            return;
        }
    }
    printf("\nNo se encontro ningun automovil con la patente ingresada");
}

void ordenarFilaEspera(ePlaya playa[],int tamPlaya)
{
    int i,j;
    ePlaya auxPlaya;

    for(i=20; i<tamPlaya-1; i++)
    {
        for(j=i+1; j<tamPlaya; j++)
        {
            if(playa[i].estado<playa[j].estado)
            {
                auxPlaya=playa[i];
                playa[i]=playa[j];
                playa[j]=auxPlaya;
            }
        }
    }
}

void ingreso(eAutomovil autos[],ePlaya playa[],int tamAuto,int tamPlaya)
{
    int i,j,libre,hora;
    char auxPatente[50],flagEncontro=0;


    ordenarFilaEspera(playa,tamPlaya);

    libre=obtenerEspacioLibrePlaya(playa,tamPlaya);



    printf("\nIngrese la patente del Automovil que desea ingresar: ");
    fflush(stdin);
    gets(auxPatente);
    strupr(auxPatente);


    for(i=0; i<tamAuto; i++)
    {
        if(strcmp(auxPatente,autos[i].patente)==0 && autos[i].estado==1)
        {
            for(j=0; j<20; j++)
            {
                if(strcmp(auxPatente,playa[j].patente)==0 && playa[j].estado==1)
                {
                    printf("\nEl auto ya se encuentra en el playon");
                    return;
                }
            }

            printf("\nEl auto esta habilitado para ingresar.");
            flagEncontro=1;
            strcpy(playa[libre].patente,autos[i].patente);
            playa[libre].idProfesor=autos[i].idProfesor;
            playa[libre].estado=1;
        }
    }
    if(flagEncontro==0)
    {
        printf("\nEl auto no esta habilitado a ingresar.");
        return;
    }



    if(libre<20)
    {
        for(i=20;i<tamPlaya;i++)
        {
            if(strcmp(playa[libre].patente,playa[i].patente)==0)
            {
                playa[i].estado=0;
            }
        }

        printf("\nIngrese el hora de ingreso:(int entre 0 y 24) ");
        scanf("%d",&hora);

        while(hora<0 || hora>24)
        {
            printf("\nLa hora ingresada es invalida. Reingrese: ");
            scanf("%d",&hora);
        }

        playa[libre].hora=hora;

        printf("\n El auto a ingresado correctamente");
    }
    else
    {
        printf("\n No hay lugar en el Playon se prondra en fila de espera.");
    }




}

void egreso(ePlaya playa[],int tamPlaya)
{
    int i,flag=0,auxHora,diferenciaHora,plata=0;
    char auxPatente[50];

    printf("\nIngrese la patente del Automovil que desea Egresar: ");
    fflush(stdin);
    gets(auxPatente);
    strupr(auxPatente);


    for(i=0; i<20; i++)
    {
        if(strcmp(auxPatente,playa[i].patente)==0 && playa[i].estado==1)
        {
            printf("El auto ingreso a las: %d\nIngrese la hora de egreso:(int entre 0 y 24) ",playa[i].hora);
            scanf("%d",&auxHora);

            while(auxHora<0 || auxHora>24)
            {
            printf("\nLa hora ingresada es invalida. Reingrese un int entre 0 y 24: ");
            scanf("%d",&auxHora);
            }
            while(playa[i].hora>auxHora)
            {
                printf("La hora de egreso no puede ser menor a la hora de ingreso(%d).Reingrese:  ",playa[i].hora);
                scanf("%d",&auxHora);
                while(auxHora<0 || auxHora>24)
                {
                printf("\nLa hora ingresada es invalida. Reingrese un int entre 0 y 24: ");
                scanf("%d",&auxHora);
                }

            }

            diferenciaHora=auxHora-playa[i].hora;

            if(diferenciaHora>4)
            {
                diferenciaHora=diferenciaHora-4;
                plata=diferenciaHora*10;
            }

            if(plata==0)
            {
                printf("El auto estubo menos de 4 horas el profesor no debe pagar nada");
            }
            else
            {
                printf("El auto estubo %d horas extras debe pagar %d pesos",diferenciaHora,plata);
            }

            playa[i].estado=0;

            printf("\nEl auto a egresado correctamente");
            flag=1;

        }
    }
    if(flag==0)
    {
        printf("\nNo hay ningun auto con la patente ingresada en el playon.");
        return;
    }

    for(i=20; i<tamPlaya; i++)
    {
        if(playa[i].estado==1)
        {
            printf("\nEste Auto esta esperando para ingresar:\n Patente: %s| Profesor: %d",playa[i].patente,playa[i].idProfesor);
            return;
        }
    }


}


void informes(eAutomovil autos[],ePlaya playa[],int tamAuto,int tamPlaya)
{
    int i,j,cont=0;
    eAutomovil auxAuto;

    for(i=0; i<tamAuto-1; i++)
    {
        for(j=i; j<tamAuto; j++)
        {
            if(autos[i].marca>autos[j].marca)
            {
                auxAuto=autos[i];
                autos[i]=autos[j];
                autos[j]=auxAuto;
            }
            else if(autos[i].marca==autos[j].marca)
            {
                if(strcmp(autos[i].patente,autos[j].patente)>0)
                {
                    auxAuto=autos[i];
                    autos[i]=autos[j];
                    autos[j]=auxAuto;

                }
            }
        }
    }

    printf("\nTODOS LOS AUTOS HABILITADOS ORDENADOS POR MARCA Y PATENTE: \n");
    for(i=0; i<tamAuto; i++)
    {
        if(autos[i].estado==1)
        {
            printf("\nPatente: %s| Profesor: %d",autos[i].patente,autos[i].idProfesor);

        }
    }

    printf("\nTODOS LOS AUTOS ESTACIONADOS:\n");
    for(i=0; i<20; i++)
    {
        if(playa[i].estado==1)
        {
            for(j=0;j<tamAuto;j++)
            {

                if(strcmp(playa[i].patente,autos[j].patente)==0 && autos[j].estado==1)
                {
                    printf("\nPatente: %s| Marca: %d| Modelo: %s| Profesor: %d",autos[j].patente,autos[j].marca,autos[j].modelo,autos[j].idProfesor);

                }
            }
        }
    }

    printf("\n\nTOTAL DE AUTOS ESTACIONADOS MARCA FIAT: ");

    for(i=0; i<20; i++)
    {
        if(playa[i].estado==1)
        {
            for(j=0; j<tamAuto; j++)
            {


                if(strcmp(playa[i].patente,autos[j].patente)==0 && autos[j].estado==1 && autos[j].marca==FIAT)
                {
                    cont++;

                }
            }
        }
    }
    printf("%d",cont);

    printf("\n\nAUTOS ESPERANDO PARA ENTRAR: \n");

    for(i=20; i<tamPlaya; i++)
    {
        if(playa[i].estado==1)
        {
            for(j=0; j<tamAuto; j++)
            {

                if(strcmp(playa[i].patente,autos[j].patente)==0 && autos[j].estado==1)
                {
                    printf("\nPatente: %s| Marca: %d| Modelo: %s| Profesor: %d",autos[j].patente,autos[j].marca,autos[j].modelo,autos[j].idProfesor);

                }
            }
        }
    }


}
