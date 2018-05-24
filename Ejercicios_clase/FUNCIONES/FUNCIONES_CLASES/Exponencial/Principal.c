#include<stdio.h>





int main(void)
{
	int base;
	int exponente;
	int resultado = 1;
	

	printf("\nResolución de potencia\n\n");

	printf("Ingrese la base: ");
	scanf("%d", &base);

	resultado=base;

	printf("\n\nIngrese el exponente: ");
	scanf("%d", &exponente);
	if(base == 0);
	
	for(int i = 1;i < exponente; i++)
		/*resultado = resultado *base*/
		resultado *= base;
	printf("\nEl resultado es: %d\n",resultado);
	return 0;
}
