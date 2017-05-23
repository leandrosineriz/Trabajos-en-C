

typedef struct{

   char patente[20];
   int marca;
   char modelo[50];
   int idProfesor;
   int estado;


}eAutomovil;

typedef struct{

    int idProfesor;
    char nombre[50];
    int estado;

}eProfesor;

typedef struct
{
    int idProfesor;
    char patente[50];
    int estado;
    int hora;

}ePlaya;

/** \brief Pone los estados en 0
 *
 * \param array eAutomovil
 * \param array eProfesor
 * \param array ePlaya
 * \param tamaño array eAutomovil
 * \param tamaño array eProfesor
 * \param tamaño array ePlaya
 *
 */

void setEstados(eAutomovil[],eProfesor[],ePlaya[],int,int,int);

/** \brief Harcodea array eProfesores
 *
 * \param array eProfesor
 *
 */

void cargarProfesores(eProfesor []);

/** \brief Harcodea array eAutomovil
 *
 * \param array eAutomovil
 *
 */

void cargarAutomoviles(eAutomovil []);

/** \brief Harcodea array ePlaya
 *
 * \param array ePlaya
 *
 */

void cargarPlaya(ePlaya []);

/** \brief Muesta la lista de profesores habilitados
 *
 * \param array eProfesor
 * \param tamaño del array
 *
 */

void mostrarProfesores(eProfesor [],int );

/** \brief Muestra la lista de Autos habilitados
 *
 * \param array eAutomovil
 * \param tamaño del array
 *
 */

void mostrarAutosHabilitados(eAutomovil [],int );

/** \brief Muestra la lista de Autos en el playon
 *
 * \param array ePlaya
 * \param tamaño del array
 *
 */

void mostrarAutosEnPLaya(ePlaya []);

/** \brief Muestra la lista de Autos esperando para entrar
 *
 * \param array ePlaya
 * \param tamaño del array
 *
 */

void mostrarAutosEsperando(ePlaya [],int );

/** \brief Devuelve el primer espacio libre del array eAutomovil
 *
 * \param array eAutomovil
 * \param tamaño del array
 * \return espacio libre
 *
 */

int obtenerEspacioLibreAuto(eAutomovil[],int );

/** \brief devuelve el primer espacio libre del array ePlaya
 *
 * \param array ePlaya
 * \param tamaño del array
 * \return espacio libre
 *
 */

int obtenerEspacioLibrePlaya(ePlaya [],int);

/** \brief ordena los autos en la fila de espera por estado para que se respete el orden de llegada
 *
 * \param array ePlaya
 * \param tamaño array
 *
 */

void ordenarFilaEspera(ePlaya [],int );

/** \brief Da de alta un Automovil en un array eAutomovil
 *
 * \param array eAutomovil
 * \param array eProfesor
 * \param tamaño del array
 * \param tamaño del array
 *
 */

void altaAutomovil(eAutomovil [],eProfesor[],int,int );

/** \brief Da de baja un automovil poniendo su estado en 0 en un array eAutomovil
 *
 * \param array eAutomovil
 * \param tamaño del array
 *
 */

void bajaAutomovil(eAutomovil [],int );

/** \brief da de alta un automovil dentro del array ePlaya copiando los datos de un auto de eAutomovil
 *
 * \param array eAutomovil
 * \param array ePlaya
 * \param tamaño del array eAutomovil
 * \param tamaño del array ePlaya
 *
 */

void ingreso(eAutomovil [],ePlaya [],int ,int );

/** \brief pone el estado de un auto en ePlaya en 0 y muestra si existe el primer auto esperando para ingresar
 *
 * \param array ePlaya
 * \param tamaño del array
 *
 */

void egreso(ePlaya[],int);

/** \brief Muestra el array eAutomovil ordenado por marca y patente, todos los autos estacionados en ePlaya, la cantidad de autos marca FIAT y todos los autos fuera del estacionamiento.
 *
 * \param array eAutomovil
 * \param array ePlaya
 * \param tamaño del array eAutomovil
 * \param tamaño del array ePlaya
 *
 */

void informes(eAutomovil [],ePlaya [],int ,int );
