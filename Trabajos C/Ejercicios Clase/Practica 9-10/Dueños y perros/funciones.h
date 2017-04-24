

typedef struct
{
    int codigo;
    char nombre[50];
    char telefono[50];
    int estado;

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

//void cargarDuenio(eDuenio[]);

void cargarPerro(ePerro[]);

void mostrarPerrosConDuenios(ePerro [],eDuenio []);

void mostrarDueniosConPerros(ePerro[],eDuenio[]);

void mostrarDueniosConPerrosPP(ePerro [],eDuenio []);

void mostrarDueniosConPerrosSinVacunar(ePerro [],eDuenio []);

void validarCodigo(eDuenio[],int,int);

int ingresarDuenio(eDuenio[],int);

int buscarLibre(eDuenio[],int);

void setDuenios(eDuenio[], int);

void mostrarSoloDueniosActivos(eDuenio[],int);
