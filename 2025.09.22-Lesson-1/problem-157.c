#include <stdio.h>

int main(int argc, char** argv)
{
	int V, T;

	scanf("%d%d",&V,&T);

	printf("%d\n",(V * T % 109 + 109) % 109 + 1);  
	return 0;
}
