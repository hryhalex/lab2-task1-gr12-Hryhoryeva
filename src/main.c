/*
 * Задание: Программа получает размер массива через аргументы 
 * командной строки, заполняет его случайными числами и находит максимум.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
		if (argc < 2) {
				printf("Ошибка! Введите размер массива.\nПример: ./labrabota2-1 10\n");
				return 1;
		}

		int n = atoi(argv[1]);
		if (n <= 0) {
				printf("Ошибка! Размер массива должен быть больше 0.\n");
				return 1;
		}

		int *array = malloc(n * sizeof(int));
		srand(time(NULL));

		printf("Григорьева Александра, гр. 12\n");
		printf("Сформированный массив: ");
		for (int i = 0; i < n; i++) {
				array[i] = rand() % 100; 
				printf("%d ", array[i]);
		}
		printf("\n");

		int max = array[0];
		for (int i = 1; i < n; i++) {
				if (array[i] > max) {
						max = array[i];
				}
		}

		printf("Результат задачи (Максимум): %d\n", max);

		free(array);
		return 0;
}