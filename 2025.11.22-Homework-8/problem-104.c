#include <stdio.h>

unsigned char ChangeReg(unsigned char c);

int main(int argc, char** argv)
{
	char c = ' ';
	scanf("%c", &c);
	printf("%c", ChangeReg(c));
	return 0;
}

unsigned char ChangeReg(unsigned char c)
{
	if ('a' <= c && c <= 'z')
	{
		return c + 'A' - 'a';
	}
	else if ('A' <= c && c <= 'Z')
	{
		return c - 'A' + 'a';
	}
	return c;
}
