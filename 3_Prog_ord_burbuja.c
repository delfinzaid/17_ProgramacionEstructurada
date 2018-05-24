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
	int vec[N],i,j,aux; /*Declaración del vector, de dos contadores "i, j" y un auxiliar*/

	/*Ingreso de valores al vector*/
	for(i=0;i<N;i++)
	{
		printf("Escribe el %d° número: ",i+1); /*Impresión en pantalla para que el usuario ingrese datos*/
		scanf("%d",&vec[i]); /*Leyendo el valor ingresado por el usuario*/
	}

	/*Ordenamiento burbuja*/

	for(i=0;i<N;i++) /*Primer ciclo que es el que avanzará más lento*/
	{
		for(j=0;j<N;j++) /*Segundo ciclo donde avanzará más rapido y comparará con los otros datos*/
		{
			if(vec[j]>vec[j+1]) /*Condición para saber si un número es mayor que otro*/
			{
				aux=vec[j+1]; /*Almacenamos el valor de Vec[j+1] en la variable auxiliar para no perder el valor*/
				vec[j+1]=vec[j]; /*Al lugar donde esta el valor que ya respaldamos le asignamos el valor de vec[j]*/
				vec[j]=aux; /*ahora asignamos a vec[j] el valor que tiene auxiliar*/
			}
		}
	}

	/*Impresión del vector ya ordenado en pantalla*/
	for(i=0;i<N;i++) /*Ciclo que va a recorer todo el vector*/
	{
		printf("%d\n",vec[i]); /*Impresión de todo el vector*/
	}
	return 0;
}
