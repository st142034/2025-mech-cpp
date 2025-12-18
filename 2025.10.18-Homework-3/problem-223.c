#include<stdio.h>

int main(int argc, char** argv)
{
	int n = 0;
	int max = 0;
	int maxv2 = 0;

	do {

		scanf("%d", &n);

		if (n != 0)
		{
			if (n > max) 
			{
				maxv2 = max;
				max = n;
			}
			else if (n > maxv2)
			{
				maxv2 = n;
			}
		}
	} while (n != 0);

	printf("%d\n", maxv2);

	return 0;
}
