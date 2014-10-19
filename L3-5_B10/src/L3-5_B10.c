/*
 ============================================================================
 Name        : L3-5_B10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(void) {

	int i, j, k, temp, arr[N][N] = {{0}};

	//инициализация массива
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			arr[i][j] = rand() % 251;
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	scanf("%d", &k);

	//меняем местами k-ую и предпоследнюю строку
	for (j = 0; j < N; j++) {
		temp = arr[k][j];
		arr[k][j] = arr[N - 2][j];
		arr[N - 2][j] = temp;
	}

	//выводим измененный массив
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//ищем максимум и минимум
	int min = arr[0][0], index_min_i, index_min_j, max = arr[0][0], index_max_i, index_max_j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if (arr[i][j] > max) {
				max = arr[i][j];
				index_max_j = j;
				index_max_i = i;
			}
			else if (arr[i][j] < min) {
				min = arr[i][j];
				index_min_i = i;
				index_min_j = j;
			}

	printf("Минимальный элемент = %d [%d][%d]\n", min, index_min_i + 1, index_min_j + 1);
	printf("Максимальный элемент = %d [%d][%d]", max, index_max_i + 1, index_max_j + 1);
	printf("\n\n");

	//меняем местами строку с min и столбец с max
	for (j = 0; j < N; j++) {
		if (j == index_max_j) {
			arr[j][index_max_j] = arr[index_min_i][j];
			continue;
		}
		temp = arr[index_min_i][j];
		arr[index_min_i][j] = arr[j][index_max_j];
		arr[j][index_max_j] = temp;
	}

	//выводим измененный массив
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	return EXIT_SUCCESS;
}
