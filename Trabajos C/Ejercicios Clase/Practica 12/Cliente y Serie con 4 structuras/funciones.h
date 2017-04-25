

typedef struct
{
    int idSerie;
    int estado;
    char titulo[50];
    int temporadas;
    char genero[50];

}eSerie;

typedef struct
{
    int idCliente;
    int estado;
    char nombre[50];

}eCliente;


typedef struct
{
    int idSerie;
    int cont;

}eContador;

typedef struct
{
    int idCliente;
    int idSerie;

}eSeriesCliente;

void cargarSeries(eSerie[]);

void cargarClientes(eCliente[]);

void CargarSeriesClientes(eSeriesCliente[]);

void mostrarListaCliente(eCliente[],int);

void mostrarListaSerie(eSerie[],int);

void mostrarClientesySeries(eCliente[],eSerie[],eSeriesCliente[],int,int,int);

void mostrarSeriesconClientes(eCliente[],eSerie[],eSeriesCliente[],int,int,int);

void mostrarClientesTBBT(eCliente[],eSerie[],eSeriesCliente[],int,int,int);

void serieMenosPopular(eCliente[],eSerie[],eSeriesCliente[],eContador[],int,int,int);


