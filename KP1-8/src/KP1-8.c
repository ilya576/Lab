/*
 ============================================================================
 Name        : KP1-8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 36

void init_arr(int *, int);
void print_arr(int *, int);
int search_max_m(int *, int);
int search_min_p(int *, int);

int main(void) {

	int pr, min_p, max_m, array[N] = {0};

	init_arr(array, N);
	print_arr(array, N);
	min_p = search_min_p(array, N);
	max_m = search_max_m(array, N);
	pr = min_p * max_m;

	printf("%d\n", pr);

	return EXIT_SUCCESS;
}

void init_arr(int * array, int M) {

	int i;

	for (i = 0; i < M; i++)
		array[i] = -45 + rand() % (41 - (-45) + 1);

}

void print_arr(int * array, int M) {

	int i;

	for (i = 0; i < M; i++)
		printf("%d ", array[i]);
	printf("\n");

}

int search_max_m(int * array, int M) {

	int i, max;

	for (i = 0; i < M; i++) {
		if (array[i] < 0) {
			max = array[i];
			break;
		}
	}

	for (i = 0; i < M; i++)
		if ((array[i] < 0) && (array[i] > max))
			max = array[i];

	return max;
}

int search_min_p (int * array, int M) {

	int i, min;

	for (i = 0; i < M; i++)
		if (array[i] > 0) {
			min = array[i];
			break;
		}

	for (i = 0; i < M; i++)
		if ((array[i] > 0) && (array[i] < min))
			min = array[i];

	return min;
}
