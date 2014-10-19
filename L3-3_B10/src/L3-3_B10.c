/*
 ============================================================================
 Name        : L3-3_B10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 10
#define M 20

int main(void) {

	int i, j, arr[N][M] = {{0}};
	int * new_arr1, * new_arr2;

	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			arr[i][j] = rand() % 251;

	new_arr1 = (int *)malloc(N * sizeof(int));
	new_arr2 = (int *)malloc(M * sizeof(int));

	for (i = 0; i < N; i++) {
		new_arr1[i] = 0;
		for (j = 0; j < M; j++)
			if (arr[i][j] % 10 == 0)
				new_arr1[i]++;
	}

	int min;
	for (j = 0; j < M; j++) {
		for (i = 0; i < N; i++)
			if (arr[i][j] % 2 != 0) {
				min = arr[i][j];
				break;
			}
		for (i = 0; i < N; i++)
			if ((arr[i][j] <= min) && (arr[i][j] % 2 != 0) ) {
				min = arr[i][j];
				new_arr2[j] = min;
			}
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			printf("%5d", arr[i][j]);
		} printf(" %d", new_arr1[i]);
		printf("\n");
	}

	for (j = 0; j < M; j++)
		printf("%5d", new_arr2[j]);

	free(new_arr1);
	free(new_arr2);

	return EXIT_SUCCESS;
}
