#include<stdio.h>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;

	scanf("%d%d", &a, &b);

	int z = a * b;

	if (b > a)
	{
		int t = a;
		a = b;
		b = t;
	}

	int r = a % b;

	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}

	printf("%d\n", z / b);

	return 0;
}

