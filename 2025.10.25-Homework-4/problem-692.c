#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SIZE 1000

int main(int argc, char** argv)
{
	int  n = 0;
	scanf("%d", &n);
	int arr[SIZE];
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &x);
	int b = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (abs(arr[i] - x) < abs(b - x) || abs(arr[i] - x) == abs(b - x) && arr[i] < b)
		{
			b = arr[i];
		}
	}
	printf("%d\n", b);
	return 0;
}

