/*------------------------------------------------------------*/
/*Autor: Mendoza Vázquez, Delfino-----------------------------*/
/*E-MAIL: delacua_15@hotmail.com------------------------------*/
/*Fecha de creación: 26/05/18.--------------------------------*/
/*Fecha de modificación: -------------------------------------*/
/*Descripción: Trabajando a nivel de bits desplazando a la----*/
/*derecha-----------------------------------------------------*/
/*------------------------------------------------------------*/
#include <stdio.h>


#define N 10

int desplazamientoizquierda(int x, int y);


int main(void)
{


	/*DEZPLAZAMIENTO DE LOS BITS A LA IZQUIERDA >>*/
	int vec[]={5,4,7,3,98,66,4,33,22,55};
	int vec2[]={1,1,2,2,3,3,4,4,5,5};
	int z;
	int x;
	int y;
	
	for(int i=0;i<N;i++)
	{
		printf("\n%d° ejemplo de desplazamiento a la izquierda\n\n",i+1);
		x=vec[i];
		y=vec2[i];
		z=desplazamientoizquierda(x, y);
		printf("\n%d\n", z);
	}
	return 0;
}

int desplazamientoizquierda(int x, int y)
{
	return x << y;	 /*desplazamiento a la izquierda*/
}
