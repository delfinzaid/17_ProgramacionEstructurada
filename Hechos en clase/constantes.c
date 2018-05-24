#include<stdio.h>



/*Declaración de constantes #define*/
/*No se reserva espacio en memoria*/
#define PI 3.1415
#define G 9.81
#define TAMANIO 10
#define MIN 0
#define MAX 100



/*Implementación de Macro*/
#define SUMA(x, y) x + y
#define RESTA(x, y) x - y
#define MULT(x, y) x * y
#define DIV(x, y) x/y
#define POTCUADRADO(x) x*x
#define POTCUBO(x) x*x*x

/* Definir ciclos con macro */
#define CICLOFOR(x, y) for(x=0; x < y; x++)
#define CICLOWHILE(x) while(x)

//Bloque de definición SUMA(x, y)
//Bloque de operación "x + y"





/*Declaración de constantes con cont*/
/*Se reserva espacio en memoria*/



const float pi = 3.1415;
const float g = 9.81;
const int tamanio = 10;
const int min = 0;
const int max = 100;




int main(void)
{
	/*Impresión de constantes con #define*/	
	printf("Impresión de constantes con #define.\n");
	printf("Valor de PI %.4f\n",PI);
	printf("Valor de la gravedad %.2f\n", G);
	printf("Valor de TAMAÑO %d\n",TAMANIO);
	printf("Valor de MIN %d\n", MIN);
	printf("Valor de MAX %d\n",MAX);

	printf("Utilizando el ciclo for.\n");
	int x, y=10;
	CICLOFOR(x,y)
	{
		printf("\n Hoola Mundo...\n");
	}
	

	printf("Impresión de MACROS.\n");
	printf("Impresión de SUMA %d\n\n",SUMA(3,4));
	printf("Impresión de RESTA %d\n",RESTA(3,4));
	printf("Impresión de MULT %d\n",MULT(3,4));
	printf("Impresión de DIV %d\n",DIV(3,4));
	printf("Impresión de una potencia al cuadrado %d\n",POTCUADRADO(3));
	printf("Impresión de una potencia al cubo %d\n",POTCUBO(3));

	/*Impresión del ciclo for*/
	printf("Ciclo for\n");
	CICLOFOR(x, y)
	{
		printf("\n Hola Mundo...\n" );
	}
	CLICLOWHILE(x)
	{
		printf("\n Hola Mundo...\n");
	}
	





	
	/*Impresión de constantes con const*/
	printf("%.4f\n",pi);
	printf("%.2f\n",g);
	printf("%d\n",tamanio);
	printf("%d\n",min);
	printf("%d\n",max);
	return 0;
}
