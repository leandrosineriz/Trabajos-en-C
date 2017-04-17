#include <stdio.h>
#include <stdlib.h>
/*
cliente

*codigo
*nombre
*telefono
*problema
*estado*/


typedef struct
{
    int codigo;
    char nombre[25];
    char telefono[20];
    char problema[500];
    int estado;
} eCliente;

eCliente cargarCliente(int, char[], char[], char[]);
void mostrarCliente(eCliente);


int main()
{
    eCliente misClientes[3];
    int i;
    int codigo;
    char nombre[50], problema[500], telefono[20];


    for(i=0; i<3; i++)
    {
        printf("Ingrese codigo del cliente: ");
        scanf("%d", &codigo);
        printf("Ingrese nombre del cliente: ");
        fflush(stdin);
        gets(nombre);

        printf("Ingrese telefono del cliente: ");
        fflush(stdin);
        gets(telefono);
        printf("Ingrese problema del cliente: ");
        fflush(stdin);
        gets(problema);
        misClientes[i] = cargarCliente(codigo, nombre, telefono, problema);
    }

    for(i=0; i<3; i++)
    {
        mostrarCliente(misClientes[i]);
    }

    return 0;
}
eCliente cargarCliente(int codigo, char nombre[], char telefono[], char problema[])
{
    eCliente miCliente;
    miCliente.codigo=codigo;
    strcpy(miCliente.nombre, nombre);
    strcpy(miCliente.telefono, telefono);
    strcpy(miCliente.problema, problema);
    miCliente.estado=1;

    return miCliente;

}
void mostrarCliente(eCliente cliente)
{
    printf("%d--%s--%s--%s--%d\n", cliente.codigo,cliente.nombre, cliente.telefono, cliente.problema, cliente.estado);
}
