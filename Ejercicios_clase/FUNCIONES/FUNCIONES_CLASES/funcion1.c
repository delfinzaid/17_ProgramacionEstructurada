/*------------------------------------------------------------*/
/*Autor: Mendoza Vázquez, Delfino-----------------------------*/
/*E-MAIL: delacua_15@hotmail.com------------------------------*/
/*Fecha de creación: 02/05/18.--------------------------------*/
/*Descripción: -----------------------------------------------*/
/*------------------------------------------------------------*/


#include<stdio.h>


/*Declaración del prototipo de la función */

int sumar(int x, int y);
float resta(float x, float y);
double multiplica(double x, double y);


int main(void)
{
	
	printf("\nLa suma de x=%d + y=%d =%d\n\n", 5, 7, sumar(5, 7));
	printf("\nLa resta de %.1f - %.1f = %.1f\n\n", 5.5, 7.5, resta(5.5, 7.5));
	printf("\nLa multplicación de x=%.1lf X y=%.1lf =%.1lf\n\n", 5.5, 7.5, multiplica(5.5, 7.5));



	/*Verificar cuantos bytes ocupan los tipos de datos*/
	printf("\nEl tamaño de un int es: %d", sizeof(int));
	printf("\nEl tamaño de un float es: %d", sizeof(float));
	printf("\nEl tamaño de un char es: %d", sizeof(char));
	printf("\nEl tamaño de un double es: %d", sizeof(double));
	printf("\nEl tamaño de un short es: %d", sizeof(short));
	printf("\nEl tamaño de un long es: %d\n", sizeof(long));
	


	return 0; /*Terminación exitosa*/
}

/*Implementación de funciones*/

int sumar(int x, int y)
{
	return x + y;
}

/*Implementación de la función resta*/

float resta(float x, float y)
{
	return x - y;
}


/*Implementación de la función multiplica*/

double multiplica(double x, double y)
{
	return x * y;
}
