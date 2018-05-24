/*------------------------------------------------------------*/
/*Autor: Mendoza Vázquez, Delfino-----------------------------*/
/*E-MAIL: delacua_15@hotmail.com------------------------------*/
/*Fecha de creación: 18/04/18.--------------------------------*/
/*Descripción: Declaraciones de enum--------------------------*/
/*------------------------------------------------------------*/



/*Declaración de bibliotecas*/
#include <stdio.h>



/*Declaración de enum*/
/*Tipo de infentificador{lista de ifentificaores}; */

enum DIAS{L,M,MI,JV,S,D};

enum MESES{EN=1, FE, MAR, AB, MAY, JUN, JUL, AG, SE, OC, NO, DI};

enum FRUTAS{manzana, mango, durazno, pera, uva, pina};

enum PRECIOAUTO{nuevo = 10, seminuevo=-5, usado, inservible};

enum {PROG, MATEDIS, MATII, TGS, ELECT}var1, var2, var3; /*Esto es un enum anónimo*/



/*Declaración de la función principal*/
int main(void)
{
	/*Impresión del valor que almacena el espacio "usado"*/
	printf("%d\n",usado);


	/*Imprimiendo el enum "MESES"*/
	for(enum MESES index = EN; index <= DI; index++)
	{
		printf("%d ",index);
		switch (index)
		{
			case EN:
				printf("\n ENERO \n");
			break;
			case FE:
				printf("\n Febrero \n");
			break;
			case MAR:
				printf("\n Marzo \n");
			break;
			case AB:
				printf("\n Abril \n");
			break;
			case MAY:
				printf("\n Mayo \n");
			break;
			case JUN:
				printf("\n Junio \n");
			break;
			case JUL:
				printf("\n Julio \n");
			break;
			case AG:
				printf("\n Agosto \n");
			break;
			case SE:
				printf("\n Septiembre \n");
			break;
			case OC:
				printf("\n OCTUBRE \n");
			break;
			case NO:
				printf("\n Noviembre \n");
			break;
			case DI:
				printf("\n Diciembre \n");
			break;
		}
	}

	
	
	printf("\n");
	

	/*Impresión de var1, var2, var3*/
	printf("%d ",var1);

	printf("%d ",var2);

	printf("%d ",var3);

	printf("\n");

	return 0;
}
