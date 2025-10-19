#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
	float x = 0;
	float y = 0;

	scanf("%f%f", &x, &y);

	int n = 1;

	while (x < y - 1e-9)
	{
		x *= 1.15;
		++n;
	}

	printf("%d\n", n);

	return 0;
}
