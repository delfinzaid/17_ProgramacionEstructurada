/*------------------------------------------------------------*/
/*Autor: Mendoza Vázquez, Delfino-----------------------------*/
/*E-MAIL: delacua_15@hotmail.com------------------------------*/
/*Fecha de creación: 27/05/18.--------------------------------*/
/*Descripción: Conversión de decimal a binario----------------*/
/*------------------------------------------------------------*/



/*DECLARACIÓN DE BIBLIOTECAS*/
#include <stdio.h>



/*PROTOTIPO DE FUNCIONES*/
void binario(int num);



/*DECLARACIÓN DE LA FUNCIÓN PRINCIPAL*/
int main(void)
{
	int num;
	/*VALIDAR QUE EL NÚMERO SEA ENTERO ANTES DE HACER LA CONVERSIÓN*/
	do
	{
		printf("Ingrese el número que deseas convertir: ");
		scanf("%d", &num);
		
	}while(num<0); /*CONDICIÓN PARA QUE EL NÚMERO SEA POSITIVO*/
	
	binario(num);/*LLAMADA A LA FUNCIÓN ENVIANDO LA VARIABLE *NUM* */
	printf("\n");
	return 0;	
}

/*DESARROLLO DE LA FUNCIÓN RECURSIVA QUE REALIZA LA CONVERSIÓN*/
void binario(int num)
{
	if(num>1)
	binario(num/2);
	
	printf("%d",num%2);
		
}
