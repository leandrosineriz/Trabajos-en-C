#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 5

/*
2- mostrar cada uno
3- mostrar clientes con su serie
4- por cada serie los clientes que la estan viendo
5- todos los clientes que ven TBBT (100)
6- La serie menos popular

Crear una cuarta estructura que permita relacionar un cliente con una serie, de esta manera podremos obtener una relacion
muchos a muchos (Un cliente que ve muchas series)

7- Todas las series que ven los clientes de nombre "Juan"
*/

int main()
{
    eCliente clientes[10];
    eSerie series[TAM];
    eContador contadores[TAM];
    eSeriesCliente serieCliente[20];






    cargarClientes(clientes);
    cargarSeries(series);
    CargarSeriesClientes(serieCliente);
    mostrarListaCliente(clientes,10);
    mostrarListaSerie(series,TAM);
    mostrarClientesySeries(clientes,series,serieCliente,10,TAM,20);
    mostrarSeriesconClientes(clientes,series,serieCliente,10,TAM,20);
    mostrarClientesTBBT(clientes,series,serieCliente,10,TAM,20);
    serieMenosPopular(clientes,series,serieCliente,contadores,10,TAM,20);






    return 0;

}
