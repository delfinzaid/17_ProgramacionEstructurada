#include <stdio.h>
#include <stdbool.h>


#define N 10
#define M 10

bool validarSumaMatriz(int filaA, int colA, int filaB, int colB);
void leerDatosMatriz(int matriz[N][M], int fila, int col);
void imprimirMatriz(int matriz[N][M], int fila, int col);
void multiMatriz(int matrizA[N][M], int matrizB[N][M], int matrizResultado[N][M], int fila, int col);


int main(void)
{
	int filaA, colA;
	int filaB, colB;
	
	int matrizA[N][M];
	int matrizB[N][M];
	int matrizResultado[N][M];
	
	printf("\nIntroduce la fila de la matriz A: ");
	scanf("%d", &filaA);
	
	printf("\nIntroduce la columna de la matriz A: ");
	scanf("%d", &colA);
	
	printf("\nIntroduce la fila de la matriz B: ");
	scanf("%d", &filaB);
	
	printf("\nIntroduce la columna de la matriz B: ");
	scanf("%d", &colB);
	
	if(validarSumaMatriz(filaA, colA, filaB, colB))
	{
		leerDatosMatriz(matrizA, filaA, colA);
		leerDatosMatriz(matrizB, filaB, colB);
		imprimirMatriz(matrizA, filaA, colA);
		imprimirMatriz(matrizB, filaB, colB);
		
		sumaMatriz(matrizA, matrizB, matrizResultado, filaA, colA);
		
		imprimirMatriz(matrizResultado, filaA, colB);
		
		printf("\nSi se puede realizar la operación\n\n"); /*Realizar la operación*/
	}else{
		printf("\nNo se puede realizar la suma de matrices.\n\n");
		}
	return 0;
}
void multiMatriz(int matrizA[N][M], int matrizB[N][M], int matrizResultado[N][M], int fila, int col)

{
	printf("El resultado de la suma es: \n\n");

	for(int i = 0; i < fila; i++)
	{
		for(int j = 0; j < col; j++)
		{
			matrizResultado[i][j] = matrizA[i][j] * matrizB[i][j];
		}
	}

}

bool validarSumaMatriz(int filaA, int colA, int filaB, int colB)
{
	if((filaA == filaB) && (colA == colB))
	{
		return true;
	}
	return false;

}

void leerDatosMatriz(int matriz[][M], int fila, int col)
{
	for(int i = 0; i < fila; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("Escribe el valor para [%d][%d]: \n",i,j);
			scanf("%d", &matriz[fila][col]);
		}
	}
	printf("\n\n\n");

}

void imprimirMatriz(int matriz[N][M], int fila, int col)
{
	for(int i=0;i<fila;i++)
	{
		printf("|");
		for(int j=0;j<col;j++)
		{
			printf("%d ",matriz[fila][col]);
		}
		printf("|\n");
	}
	printf("\n\n\n");
}



