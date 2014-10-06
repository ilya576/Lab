/*
 ============================================================================
 Name        : D2-6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 15

int main(void) {

	int i, minpi, count = 0, average = 0, arr[N] = {0};

	for (i = 0; i < N; i++) {
		arr[i] = (-100 + rand() % (100 - (-100) + 1));
		printf("%d ", arr[i]);
	}

	printf ("\n");

	minpi = arr[0];

	for (i = 0; i < N; i++)
		if ((arr[i] > 0) && (arr[i] < minpi))
			minpi = i;

	for (i = 0; i < N; i++)
		if ((arr[i] < 0)) {
			average += arr[i];
			count++;
		}

	average /= count;

	printf ("Индекс минимального положительного элемента массива = %d \n", i);
	printf ("average = %d \n", average);

	return EXIT_SUCCESS;
}
