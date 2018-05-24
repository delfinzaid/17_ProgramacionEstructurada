/*------------------------------------------------------------*/
/*Autor: Mendoza Vázquez, Delfino-----------------------------*/
/*E-MAIL: delacua_15@hotmail.com------------------------------*/
/*Fecha de creación: 18/04/18.--------------------------------*/
/*Fecha de modificación: 20/04/18-----------------------------*/
/*Descripción: Hacer un programa que imprima cuantas veces se-*/
/*repite un número en un vector-------------------------------*/
/*------------------------------------------------------------*/



/*Declaración de bibliotecas*/
#include<stdio.h>



/*Declaración de constantes*/
const int tamanio = 20;



/*Declaración de función principal*/
int main(void)
{
	char c;
	char array[tamanio],array2[tamanio];	
	int index=0;


	printf("Ingresa las letras a convertir a minúsculas: \n");
	while((c=getchar()) != '\n') /*Leer caracter por caracter*/
	{
		if((c>=65)&&(c<=90)) /*Validando únicamente caracteres: letras mayúsculas*/
		{
			c=c+32; /*Convirtiendo letras mayúsculas a minúsculas*/
			array[index]=c;
			index++;
		}
	}
	
	printf("\n");
	for(int i=0; i<tamanio; i++) /*Impresión del array*/
	{
		printf("%c ",array[i]);
	}


	printf("\n\n\n");

	index=0;
	printf("Ingresa las letras a convertir a mayúsculas: \n");
	while((c=getchar()) != '\n') /*Leer caracter por caracter*/
	{
		if((c>=97)&&(c<=122)) /*Validando únicamente caracteres: letras mayúsculas*/
		{
			c=c-32; /*Convirtiendo letras mayúsculas a minúsculas */
			array2[index]=c;
			index++;
		}
	}
	
	printf("\n");
	for(int i=0; i<tamanio;i++) /*Impresión del array*/
	{
		printf("%c ",array2[i]);
	}


	printf("\n");

	return 0;
}
