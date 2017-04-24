

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

void cargarSeries(eSerie series[])
{
    int idSerie[5]= {100,101,102,103,104};
    int estado[5]= {1,1,1,1,1};
    char titulo[5][30]= {"TBBT","BB","GOT","AHS","SCD"};
    int temporadas[5]= {9,7,7,6,1};
    char genero[5][30]= {"Comedia","Policial","Ciencia Ficcion","Terror","Comedia"};

    int i;
    for(i=0; i<5; i++)
    {
        series[i].idSerie = idSerie[i];
        strcpy(series[i].titulo, titulo[i]);
        series[i].estado = estado[i];
        series[i].temporadas = temporadas[i];
        strcpy(series[i].genero, genero[i]);
    }

}
void cargarClientes(eCliente clientes[])
{
    int id[10] = {1,2,3,4,5,6,7,8,9,10};
    char nombres[10][30]= {"juan","maria","pedro","luis","romina","jose","andrea","patricia","luciano","camila"};
    int estado[10]= {1,1,1,1,1,1,1,1,1,1};
    int idSerie[10]= {100,100,101,103,103,101,102,103,100,102};
    int i;

    for(i=0; i<10; i++)
    {
        clientes[i].idCliente = id[i];
        strcpy(clientes[i].nombre, nombres[i]);
        clientes[i].estado = estado[i];
        clientes[i].idSerie = idSerie[i];
    }

}

void mostrarListaCliente(eCliente lista[],int tam)
{
    int i,flag=0;



    printf("\n\nCLIENTES: ");
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {
            flag=1;
            printf("\n\t|%d\t|%s|\t%d|\n",lista[i].idCliente,lista[i].nombre,lista[i].estado);
        }


    }
    if(flag==0)
    {
        printf("No se registro ningun usuario.\n");
    }

}


void mostrarListaSerie(eSerie lista[],int tam)
{
    int i,flag=0;



    printf("\n\nSERIES: ");
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {
            flag=1;
            printf("\n\t|%d\t|%s|\t%s|\t%d\t%d\n",lista[i].idSerie,lista[i].titulo,lista[i].genero,lista[i].temporadas,lista[i].estado);
        }


    }
    if(flag==0)
    {
        printf("No se registro ningna Pelicula.\n");
    }

}

void mostrarClientesySeries(eCliente clientes[],eSerie series[],int tamClientes,int tamSeries)
{
    int i,j,flag;



    printf("\n\nCLIENTES con su SERIE: ");

    for(i=0; i<tamClientes; i++)
    {
        flag=0;
        for(j=0; j<tamSeries; j++)
        {

            if(clientes[i].idSerie==series[j].idSerie)
            {
                if(flag==0)
                {
                    flag=1;
                    printf("\n\n\t|%d\t|%s|\t%d|",clientes[i].idCliente,clientes[i].nombre,clientes[i].estado);
                }

                printf("\n\t|%d\t|%s|\t%s|\t%d\t%d\n\n\n",series[j].idSerie,series[j].titulo,series[j].genero,series[j].temporadas,series[j].estado);

            }
        }


    }


}


void mostrarSeriesconClientes(eCliente clientes[],eSerie series[],int tamClientes,int tamSeries)
{
    int i,j,flag;



    printf("\n\nSERIES con su CLIENTE: ");

    for(i=0; i<tamSeries; i++)
    {
        flag=0;
        for(j=0; j<tamClientes; j++)
        {

            if(series[i].idSerie==clientes[j].idSerie)
            {
                if(flag==0)
                {
                    flag=1;
                    printf("\n\n\n\t|%d\t|%s|\t%s|\t%d\t%d\n",series[i].idSerie,series[i].titulo,series[i].genero,series[i].temporadas,series[i].estado);
                }

                   printf("\n\t|%d\t|%s|\t%d|",clientes[j].idCliente,clientes[j].nombre,clientes[j].estado);
            }
        }


    }


}


