#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define ELEMENTS 1000




struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

} typedef Employee;




/** \brief Sirve Para indicar que todas las posiciones en la matriz est�n vac�as, esta funci�n coloca la bandera (isEmpty) en VERDADERO en todas las posiciones de la matriz.
*
* \param Employee* list Puntero a la variedad de empleados
* \param len int Longitud de la matriz
* \return int Return (-1) si hay un error [longitud no v�lida o puntero nulo] - (0) si est� todo bien
*
*/
int initEmployees(Employee* list, int len);




/**\brief agrega en una lista existente de empleados los valores recibidos como par�metros
*         en la primera posici�n vac�a
*
* \param list employee*
* \param len int
* \param id int
* \param name[] char
* \param lastName[] char
* \param salary float
* \param sector int
* \return int Return (-1) si hay un error [longitud no v�lida o puntero nulo] - (0) si est� todo bien
*
*/
int addEmployee(Employee*, int len, int id, char name[],char lastName[],float salary,int sector);




/** \brief Encuentra un empleado por id y devuelve la posici�n del �ndice en la matriz.
*
* \param list Employee*
* \param len int
* \param id int
* \return Retorna el puesto de �ndice de empleado o (-1) si la [longitud no es v�lida o si el puntero  es nulo  o empleado no encontrado]
*
*/
int findEmployeeById(Employee* list, int len,int id);




/** \brief Eliminar un empleado por Id (poner la bandera isEmpty en 1)
*
* \param list Employee*
* \param len int
* \param id int
* \return int Return (-1) si hay un error [Longitud no v�lida o puntero nulo o si no se puede encontrar un empleado] - (0) si est� todo bien
*
*/
int removeEmployee(Employee* list, int len, int id);




/** \brief Ordena los elementos en la matriz de empleados, el orden de los argumentos indica el orden (1) ARRIBA o (0) ABAJO
*
* \param list Employee*
* \param len int
* \param order int  [1] indica ARRIBA - [0] indica ABAJO
* \return int Return (-1) si hay un error [longitud no v�lida o puntero nulo] - (0) si est� todo bien
*
*/
int sortEmployeesByLastNameAndSector(Employee* list, int len, int order);




/** \brief imprime el contenido de la matriz de empleados
*
* \param list employee*
* \param length int
* \return int
*
*/
int printEmployees(Employee* list, int length);


/** \brief Obtiene un men� de opciones como una cadena, opci�n v�lida m�nima y m�xima, imprime el men� y obtiene la opci�n seleccionada por scanf.
*          Valida que la opci�n est� entre los valores proporcionados por \ param y la devuelve como un int
 *
 * \param char[] Message to print as a menu (it must include an enumerated options list).
 * \param int Minimal opci�n aceptada.
 * \param int Maximal opci�n aceptada.
 * \return int Returns (-1) en caso de error (opci�n no v�lida)
 *
 *
 */
int showMenuGetOption(char[],int,int);


/** \brief Limpia la pantalla e imprime un mensaje seguido de una pausa. Luego limpia la pantalla nuevamente.
 *
 * \param char[].
 * \return Void.
 *
 */
void showMessage(char[]);


/** \brief Imprime un mensaje y espera un valor flotante.
 *
 * \param char[] Obtiene el mensaje para imprimir.
 * \return float Returns retorna el valor flotante proporcionado por la usuario.
 *
 */
float getPositiveFloat(char[]);


/** \brief Imprime un mensaje solicitando confirmaci�n por s / n y
 *         devuelve 1 para 's' y 0 para 'n'.
 *
 *
 * \return int Returns 1 para 's' y 0 para 'n'.
 *
 */
int getConfirm();


/** \brief imprime los datos de un empleado por numero de indice.
 *
 * \param  Struct* Array.
 * \param  numero de indice del elemento a imprimir.
 * \return devuelve -1 cuando el indice no se encuentra o esta asociado a un elemento isEmpty (borrado). en caso de exito, devuelve el indice.
 *
 */
int printAnEmployee (Employee*, int);


/** \brief Repasa toda la matriz comprobando si isEmpty == 1. En caso de que sea verdadero en CADA elemento, devuelve 1. Si no, devuelve 0.
 *
 * \param Struct* Array.
 * \param numero de indices.
 * \return Devuelve 1 si est� todo vacio, 0 si no.
 *
 */
int checkAllEmpty (Employee*, int);


/** \brief imprime una pesta�a de categor�as de los empleados en el mismo orden que la funcion printAnEmployee.
 *
 * \return Void.
 *
 */
void printTab ();


/** \brief Crea e imprime un informe estadistico de salarios.
 *
 * \param Struct* Array.
 * \param numero de indices.
 * \return Void.
 *
 */
void informSalaryStat(Employee*, int);


/** \brief Imprime todos los elementos de la estructura ordenados por apellido y sector.
 *
 * \param Struct* Array.
 * \param numero de indices.
 * \return Void.
 *
 */
void informStaff(Employee*, int, int);


/** \brief Funciona solo con fines de prueba.
 *
 * \param Struct *Array.
 * \return Void
 *
 */
void hardcodeEmployees (Employee*);


/** \brief Imprime un mensaje que recibe por parametro, espera una cadena la
 *         valida y, en caso de exito, se asocia a la cadena proporcionada por parametro y devuelve 1.
 *
 * \param  imprimer el mensaje, pidiendo al usuario que ingrese una cadena.
 * \param  cadena donde se guardaran los datos de entrada.
 * \param  numero m�ximo de caracteres que permite la cadena.
 * \return devuelve 1 en caso de �xito y la cadena se guarda.
 *
 */
int getAlphabeticalString (char[], char[],int);


/** \brief Imprime un mensaje que recibe de param, solicita una cadena de caracteres que solo acepta n�meros, valida, convierte la cadena en un int y la devuelve.
 *
 * \param  char[]
 * \return int Returns  retorna la cadena numerica ingresada por el usuario como un valor int.
 *
 */
int getPositiveInt(char[]);


/** \brief Ejecuta el menu de navegaci�n.
 *
 * \return Void
 *
 */
void runMenu ();
