#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Структура для хранения одного результата (соревнование + место)
typedef struct {
	char competition_name[100];
	int place;
} Result;

// Структура для хранения результатов спортсменов
typedef struct {
	Result* results;    // динамический массив результатов
	int count;          // количество результатов
	int capacity;       // вместимость массива
} Recordbook;

// Структура для спортсмена
typedef struct {
	char name[100];
	char sport_type[100];
	Recordbook records;     // вложенная структура с результатами
} Sportsman;

// Функции для работы с Recordbook
void init_recordbook(Recordbook* rb) {
	rb->count = 0;
	rb->capacity = 5;
	rb->results = (Result*)malloc(rb->capacity * sizeof(Result));
}

void add_result(Recordbook* rb, const char* competition_name, int place) {
	// Если массив заполнен, увеличиваем его размер
	if (rb->count >= rb->capacity) {
		rb->capacity *= 2;
		rb->results = (Result*)realloc(rb->results, rb->capacity * sizeof(Result));
	}

	strcpy(rb->results[rb->count].competition_name, competition_name);
	rb->results[rb->count].place = place;
	rb->count++;
}

int count_first_places(const Recordbook* rb) {
	int count = 0;
	for (int i = 0; i < rb->count; i++) {
		if (rb->results[i].place == 1) {
			count++;
		}
	}
	return count;
}

void free_recordbook(Recordbook* rb) {
	free(rb->results);
	rb->results = NULL;
	rb->count = 0;
	rb->capacity = 0;
}

// Функции для работы со спортсменами
Sportsman* create_sportsmen(int n) {
	Sportsman* sportsmen = (Sportsman*)malloc(n * sizeof(Sportsman));
	for (int i = 0; i < n; i++) {
		init_recordbook(&sportsmen[i].records);
	}
	return sportsmen;
}

Sportsman* find_best_sportsman(Sportsman* sportsmen, int n) {
	if (n <= 0) return NULL;

	Sportsman* best = &sportsmen[0];
	int best_first_places = count_first_places(&sportsmen[0].records);

	for (int i = 1; i < n; i++) {
		int current_first_places = count_first_places(&sportsmen[i].records);
		if (current_first_places > best_first_places) {
			best = &sportsmen[i];
			best_first_places = current_first_places;
		}
	}
	return best;
}

void print_sportsman(const Sportsman* sportsman) {
	printf("Спортсмен: %s, вид спорта: %s\n", sportsman->name, sportsman->sport_type);
	printf("Результаты:\n");
	for (int i = 0; i < sportsman->records.count; i++) {
		printf("  %s - %d место\n", sportsman->records.results[i].competition_name,
				sportsman->records.results[i].place);
	}
	printf("Количество первых мест: %d\n", count_first_places(&sportsman->records));
}

void free_sportsmen(Sportsman* sportsmen, int n) {
	for (int i = 0; i < n; i++) {
		free_recordbook(&sportsmen[i].records);
	}
	free(sportsmen);
}

void clear_input_buffer() {
	int c = 0;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

void clear_last_linebreak(char* str) {
	if (str != NULL) {
		str[strcspn(str, "\n")] = '\0';
	}
}

int main() {
	setlocale(LC_ALL, "UTF-8");

	int n = 0;
	printf("Введите количество спортсменов: ");
	scanf("%d", &n);
	clear_input_buffer();

	Sportsman* sportsmen = create_sportsmen(n);

	// Ввод данных о спортсменах
	for (int i = 0; i < n; i++) {
		printf("\nСпортсмен %d:\n", i + 1);
		printf("Имя: ");
		fgets(sportsmen[i].name, sizeof(sportsmen[i].name), stdin);
		clear_last_linebreak(sportsmen[i].name);

		printf("Вид спорта: ");
		fgets(sportsmen[i].sport_type, sizeof(sportsmen[i].sport_type), stdin);
		clear_last_linebreak(sportsmen[i].sport_type);

		int results_count = 0;
		printf("Количество результатов: ");
		scanf("%d", &results_count);
		clear_input_buffer();

		for (int j = 0; j < results_count; j++) {
			char competition[100];
			int place;

			printf("Результат %d:\n", j + 1);
			printf("  Название соревнования: ");
			fgets(competition, sizeof(competition), stdin);
			clear_last_linebreak(competition);

			printf("  Занятое место: ");
			scanf("%d", &place);
			clear_input_buffer();

			add_result(&sportsmen[i].records, competition, place);
		}
	}

	// Вывод всех спортсменов
	printf("\nВсе спортсмены:\n");
	for (int i = 0; i < n; i++) {
		printf("\n%d. ", i + 1);
		print_sportsman(&sportsmen[i]);
	}

	// Поиск спортсмена с наибольшим количеством первых мест
	Sportsman* best = find_best_sportsman(sportsmen, n);
	if (best) {
		printf("\n\nСпортсмен с наибольшим количеством первых мест:\n");
		print_sportsman(best);
	}

	free_sportsmen(sportsmen, n);
	return 0;
}
