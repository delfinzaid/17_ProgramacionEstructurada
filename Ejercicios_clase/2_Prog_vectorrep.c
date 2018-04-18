/*------------------------------------------------------------*/
/*Autor: Mendoza Vázquez, Delfino-----------------------------*/
/*E-MAIL: delacua_15@hotmail.com------------------------------*/
/*Fecha de creación: 12/04/18.--------------------------------*/
/*Descripción: Hacer un programa que imprima cuantas veces se-*/
/*repite un número en un vector-------------------------------*/
/*------------------------------------------------------------*/



/*Declaración de bibliotecas*/
#include<stdio.h>



/*Declaración de constantes*/
#define N 10



/*Declaración de la función principal*/
int main(void)
{
	/*Declaración del arreglo, y tres variables de conteo*/
	int vec[]={0,1,2,3,4,5,6,7,8,9,},i,j, sum; 
	/*Inicia el ciclo for para comparar las repeticiones dentro del arreglo*/
	for(i=0;i<N;i++)
	{
		sum=0; /*Se reinicia el contador cada vez que salga del ciclo for*/
		for(j=0;j<N;j++)
		{
			
			if(i==vec[j]) /*Se hace la comparación para ver cuantas veces se repite el número dentro del arreglo*/
			{
				sum++; /*Se aumenta en uno cada vez que se encuentre repetido el número antes comparado*/
			}
			
		}
		printf("El número %d se repite %d.\n",i,sum); /*Se imprime en pantalla el número y las veces que se repite en el arreglo*/
	}
	return 0;
}
