/*------------------------------------------------------------*/
/*Autor: Mendoza Vázquez, Delfino-----------------------------*/
/*E-MAIL: delacua_15@hotmail.com------------------------------*/
/*Fecha de creación: 24/04/18.--------------------------------*/
/*Fecha de actualización: ------------------------------------*/
/*Descripción:Programa que convertirá de Decimal-Binario y----*/
/*viceversa---------------------------------------------------*/
/*------------------------------------------------------------*/



/*Declaración de bibliotecas*/
#include<stdio.h>
#include<math.h>




/*Declaración de la función principal*/
int main(void)
{
	int op,i,aux,Num=0,longitud;
	int Vec[20];
	
	/*Se mostrará un menú sobre que se desee hacer*/
	printf("\t\tMENÚ\t\t\n\n\n");
	printf("\t**CONVERCIONES**\n");
	printf("1-DECIMAL a BINARIO.\n");
	printf("2-BINARIO a DECIMAL.\n");
	printf("Cualquier tecla para salir.\n");
	scanf("%d", &op);
	switch(op)
	{
		case 1:
		{
			printf("Escribe el número que deseas convertir: ");
			scanf("%d",&Num);

			for(i=0;Num>0;i++)
			{
				aux=Num%2;
				Num=Num/2;
				Vec[i]=aux;
			}
	
			for(i=i-1;i>=0;i--)
			{
				printf("%d",Vec[i]);
			}
			printf("\n\n");
		}
		break;
		case 2:
		{
			printf("¿Cuántos números tiene el número a convertir? ");
			scanf("%d", &longitud);
			int Vec[longitud];
			for(i=0;i<longitud;i++)
			{
				printf("Escribe el %d° número: \n",i+1);
				scanf("%d", &Vec[i]);
		
			}
			aux=longitud-1;
			for(i=0;i<longitud;i++)
			{
				if(Vec[i]==1)
				{
					Num=Num+pow(2, aux);
				}
				aux--;
			}
			printf("El número a decimal es: %d\n",Num);
		}
		break;
		default: 
			printf("Saliendo...\n\n");
		break;
	}
	return 0;
}
