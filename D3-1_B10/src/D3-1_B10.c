/*
 ============================================================================
 Name        : D3-1_B10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


//Произвести обмен элементов главной и побочной диагонали +
//ниже главной и выше побочной, и выше главной и ниже побочной
//Наглядная версия программы

#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(void) {

	int old_1[N][N] = {{0}}, old_2[N][N] = {{0}}, new_1[N][N] = {{0}}, new_2[N][N] = {{0}};
	int i, j;

	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++){
			old_1[i][j] = 1;
			printf("%d", old_1[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			old_2[i][j] = 2;
			printf("%d", old_2[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for(i = 0; i < N; i++)
		for(j = 0; j < N; j++)
			if((i == j) || (i + j == N - 1) || ((i < j) && (i + j > N - 1)) || ((i > j) && (i + j < N - 1))) {
				new_1[i][j] = old_1[i][j];
				new_2[i][j] = old_2[i][j];
			} else {
				new_1[i][j] = old_2[i][j];
				new_2[i][j] = old_1[i][j];
			}

	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			printf("%d", new_1[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			printf("%d", new_2[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
