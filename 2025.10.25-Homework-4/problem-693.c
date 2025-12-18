#include <stdio.h>
#define SIZE 1000

int main(int argc, char** argv)
{
	int n = 0;
	scanf("%d", &n);
	int arr[SIZE] = {0};
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}
	int l = 0;
	int r = 0;
	scanf("%d %d", &l, &r);
	int m = -1001;
	int index = 0;
	for (l; l <= r; ++l)
	{
		if (arr[l - 1] > m)
		{
			m = arr[l - 1];
			index = l;
		}
	}
	printf("%d %d", m, index);
	return 0;
}
