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
    eSeriesCliente serieCliente[10];
    eCliente2 clientes2[10];






    cargarClientes(clientes);
    cargarSeries(series);
    mostrarListaCliente(clientes,10);
    mostrarListaSerie(series,TAM);
    mostrarClientesySeries(clientes,series,10,TAM);
    mostrarSeriesconClientes(clientes,series,10,TAM);
    mostrarClientesTBBT(clientes,series,10);
    serieMenosPopular(clientes,series,contadores,10,TAM);
    mostrarClienteSerie(clientes2,series,serieCliente,10,TAM);






    return 0;

}
