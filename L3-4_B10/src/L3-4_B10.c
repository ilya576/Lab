/*
 ============================================================================
 Name        : L3-4_B10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 15
#define M 25

int main(void) {

	int i, j, arr[N][M] = {{0}};
	int * new_arr;

	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			arr[i][j] = -250 + rand() % 501;

	new_arr = (int *)malloc(N * sizeof(int));

	int max;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++)
			if (arr[i][j] % 3 == 0) {
				max = arr[i][j];
				break;
			}
		for (j = 0; j < M; j++) {
			if ((arr[i][j] >= max) && (arr[i][j] % 3 == 0)) {
				max = arr[i][j];
				new_arr[i] = max;
			}
		}
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (i = 0; i < N; i++)
		printf("%4d ", new_arr[i]);
	printf("\n \n");

	int pr = 1;
	for (i = 0; i < N; i++)
		pr *= new_arr[i];

	printf("%d ", pr);

	return EXIT_SUCCESS;
}
