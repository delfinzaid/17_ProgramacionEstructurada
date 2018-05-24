/*------------------------------------------------------------*/
/*Autor: Mendoza Vázquez, Delfino-----------------------------*/
/*E-MAIL: delacua_15@hotmail.com------------------------------*/
/*Fecha de creación: 17/04/18.--------------------------------*/
/*Fecha de actualización: ------------------------------------*/
/*Descripción: Matrices Cuadradas, rectangulares y columnas---*/
/*------------------------------------------------------------*/



/*Declaración de bibliotecas*/
#include<stdio.h>



/*Declaración de constantes*/
#define N 3
#define M 3
#define COL 1
#define REC 2



/*Declaración de la función principal*/
int main(void)
{
	int Mat[N][M], MatRec[REC][N], Matc[M][COL],i,j;
	

	/*Llenado de matriz cuadrada*/
	printf("Se solicitarán datos para la matriz cuadrada.\n\n");

	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("Escribe el valor para [%d][%d]: ",i+1,j+1);
			scanf("%d", &Mat[i][j]);
		}
	}






	/*Llenado de la matriz rectangular*/
	printf("Se solcitarán datos para la matriz rectangular.\n\n");
	
	for(i=0;i<REC;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("Escribe el valor para [%d][%d]: ",i+1,j+1);
			scanf("%d", &MatRec[i][j]);
		}
	}







	/*Llenado de la matriz columna*/

	printf("Se solicitarán datos para la matriz columna.\n\n");
	
	for(i=0;i<COL;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("Escribe el valor para [%d][%d]: ",i+1,j+1);
			scanf("%d", &Matc[i][j]);
		}
	}







	/*Impresión de las matrices*/

	printf("Impresión de matriz cuadrada.\n\n");

	for(i=0;i<N;i++)
	{
		printf("{");
		for(j=0;j<M;j++)
		{
			printf(" %d ",Mat[i][j]);
		}
		printf("}");
		printf("\n");
	}


	printf("\n\n\n");




	/*Impresión de las matrices*/

	printf("Impresión de la matriz rectangular.\n\n");

	for(i=0;i<REC;i++)
	{
		printf("{");
		for(j=0;j<N;j++)
		{
			printf(" %d ",MatRec[i][j]);
		}
		printf("}");
		printf("\n");
	}


	printf("\n\n\n");



	/*Impresión de la matriz columna*/

	printf("Impresión de matriz columna.\n\n");
	
	for(i=0;i<M;i++)
	{
		printf("{");
		for(j=0;j<COL;j++)
		{
			printf(" %d ",Matc[i][j]);
		}
		printf("}");
		printf("\n");
	}


	return 0;
}
