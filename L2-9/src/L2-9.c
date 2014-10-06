/*
 ============================================================================
 Name        : L2-9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 35

int search_m (int *, int);
int search_min_4(int *, int);
int search_sum_x2 (int *, int);


int main(void) {

	int arr[N] = {0};
	int i, count_el = 0, min_4 = 0, sum_x2 = 0;

	for (i = 0; i < N; i++) {
		arr[i] = -100 + rand() % (250 - (-100) + 1);
		printf ("%d ", arr[i]);
	} printf("\n");
	count_el = search_m(arr, N);
	min_4 = search_min_4(arr, N);
	sum_x2 = search_sum_x2(arr, N);

	printf("%d ", count_el);
	printf("%d ", min_4);
	printf("%d ", sum_x2);

	return EXIT_SUCCESS;
}

int search_m (int * array, int size){

	int i, count = 0, m = 0, m1 = 0;

	m = fabs(array[0] % 10);

	for (i = 1; i < size; i++) {
		m1 = fabs(array[i] % 10);
		if (m1 < m)
			count++;
	}

	return count;
}

int search_min_4(int * array, int size) {

	int min = 0, i;

	for(i = 0; i < size; i++) {
		if (((array[i] % 4) == 0) && (array[i] < min))
			min = array[i];
	}

	return min;
}

int search_sum_x2(int * array, int size) {

	int sum = 0, i;

	for (i = 0; i < size; i++)
		if (array[i] < 0)
			sum += pow(array[i], 2);

	return sum;
}
