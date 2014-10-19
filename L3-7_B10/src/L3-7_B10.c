/*
 ============================================================================
 Name        : L3-7_B10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 25

int main(void) {

	int i, arr[N] = {0};

	for (i = 0; i < N; i++) {
 		arr[i] = rand() % 251;
 		printf("%4d", arr[i]);
	}
	printf("\n");

	int min = arr[0], index;
	for (i = 0; i < N; i++)
		if (arr[i] < min) {
			min = arr[i];
			index = i;
		}
	printf("Минимальный элемент массива: %d [%d]\n", min, index);

	int temp, index_N = N - 1;
	for (i = index + 1; i < index_N; i++, index_N--) {
		temp = arr[i];
		arr[i] = arr[index_N];
		arr[index_N] = temp;
	}

	for (i = 0; i < N; i++)
		printf("%4d", arr[i]);
	printf("\n");

	return EXIT_SUCCESS;
}
