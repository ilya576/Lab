/*
 ============================================================================
 Name        : L3-8_B10.c
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

	int i, j, arr[N][N] = {0};

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			arr[i][j] = rand() % 101;
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	int index_pi = N - 1, temp = 0;
	for (i = 0; i < N; i++) {
		temp = arr[index_pi][i];
		arr[index_pi][i] = arr[i][i];
		arr[i][i] = temp;
		index_pi--;
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
