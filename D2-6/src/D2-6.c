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

	int i, min = 0, mini = 0, count = 0, average = 0, arr[N] = {0};

	for (i = 0; i < N; i++) {
		arr[i] = (-100 + rand() % (100 - (-100) + 1));
		printf("%d ", arr[i]);
	}

	printf ("\n");

	for(i = 0; i < N; i++)
		if(arr[i] > 0) {
			min = arr[i];
			break;
		}

	for (i = 0; i < N; i++)
		if ((arr[i] > 0) && (arr[i] < min)) {
			min = arr[i];
			mini = i;
		}

	for (i = 0; i < N; i++)
		if ((arr[i] < 0)) {
			average += arr[i];
			count++;
		}

	average /= count;

	printf ("Индекс минимального положительного элемента массива = %d \n", mini + 1);
	printf ("average = %d \n", average);

	return EXIT_SUCCESS;
}
