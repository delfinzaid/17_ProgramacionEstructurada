#include<stdio.h>

double Factorial(int x);
int leerdato();
int leerdato2();
int potencia(int x);

int main(void)
{
	int num, po;
	double fac;
	num=leerdato();
	po=leerdato2();
	fac=Factorial(num);
	po=potencia(po);
	printf("%f\n",fac);
	printf("%d\n",po);

	return 0;
}



/*DESARROLLO DE FUNCIONES*/

int leerdato()
{
	int x;
	printf("Introduce un número: ");
	scanf("%d",&x);
	return x;
}

int leerdato2()
{
	int x;
	printf("Ingresa una potencia. ");
	scanf("%d",&x);
	return x;
}





double Factorial(int x)
{
	int i;
	double f=1;
	for(i=1;i<=x;i++)
		f=f*i;
	return f;
}


int potencia(int x)
{
	int x, i, resultado;
	for(i=0;i<x;i++)
		x=x*x;
	return x;
}
