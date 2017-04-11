

typedef struct
{
    int A=5;
    char nombres[5][15];
    int legajos[5];
    int estados[5]={0};
}eAlumno;

void mostrarDatos(eAlumno);
void cargarDatos(eAlumno);
void bajaDatos(eAlumno);
void modificarDatos(eAlumno);
void ordenarPorNombre(eAlumno);
