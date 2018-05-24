#include <stdio.h>

void cambiarValor(int x, int y);

int main()
{
	int a = 10, b = 5;
	
	
	printf("\nEntrada 1: a: %d	b: %d\n",a,b);
	
	cambiarValor(a, b); /*INVOCACIÓN DE LA FUNCIÓN*/
	
	printf("\nEntrada 1: a: %d	b: %d\n",a,b);
	
	return 0;
}


/*Implementación de la función intercambiar valor*/
void cambiarValor(int x, int y)
{
	int aux = x;
	x = y;
	y = aux;

}
