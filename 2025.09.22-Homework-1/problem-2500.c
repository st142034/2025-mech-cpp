#include<stdio.h>

int main(int argc, char** argv)
{
	int k = 0;
	int n = 0;
	scanf("%d %d", &k, &n);
	int column = (n - 0.01) / k + 1;
	int line = (n- 0.01) / k;
	line = n - line * k;
	printf("%d %d", column, line);
	return 0;
}
