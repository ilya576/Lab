/*
 ============================================================================
 Name        : L3-2_B10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 14
#define M 16

int main(void) {

	int i, j, count = 0, arr[N][M] = {{0}};
	int * new_arr;

	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			arr[i][j] = -25 + rand() % 51;

	for (i = 0; i < N; i += 2)
		for (j = 0; j < M; j++)
			if (arr[i][j] < 0)
				count++;

	new_arr = (int *)malloc(count * sizeof(int));


	int h = 0;
	for (i = 0; i < N; i += 2)
		for (j = 0; j < M; j++)
			if (arr[i][j] < 0) {
				new_arr[h] = arr[i][j];
				h++;
			}

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			printf ("%4d", arr[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < count; i++)
		printf("%4d", new_arr[i]);
	printf("\n");

	return EXIT_SUCCESS;
}
