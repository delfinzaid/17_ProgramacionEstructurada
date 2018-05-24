#include<stdio.h>
#include "Colores.h"
#include "operaciones.h"

/*Prototipos de funciones*/
void imprimirMenu();


/* Declaración de la enumeración */
/*CREAR es = 1*/
enum MENU{CREAR = 1, LISTAR, ORDA, ORDD, SALIR};


int main(void)
{
	/*SE ASEGURA QUE OPCIÓN SERÁ SIEMPRE UN ENTERO POSITIVO*/
	unsigned int opcion;
	 
	printf(_TVERDE _NEGRITA"\n TÍTULO DEL PROGRAMA\n");
	/*INVOCAR A LA FUNCIÓN IMPRIMIR MENÚ*/
	imprimirMenu();

	


	return 0;
}



