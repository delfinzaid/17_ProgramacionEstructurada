#include <stdio.h>
#include "mimath.h"

#define LIMITE 0.001

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

double potencia(double base, int exponente)
{
	double resultado = 1;

	if(exponente != 0)
	{
	for(int i = 1; i <= exponente; i++)
	{
		resultado *= base;
	}
	}
return resultado;


double exponencial(double base)
{
	double resultado = base + 1;
	double aproximacion;
	int n = 2;
	for(;;)
	{
		aproximacion = potencia(base, n) / factorial(n);
		resultado += aproximacion;

	if(aproximacion < LIMITE)
	{
		break;
	}
	n++;
	}
	 return resultado;
}
