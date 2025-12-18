#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ReLetter(char* str);

int main(int argc, char** argv)
{
	char* str = (char*)calloc(100, sizeof(char));
	scanf("%99s", str);
	ReLetter(str);
	free(str);
	return 0;
}

void ReLetter(char* str)
{
	int len = 0;
	while (str[len] != '\0')
	{
		len += 1;
	}
	for (int i = 0; i < len; ++i)
	{
		int k = 1;
		for (int j = i + 1; j < len; ++j)
		{
			if (str[i] == str[j])
			{
				k += 1;
			}
		}
		if (k == 2)
		{
			printf("%c", str[i]);
			return;
		}
	}
}
