/*
 ============================================================================
 Name        : D2-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 72

int main(void) {

	int i, a, arr[N] = {0};
	FILE *f;

	f = fopen("input.txt", "r");
	for (i = 0; i < N; i++) {
		fscanf(f, "%d", &a);
		arr[i] = a;
	}

	for (i = 0; i < N; i++) {
		if (arr[i] > 0)
			printf("%d ", arr[i]);
		printf("\n");
	for (i = 0; i < N; i++)
		if (arr[i] < 0)
			printf("%d ", arr[i]);

	}

	return EXIT_SUCCESS;
}
