/*------------------------------------------------------------*/
/*Autor: Mendoza Vázquez, Delfino-----------------------------*/
/*E-MAIL: delacua_15@hotmail.com------------------------------*/
/*Fecha de creación: 11/04/18.--------------------------------*/
/*Fecha de actualización:12/04/18-----------------------------*/
/*Descripción: Declarar un arreglo que busque cual es el menor*/
/*de ellos----------------------------------------------------*/
/*------------------------------------------------------------*/



/*Declaración de bibliotecas*/
#include<stdio.h>



/*Declaración de función principal*/
int main(void)
{
	/*Declaración del vector*/
	int arreglo[9]={};
	
	/*Declaración de un contador y la variable menor que almacenara el número menor*/
	int menor,i;

	/*Ingresando valores al vector*/
	for(i=0;i<9;i++)
	{
		printf("Escribe el %d° valor: ",i+1);
		scanf("%d",&arreglo[i]);
	}

	/*Se asigna el primer valor del vector a la variable menor*/
	menor=arreglo[0];

	/*Se recorre todo el vector*/
	for(i=1;i<9;i++)
	{
		/*Se compará cada valor del vector*/
		if(menor>arreglo[i])
		{
			menor=arreglo[i]; /*En caso el un número sea menor que es de nuestra variable menor, este se asignará 							ahora a la variable menor*/
		}

	}

	/*Impresión del número menor*/
	printf("El menor es: %d\n",menor);

	return 0;
}
