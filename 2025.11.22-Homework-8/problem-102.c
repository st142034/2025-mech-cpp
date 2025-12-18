#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool IsDigit(unsigned char c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return true;
	}
}

int main(int argc, char** argv)
{
	unsigned char c = '\0';
	scanf("%hhu", &c);
	if (IsDigit(c))
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}