void mostrarClientesTBBT(eCliente clientes[],eSerie series[],int tamClientes)
{
    int i,flag=0;



    printf("\n\n\nCLIENTES QUE VEN TBBT: \n");

    for(i=0; i<tamClientes; i++)
    {

        if(clientes[i].idSerie==series[0].idSerie)
        {
            flag=1;
            printf("\n\t|%d\t|%s|\t%d|\n",clientes[i].idCliente,clientes[i].nombre,clientes[i].estado);
        }
    }


    if(flag==0)
    {
        printf("no se encontraron usuarios en %s",series[0].titulo);

    }


}

void serieMenosPopular(eCliente clientes[],eSerie series[],eContador contador[],int tamClientes,int tamSeries)
{
    int i,j,min,flagMin=0;

    printf("\n\nLA SERIE MENOS POPULAR ES: \n");


    for(i=0;i<tamSeries;i++)
    {
        contador[i].idSerie=series[i].idSerie;
        contador[i].cont=0;
        for(j=0;j<tamClientes;j++)
        {
            if(series[i].idSerie==clientes[j].idSerie)
            {
                contador[i].cont++;
            }
        }

    }

    for(i=0;i<tamSeries;i++)
    {
        if(flagMin==0)
        {
            flagMin=1;
            min=contador[i].cont;
        }
        else if(min>contador[i].cont)
        {
            min=contador[i].cont;

        }

    }


    for(i=0;i<tamSeries;i++)
    {
        if(contador[i].cont==min)
        {

           printf("\n\n\t|%d\t|%s|\t%s|\t%d\t%d\n",series[i].idSerie,series[i].titulo,series[i].genero,series[i].temporadas,series[i].estado);
        }
    }

    printf("\n     Con %d Usuarios.\n\n",min);



}

void cargarClientes2(eCliente2 clientes[])
{
    int id[10] = {1,2,3,4,5,6,7,8,9,10};
    char nombres[10][30]= {"juan","maria","pedro","luis","romina","jose","andrea","patricia","luciano","camila"};
    int estado[10]= {1,1,1,1,1,1,1,1,1,1};
    int idSerie[10][3]={{100,100,101},{103,103,101},{102,103,100},{102,100,100},{101,103,103},{101,102,103},{100,102,100},{100,101,103},{103,101,102},{103,100,102}};
    int i,j;

    for(i=0; i<10; i++)
    {
        clientes[i].idCliente = id[i];
        strcpy(clientes[i].nombre, nombres[i]);
        clientes[i].estado = estado[i];
        for(j=0;j<3;j++)
        {
        clientes[i].idSerie[j] = idSerie[i][j];
        }
    }

}


void mostrarClienteSerie(eCliente2 clientes[],eSerie series[],eSeriesCliente serieCliente[],int tamClientes,int tamSeries)
{
    int i,j,cont=0,flag=0;
    char auxNombre[20];

    printf("\n\nVER SERIES DEL CLIENTE.");
   /* printf("\n\nIngrese el nombre del cliente: ");
    fflush(stdin);
    gets(auxNombre);
    printf("%s",auxNombre);*/


    for(i=0;i<tamClientes;i++)
    {
        for(j=0;j<tamSeries;j++)
        {
            if(clientes[i].idSerie==series[j].idSerie)
            {

                serieCliente[cont].idClienteSerie=clientes[i].idCliente+series[j].idSerie;
                strcpy(serieCliente[cont].nombreCliente,clientes[i].nombre);
                strcpy(serieCliente[cont].nombreSerie,series[j].titulo);

                cont++;

            }
        }
    }


        for(j=0;j<cont;j++)
        {
            if(strcmp("juan",serieCliente[j].nombreCliente)==0)
            {
                    if(flag==0)
                    {
                        printf("\n\n%s----Series: ",serieCliente[j].nombreCliente);
                        flag=1;
                    }
                    printf("\n%s",serieCliente[j].nombreSerie);





            }
        }






}
