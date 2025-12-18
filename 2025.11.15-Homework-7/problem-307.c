#include<stdio.h>

double power(double a, int n);

int main(int argc, char** argv)
{
	double a = 0;
	int n = 0;
	scanf("%lf%d", &a, &n);
	printf("%g\n", power(a, n));
	return 0;
}

double power(double a, int n) 
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return a * power(a, n - 1);
	}
}
