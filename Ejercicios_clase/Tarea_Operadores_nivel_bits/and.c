/*------------------------------------------------------------*/
/*Autor: Mendoza Vázquez, Delfino-----------------------------*/
/*E-MAIL: delacua_15@hotmail.com------------------------------*/
/*Fecha de creación: 26/05/18.--------------------------------*/
/*Fecha de modificación: -------------------------------------*/
/*Descripción: Trabajando a nivel de bits con el AND----------*/
/*------------------------------------------------------------*/
#include <stdio.h>


#define N 10

int trabajandoBitsAnd(int x, int y);


int main(void)
{
	/*AND A NIVEL DE BITS*/
	int OR1[]={5,4,7,3,98,66,4,33,22,55};
	int OR2[]={66,55,4,8,77,33,22,44,23,11};
	int z;
	int x;
	int y;
	
	for(int i=0;i<N;i++)
	{
		printf("\n%d° ejemplo de And\n\n",i+1);
		x=OR1[i];
		y=OR2[i];
		z=trabajandoBitsAnd(x, y);
		printf("\n%d\n", z);
	}
	return 0;
}

int trabajandoBitsAnd(int x, int y)
{
	return x & y;	 /*TRABAJANDO A NIVEL DE BITS CON EL OR*/
}
