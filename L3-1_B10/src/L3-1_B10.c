/*
 ============================================================================
 Name        : L3-1_B10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 45

int main(void) {

	int i, count = 0, arr[N] = {0};
	int * new_arr;

	for (i = 0; i < N; i++)
		arr[i] = rand() % 251;

	for (i = 0; i < N; i++)
		if (arr[i] % 10 == 2)
			count++;

	new_arr = (int *)malloc(count * sizeof(int));

	int h = 0;
	for (i = 0; i < N; i ++)
		if (arr[i] % 10 == 2) {
			new_arr[h] = arr[i];
			h++;
		}

	for (i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");

	for (i = 0; i < count; i++)
		printf("%d ", new_arr[i]);
	printf("\n");

	free(new_arr);

	return EXIT_SUCCESS;
}
