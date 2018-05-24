#include <stdio.h>
#include <math.h>
#include "mimath.h"

int main(void)
{
	double base;
	printf("\nIgrese el numero para obtener la exponencial: ");
	scanf("%lf", &base);
	printf("\nResultado de mi funcion e(%3.1lf): %3.4f", base, exponencial(base));
	printf("\nResultado con Math de e(%3.1lf): %3.4f\n", base, exp(base));
	return 0;
}
