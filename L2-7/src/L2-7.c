/*
 ============================================================================
 Name        : L2-7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 55
#define M 25

int main(void) {

	int i, min, max, arr1[N] = {0}, arr2[M] = {0};
	FILE *f;

	f = fopen("input.txt", "r");
	for (i = 0; i < N; i++) {
		fscanf(f, "%d", &arr1[i]);
		printf("%d ", arr1[i]);
	}
	fclose(f);

	printf("\n");
	// 1)
	for (i = 1; i < N; i++) {
		arr1[i - 1] *= (arr1[i] % 10);
		printf("%d ", arr1[i - 1]);
	}
	printf("%d", arr1[i]);

	printf("\n");

	// 2)
	f = fopen("data.txt", "w+");

	for (i = 0; i < M; i++) {
		arr2[i] = (-99 + rand() % (99 -(-99) + 1));
		fprintf(f, "%d ", arr2[i]);
	}
	fclose(f);

	//Поиск минимального положительного и максимального отрицательного
	min = arr2[0];
	max = arr2[0];

	for(i = 0; i < M / 2; i++)
		if ((arr2[i] > 0) && (arr2[i] < min))
			min = arr2[i];
	for(i = M / 2; i < M; i++)
		if ((arr2[i] < 0) && (arr2[i] > max))
			max = arr2[i];

	f = fopen("data.txt", "a");
	fprintf(f, "min = %d, ", min);
	fprintf(f, "max = %d\n", max);
	fclose(f);

	return EXIT_SUCCESS;
}
