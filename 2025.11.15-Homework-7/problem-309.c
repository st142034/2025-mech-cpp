#include<stdio.h>
#include<stdbool.h>

bool Election(bool x, bool y, bool z);

int main(int argc, char** argv)
{
	int x = 0;
	int y = 0;
	int z = 0;
	scanf("%d%d%d", &x, &y, &z);
	bool result = Election(x, y, z);
	printf("%d\n", result);
	return 0;
}

bool Election(bool x, bool y, bool z)
{
	int i = 0;
	if (x)
	{
		i++;
	}
	if (y)
	{
		i++;
	}
	if (z)
	{
		i++;
	}
	return i >= 2;
}
