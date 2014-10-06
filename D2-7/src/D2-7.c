/*
 ============================================================================
 Name        : D2-7.c
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

	int i, j, min, sumi = 0, sumj = 0, arr[N][N] = {{0}};
	FILE *f;

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			arr[i][j] = (-90 + rand() % ( 90 - (-90) +1));
			printf ("%d ", arr[i][j]);
			if (j == (N -1))
				printf("\n");
		}
	}

	min = arr[0][0];

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if (arr[i][j] < min)
				min = arr[i][j];

	for (i = 1; i < N; i += 2)
		for (j = 0; j < N; j++)
			sumi += arr[i][j];

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j += 2)
			sumj += arr[i][j];

	f = fopen("data.txt", "w");
	fprintf(f,"%d %d %d", min, sumi, sumj);
	fclose(f);

	return EXIT_SUCCESS;
}
