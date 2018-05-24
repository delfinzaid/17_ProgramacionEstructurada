/*----------------------------------------------------------------*/
/* Autor: Delfino Mendoza Vázquez								  */
/* E-mail: delacua_15@hotmail.com		                          */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion: 23/05/2018                                */
/* Descripcion: definicion de constantes, estructura y prototipo  */
/*              de funciones.                                     */
/*----------------------------------------------------------------*/

#ifndef PROTOTIPOFUNCIONES_H_
#define PROTOTIPOFUNCIONES_H_

#define TAM_NOM      50        /* Definicion del tamanio del arreglo unidimensional */
#define TAM_CLAVE    21        /* Tamaño de la clave de la esuela                */
#define TAM_TURNO    11        /* Tamaño del turno de trabajo de la escuela                 */
#define TOTAL_ESCUELA 10        /* Tamaño total de la escuela                          */


/* Se define una estructura para modelar los datos de una escuela. */
/* Los miembros de la estructura son:                              */
/*                                    - nombre                     */
/*                                    - clave                      */
/*                                    - turno		               */
/*                                    - telefono                   */

typedef struct
{
	char nombre[TAM_NOM];
	char clave[TAM_CLAVE];
	char turno[TAM_TURNO];
	int telefono;
}Escuela;


/* Funciones que imprimen mensajes en pantalla */
void menuPrincipal(void); /*FUNCIÓN QUE IMPRIME EL MENÚ DONDE EL USUARIO ELIGE QUE DESEA HACER*/
void mostrarEncabezadoTabla(void); /*FUNCIÓN QUE SÓLO MUESTRA EL ENCABEZADO DE CADA MIEMBRO DE LA ESTRUCTURA*/
void mostrarEscuela(Escuela); 
void detenerPantalla(void);


/* Funciones que realizan las operaciones sobre la lista de escuela */
Escuela crearNuevaEscuela(void);
void mostrarListaEscuela(Escuela [], int);
void buscarEscuela(Escuela []);
void actualizarEscuela(Escuela []);
void eliminarEscuela(Escuela []);


/* Funcion que permite eliminar la escuela, es invocada por la funcion eliminarEscuela() */
Escuela * eliminarUnaEscuela(Escuela [], int);


/* Funciones que permiten ordenar los datos de las escuelas */
int * ordenarAscendente(Escuela [], int []);
int * ordenarDescendente(Escuela [], int []);


#endif

