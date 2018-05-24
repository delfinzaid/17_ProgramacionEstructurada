#include <stdio.h>

/* DECLARACION DE CONSTANTES CON #define*/
/* No se reservan espacios en memoria */
#define PI 3.1416
#define G 9.81
#define TAMANIO 10
#define MIN  0
#define MAX 100

/* Impĺementación de macro */
#define SUMA(x, y) x+y
#define RESTA(x, y) x-y
#define MULT(x, y) x*y
#define DIV(x, y) x/y
#define POTCUADRADO(x) x*x
#define POTCUBO(x) x*x*x

/* Definir ciclos con macro */
#define CICLOFOR(x, y) for(x=0; x < y; x++)

/*Declaracion de constantes con cont*/
/* Se reservan espacios en memoria */
const float pi = 3.1416;
const float g = 9.81;
const int tamanio = 10;
const int min = 0;
const int max = 100;

int main(void)
{

	/* Imprimir constantes #define */
	printf("El valor de PI:\n %f \n", PI);

	/* Imprimir macros */
	printf("Operación SUMA: \n %d \n", SUMA(3,4));

	/* Imprimir constantes const */
	printf("El valor de pi:\n %f \n", pi);

	/* Utilizando las macros de ciclo */
	int x;
	int y = 10;

	CICLOFOR(x, y)
	{
		printf("\n Hola Mundo...\n" );
	}



	return 0;
}
