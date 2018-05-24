

#include<stdio.h>

double Factorial(int x);

int main()
{
	int n;
	double r;
	printf("Escribe un número: ");
	scanf("%d",&n);
	r=Factorial(n);
	printf("El factorial de %d es %.0lf\n",n,r);
	return 0;
}

double Factorial(int x)
{
	int i;
	double f=1;
	for(i=1;i<=x;i++)
		f=f*i;
	return f;
}
