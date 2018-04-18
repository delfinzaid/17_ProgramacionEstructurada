/*------------------------------------------------------------*/
/*Autor: Mendoza Vázquez, Delfino-----------------------------*/
/*E-MAIL: delacua_15@hotmail.com------------------------------*/
/*Fecha de creación: 12/04/18.--------------------------------*/
/*Descripción: Ordenar un arreglo de N elementos para el lunes*/
/* 16/04/18 de manera ASCENDENTE------------------------------*/
/*------------------------------------------------------------*/



/*Declaración de bibliotecas*/
#include<stdio.h>



/*Declaración de constantes*/
#define N 5



/*Declaración de la función principal*/
int main(void)
{
	int vec[N],i,j,aux;

	/*Ingreso de valores al vector*/
	for(i=0;i<N;i++)
	{
		printf("Escribe el %d° número: ",i+1);
		scanf("%d",&vec[i]);
	}

	/*Ordenamiento burbuja*/

	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(vec[j]>vec[j+1])
			{
				aux=vec[j+1];
				vec[j+1]=vec[j];
				vec[j]=aux;
			}
		}
	}

	/*Impresión del vector ya ordenado en pantalla*/
	for(i=0;i<N;i++)
	{
		printf("%d\n",vec[i]);
	}
	return 0;
}
