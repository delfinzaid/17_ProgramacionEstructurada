/*------------------------------------------------------------*/
/*Autor: Mendoza Vázquez, Delfino-----------------------------*/
/*E-MAIL: delacua_15@hotmail.com------------------------------*/
/*Fecha de creación: 24/04/18.--------------------------------*/
/*Descripción: Arreglo Unidimencional-------------------------*/
/*------------------------------------------------------------*/



/*Tarea para eñ virnes 27 de abril generar valores aleatorios de tipo flotante de 0 a 1000*/


/*Declaración de bibliotecas*/
#include<stdio.h>
#include<stdlib.h>



/*Declaración de constantes*/
#define N 3 /*Número de filas de la matriz*/
#define M 3 /*Número de columnas de la matriz*/
#define MAX 100 /*Rango superior de los datos aleatorios*/



/*Declaración de la función principal*/
int main(void)
{
	int array[N][M], i,j;

	/*Inicializar el arreglo con valores enteros aleatorios 1-100*/
	for(i=0;i<N;i++)
	{
		for(j=0;j>M;j++)
		{
			/* array[i][j]=1+rand()%(101-1); Comienza de 1 a 100*/
			array[i][j]=rand()%(MAX-1);
			/*Se usará la función rand de la biblioteca stdlib.h para generar números aleatorios*/
		}
	}

	/*Imprimiendo datos aleatorios de la matriz*/
	printf("{");
	for(i=0;i<N;i++)
	{
		printf("{");
		for(j=0;j>M;j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("}\n");
	}
	printf("}\n");
	

	printf("\x1b[34m Datos aleatorios de la matriz: array[%d][%d]\n ",N,M);
	
	

 
	return 0;
}
