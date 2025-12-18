#include <stdio.h>

int main(int argc, char** argv)
{
	int a = 0;
	scanf("%d", &a);
	printf("%d\n", a % 10 + (a / 10) % 10 + (a / 100)); 
	return 0;
}
