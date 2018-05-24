#include <stdio.h>
#include <math.h>
#define LIMITE 0.001
double factorial(int n);
double potencia(double base, int n);
double exponencial(double base);

int main(void)
{
	double base;
	printf("\nIgrese el numero para obtener la exponencial: ");
	scanf("%lf", &base);
	printf("\nResultado de mi funcion e(%3.1lf): %3.4f", base, exponencial(base));
	printf("\nResultado con Math de e(%3.1lf): %3.4f\n", base, exp(base));
	
	
	
return 0;
}

double factorial(int n)
{
	double resultado = 1;
	if(n != 0)
	{
	for (int i = 1; i <= n; i++)
	{
		resultado *= i;
	}
	}
return resultado;
}

double potencia(double base, int n)
{
	double resultado = 1;
	if(n != 0)
	{
	for(int i = 1; i <= n; i++)
	{
		resultado *= base;
	}
	}
return resultado;
}





double exponencial(double base)
{
	double resultado = base + 1;
	double aproximacion;
	int n = 2;
	for(;;)
	{
		aproximacion = potencia(base, n) / factorial(n);
		resultado += aproximacion;
	return resultado;
	}
	if(aproximacion < LIMITE)
	{
	break;
	}
	n++;
return resultado;
}


