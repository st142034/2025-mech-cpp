#include<stdio.h>
#define SIZE 1000

int main(int argc, char** argv)
{
	int  n = 0;
	scanf("%d", &n);
	int arr[SIZE] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 1; n >= i; n--)
	{
		printf("%d ", arr[n - 1]);
	}
	return 0;
}

