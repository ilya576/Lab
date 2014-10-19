/*
 ============================================================================
 Name        : D3-3_B10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 8
#define M 9

int main(void) {

	int i, ich, j, jch, temp, arr[N][M] = {{0}};
	FILE * f;

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			arr[i][j] = -9 + rand() % 19;
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	scanf("%d", &ich);

	f = fopen("change.txt", "r");
	fscanf(f, "%d", &jch);
	fclose(f);

	for (i = 0; i < N; i++) {
		if (ich == i){
			arr[ich][i] = arr[i][jch];
			continue;
		}
		temp = arr[ich][i];
		arr[ich][i] = arr[i][jch];
		arr[i][jch] = temp;
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
