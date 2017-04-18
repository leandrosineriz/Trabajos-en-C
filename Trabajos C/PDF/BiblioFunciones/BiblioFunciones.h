
/** \brief pide un numero entero por prompt
 *
 * \param texto en consola
 * \param
 * \return numero ingresado
 *
 */
int pedirNumero(char texto[]);

/** \brief pide un numero float por prompt
 *
 * \param texto en consola
 * \param
 * \return numero ingresado
 *
 */
float pedirNumeroFloat(char texto[]);

/** \brief muestra un numero en consola
 *
 * \param texto por prompt
 * \param numero
 * \return numero ingresado
 *
 */
int mostrarNumero(char texto[],int);

/** \brief valida que el numero sea de 4 cifras
 *
 * \param numero
 * \param
 * \return numero validado
 *
 */
int validacionNumeroLeg(int);

/** \brief valida que el sueldo este entre los limites definidos
 *
 * \param sueldo
 * \param min
 * \param max
 * \return sueldo validado
 *
 */
float validacionSueldo(float,int,int);


int funcionFactorial(int);

void mostrarDatos(int[], char[][15], int[],  int);
void cargarDatos(int[], char[][15], int[],  int);
void bajaDatos(int[], char[][15], int[],  int);
void modificarDatos(int[], char[][15], int[],  int);
void ordenarPorNombre(int[], char[][15], int[],  int);
