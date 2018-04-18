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
			case OC:
				printf("\n OCTUBRE \n");
			break;
		}
	}

	
	
	printf("\n");
	
	printf("%d ",var1);
	printf("%d ",var2);
	printf("%d ",var3);
	printf("\n");

	return 0;
}
