#include <stdio.h>

int main()
{	
	// N - quantity of students
	// K - quantity of apples
	int N, K;
	scanf("%d%d", &N, &K);
	printf("%d %d %d\n", K / N, K % N, N - K % N);
	return 0;
}
