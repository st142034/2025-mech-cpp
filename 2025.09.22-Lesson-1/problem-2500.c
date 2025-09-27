#include <stdio.h>

int main()
{
	int K, N;
	scanf("%d%d", &K, &N);
        printf("%d %d\n", (N - 0.1) / K + 1, (N - 0.1) );	
	return 0;
}
