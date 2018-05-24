#include <stdio.h>



void cambiarValor(int, int);


int main(void)
{
	int x =5;
	int y= 10;
	printf("X: %d\n", x);
	printf("Y: %d\n", y);
	
	printf("\n\n");
	
	
	/*IMPRIMIENDO POSICIÓN EN MEMORIA*/
	printf("\nX: %p", &x);
	printf("\nY: %p\n", &y);
	
	
	
	cambiarValor(x, y);
	
	/*IMPRIMIENDO POSICIÓN EN MEMORIA*/
	printf("\ncX: %p", &x);
	printf("\ncY: %p\n", &y);
	
	printf("cX: %d\n", x);
	printf("cY: %d\n", y);
	
	
	
	return 0;
}

void cambiarValor(int x, int y)
{

	printf("fX: %d\n", x);
	printf("fY: %d\n", y);
	
	/*IMPRIMIENDO POSICIÓN EN MEMORIA*/
	printf("\nfX: %p", &x);
	printf("\nfY: %p\n", &y);
	
	int temporal;
	temporal = x;
	y = temporal;
	x = y;
}
