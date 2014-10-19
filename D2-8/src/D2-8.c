/*
 ============================================================================
 Name        : D2-8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 25

int find (int *, int, double);

int main(void) {

	int i, i_av, arr[N] = {0};
	double average = 0.0;

	for (i = 0; i < N; i++)
		arr[i] = (-185 + rand() % (-23 - (-185) + 1));

	for (i = 0; i < N; i++)
		average += arr[i];
	average /= (double) N;

	i_av = find(arr, N, average);

	for (i = 0; i < N; i++)
		printf("%5d", arr[i]);
	printf("\n");

	printf("Номер элемента: %d", i_av + 1);

	return EXIT_SUCCESS;
}

int find (int * array, int size_arr, double average) {

	int i, i_av;
	double ABS, ABSn;

	ABS = (double)fabs(array[0] - average);

	for (i = 0; i < size_arr; i++) {
		ABSn = (double) fabs(array[i] - average);
		if (ABSn < ABS) {
			ABS = ABSn;
			i_av = i;
		}
	}

	return i_av;
}
