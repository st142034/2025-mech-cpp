#include <stdio.h>

int main(int argc, char** argv)
{
	int A;
	scanf("%d", &A);
	printf("%d\n", A % 10 + (A / 10) % 10 + (A / 100)); 
	return 0;
}
