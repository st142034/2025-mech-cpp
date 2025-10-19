#include<stdio.h>

int main(int argc, char** argv)
{
	int num = 0;
	int count = 0;
	int prev_num = -1;
	int max_count = 0;

	do {
		scanf("%d", &num);

		if (num == prev_num)
		{
			++count;
		}
		else
		{
			if (count > max_count)
			{
				max_count = count;
			}
			count = 1;
			prev_num = num;
		}
	} while (num != 0);

	if (count > max_count)
	{
		max_count = count;
	}

	printf("%d\n", max_count);

	return 0;
}
