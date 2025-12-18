#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	int x;
	int y;
} Point;

void Point_init(Point* p, int x, int y);
double dist(Point* p1, Point* p2);

int main(int argc, char** argv)
{
	int n = 0;
	double m = 0.0;
	scanf("%d", &n);
	Point* points = (Point*)calloc(n, sizeof(Point));
	for (int i = 0; i < n; ++i)
	{
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		Point_init(&points[i], x, y);
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			for (int k = j + 1; k < n; ++k)
			{
				double st1 = dist(&points[i], &points[j]);
				double st2 = dist(&points[i], &points[k]);
				double st3 = dist(&points[j], &points[k]);
				double perr = st1 + st2 + st3;
				if (m < perr)
				{
					m = perr;
				}
			}
		}
	}
	printf("%.15lf", m);
	free(points);
	return 0;
}

void Point_init(Point* p, int x, int y)
{
	p -> x = x;
	p -> y = y;
}

double dist(Point* p1, Point* p2)
{
	return sqrt(pow(p1 -> x - p2 -> x, 2) + pow(p1 -> y - p2 -> y, 2));
}

