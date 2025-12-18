#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int CountWords(char* str);

int main(int argc, char** argv)
{
	char* str = (char*)calloc(100, sizeof(char));
	scanf("%99[^\n]", str);
	printf("%d", CountWords(str));
	free(str);
	return 0;
}

int CountWords(char* str)
{
	int k = 0;
	char* token = strtok(str, " ");
	while (token != NULL)
	{
		k += 1;
		token = strtok(NULL, " ");
	}
	return k;
}
