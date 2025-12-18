#include<stdio.h>
#include<stdlib.h>
struct Point
{
	int x;
	int y;
};
int main(int argc, char** argv)
{
	int n = 0;
	scanf("%d", &n);
	struct Point* points = (struct Point*)malloc(n * sizeof(struct Point));
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &points[i].x, &points[i].y);
	}
	struct Point farthest = points[0];
	int maxdistance = points[0].x * points[0].x + points[0].y * points[0].y;
	for (int i = 1; i < n; i++)
	{
		int distance = points[i].x * points[i].x + points[i].y * points[i].y;
		if (distance > maxdistance)
		{
			maxdistance = distance;
			farthest = points[i];
		}
	}
	printf("%d %d", farthest.x, farthest.y);
	free(points);
	return 0;
}
