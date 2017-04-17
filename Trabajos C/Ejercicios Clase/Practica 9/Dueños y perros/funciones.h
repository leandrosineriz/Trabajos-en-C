

typedef struct
{
    int codigo;
    char nombre[50];
    char telefono[50];

}eDuenio;

typedef struct
{
    int identificador;
    int raza;
    char nombre[50];
    int vacunasAlDia;
    int duenio;
}ePerro;

//void mostrarDatos(ePerro [],eDuenio [],char [][]);

void cargarDuenio(eDuenio[]);

void cargarPerro(ePerro[]);

void mostrarPerrosConDuenios(ePerro[],eDuenio[]);

