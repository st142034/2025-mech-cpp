#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char* name;
	int math;
	int fiz;
	int inf;
} Student;

void Student_init(Student* st, char* name, int math, int fiz, int inf);

int main(int argc, char** argv)
{
	int n = 0;
	int sum_math = 0;
	int sum_fiz = 0;
	int sum_inf = 0;
	scanf("%d", &n);
	Student* students = (Student*)calloc(n, sizeof(Student));
	for (int i = 0; i < n; ++i)
	{
		char* name = (char*)calloc(100, sizeof(char));
		char* surname = (char*)calloc(100, sizeof(char));
		int math = 0;
		int fiz = 0;
		int inf = 0;
		scanf("%99s %99s %d %d %d", name, surname, &math, &fiz, &inf);

		char* full_name = (char*)calloc(200, sizeof(char));
		strcpy(full_name, name);
		strcat(full_name, " ");
		strcat(full_name, surname);

		Student_init(&students[i], full_name, math, fiz, inf);
		sum_math += math;
		sum_fiz += fiz;
		sum_inf += inf;
		free(name);
		free(surname);
	}
	printf("%lf %lf %lf", sum_math * 1.0 / n, sum_fiz * 1.0 / n, sum_inf * 1.0 / n);
	for (int i = 0; i < n; ++i) {
		free(students[i].name);
	}
	free(students);
	return 0;
}

void Student_init(Student* st, char* name, int math, int fiz, int inf)
{
	st -> name = name;
	st -> math = math;
	st -> fiz = fiz;
	st -> inf = inf;
}
