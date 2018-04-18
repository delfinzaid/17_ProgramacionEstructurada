/*------------------------------------------------------------*/
/*Autor: Mendoza Vázquez, Delfino-----------------------------*/
/*E-MAIL: delacua_15@hotmail.com------------------------------*/
/*Fecha de creación: 17/04/18.--------------------------------*/
/*Fecha de actualización: ------------------------------------*/
/*Descripción:------------------------------------------------*/
/*------------------------------------------------------------*/



/*Declaración de bibliotecas*/
#include<stdio.h>



/*Declaración de constantes*/
#define TAM 5



/*Declaración de la función principal*/
int main(void)
{
	const int array[TAM];
	int array1[TAM] = {1,2,3,4,5};
	int array2[TAM] = {1,2,[0]=10,3,4,[1]=0};
	int array4[] = {1,2,3,4,6};
	
	/*Arreglo de caracteres*/
	char char1[] = {'a', 'b', 'c'};
	char char2[] = {62, 63,64,65,66}; /*Código ASCII*/
	char char3[] = {0x63,0x64,0x65,0x66};

	printf("%c\n",char3[0]);
	
	return 0;
}
