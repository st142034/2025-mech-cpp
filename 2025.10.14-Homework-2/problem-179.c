#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a == 0 && b == 0 && c == 0)
	{
		printf("0\n");
	}
	if (a != 0)
	{ 
		if (a < 0)
		{
			printf("-");
			printf("%d", -a);
		}
		else
		{
			printf("%d", a);
		}
	}
	if (b != 0)
	{
		if (b > 0 && a != 0)
		{
			printf("+");
		}
		else if (b < 0)
		{
			printf("-");
		}
			if (abs(b) != 1)
			{
				printf("%d", abs(b));
			}
		printf("x");
	}
	if (c != 0)
	{
		if (c < 0)
		{
			printf("-");
		}
		else if (b != 0 || a != 0)
		{
			printf("+");
		}
			if (abs(c) != 1)
			{
				printf("%d", abs(c));
			}
		printf("y");
	}
	return 0;
}
