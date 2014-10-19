/*
 ============================================================================
 Name        : L3-10_B10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 10
#define M 10

int main(void) {

	int i, j, arr[N][M] = {{0}};

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			arr[i][j] = rand() % 251;
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//метод выбора
	/*int index, h, temp;
	for (j = 0; j < M; j++) {
		for (i = 0; i < N; i++) {
			index = i;
			for (h = i + 1; h < N; h++)
				if (arr[h][j] < arr[index][j])
					index = h;
			temp = arr[index][j];
			arr[index][j] = arr[i][j];
			arr[i][j] = arr[index][j];
		}
	} */

	//метод простых вставок
	/*int index, temp;
	for (j = 0; j < M; j++) {
		for (i = 1; i < N; i++) {
			temp = arr[i][j];
			index = --i;
			while (index >= 0 && arr[index][j] > temp) {
				arr[index + 1][j] = arr[index][j];
				arr[index][j] = temp;
				index--;
			}
		}
	} */

	//метод Ўелла
	int temp, step, h;
	for (j = 0; j < M; j++) {
		step = N / 2;
		while (step > 0) {
			for (i = 0; i < N - step; i++) {
				h = i;
				while ((h >= 0) && (arr[h][j] > arr[h + step][j])) {
					temp = arr[h][j];
					arr[h][j] = arr[h + step][j];
					arr[h + step][j] = temp;
					h -= step;
				}
			}
			step /= 2;
		}
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	return EXIT_SUCCESS;
}
