#include<stdio.h>

int main(int argc, char** argv)
{
	int K, N;
	scanf("%d %d", &K, &N);
	int column = (N - 0.01) / K + 1;
	int line = (N- 0.01) / K;
	line = N - line * K;
	printf("%d %d", column, line);
	return 0;
}
