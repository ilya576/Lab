/*
 ============================================================================
 Name        : L3-6_B10.c
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

	int i, temp, arr[N] = {0};

	for (i = 0; i < N; i++) {
		arr[i] = rand() % 251;
		printf("%4d", arr[i]);
	}
	printf("\n");

	for (i = 0; i < N - 1;) {
		if (arr[i] < arr[i + 1]) {
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
			i += 2;
		} else
			i++;
	}

	for (i = 0; i < N; i++)
		printf("%4d", arr[i]);
	printf("\n");

	return EXIT_SUCCESS;
}
