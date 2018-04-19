/*------------------------------------------------------------*/
/*Autor: Mendoza Vázquez, Delfino-----------------------------*/
/*E-MAIL: delacua_15@hotmail.com------------------------------*/
/*Fecha de creación: 18/04/18.--------------------------------*/
/*Descripción: Hacer un programa que imprima cuantas veces se-*/
/*repite un número en un vector-------------------------------*/
/*------------------------------------------------------------*/



/*Declaración de bibliotecas*/
#include<stdio.h>



/*Declaración de constantes*/
const int tamanio = 5;



/*Declaración de función principal*/
int main(void)
{
	char c;
	char array[tamanio];
	
	
	int index=0;
	while((c=getchar()) != '\n') /*Leer caracter por caracter*/
	{
		if((c>=97)&&(c<=122)) /*Validando únicamente caracteres: letras minúsculas*/
		{
			c=c-32;
			array[index]=c;
			index++;
		}
	}
	
	printf("\n");
	for(int i=0; i<tamanio; i++) /*Impresión del array*/
	{
		printf("%c ",array[i]);
	}


	printf("\n");

	return 0;
}
