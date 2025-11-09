#include<stdio.h>
#define SIZE 1000

int main(int argc, char** argv)
{
	int  n = 0;
	scanf("%d", &n);  
	int arr[SIZE];
	int x = 0;
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]); 
	}
	scanf("%d", &x);
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == x)
		{
			++count;
		}
	}
	printf("%d\n", count);
	return 0;
}
