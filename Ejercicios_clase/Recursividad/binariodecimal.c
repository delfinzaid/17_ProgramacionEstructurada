#include <stdio.h>




//void binariodecimal(char num);

int main(void)
{
	int longitud;
	printf("Ingresa la longitud del número a convertir: ");
	scanf("%d", &longitud);
	int num[longitud];
	for(i=0;i<longitud;i++)
	{
		printf("Escribe el %d° número: \n",i+1);
		scanf("%d", &num[i]);
	}
	binariodecimal(num);
	printf("\n");
	
	return 0;
}
/*
void binariodecimal(char num)
{
	
}
*/
