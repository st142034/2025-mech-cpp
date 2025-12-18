#include <stdio.h>

unsigned char ToUpper(unsigned char c);

int main(int argc, char** argv)
{
	char c = ' ';
	scanf("%c", &c);
	printf("%c", ToUpper(c));
	return 0;
}

unsigned char ToUpper(unsigned char c)
{
	if ('a' <= c && c <= 'z')
	{
		return c + 'A' - 'a';
	}
	return c;
}
