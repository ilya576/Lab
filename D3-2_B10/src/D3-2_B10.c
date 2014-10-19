/*
 ============================================================================
 Name        : D3-2_B10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 15
#define M 10

int main(void) {

	int arr[N][M] = {{0}}, count_arr[M] = {0};
	int i, j;

	for(i = 0; i < N; i++)
		for(j = 0; j < M; j++)
			arr[i][j] = -10 + rand() % 21;

	for(j = 0; j < M; j++) {
		count_arr[j] = 0;
		for(i = 0; i < N; i++)
			if (arr[i][j] % 2 == 0)
				count_arr[j]++;
	}

	for(i = 0; i < N; i++) {
		for(j = 0; j < M; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for(i = 0; i < M; i++)
		printf("%d ", count_arr[i]);

	return EXIT_SUCCESS;
}
