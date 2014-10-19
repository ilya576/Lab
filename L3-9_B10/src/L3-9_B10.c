/*
 ============================================================================
 Name        : L3-9_B10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 15
#define M 20

void init_arr(int *, int);
void sort_arr_p(int *, int);
void sort_arr_m(int *, int);
void print_arr(int *, int);

int main(void) {

	int arr1[N] = {0};
	int arr2[M] = {0};
	int * new_arr1_1, * new_arr1_2;
	int * new_arr2_1, * new_arr2_2;
	int * new_arr;
	int size_new_arr = 2 * (N / 2 + M / 2);

	new_arr1_1 = (int *)malloc((N / 2) * sizeof(int));
	new_arr1_2 = (int *)malloc((N / 2) * sizeof(int));
	new_arr2_1 = (int *)malloc((M / 2) * sizeof(int));
	new_arr2_2 = (int *)malloc((M / 2) * sizeof(int));
	new_arr = (int *)malloc(size_new_arr * sizeof(int));

	init_arr(arr1, N);
	init_arr(arr2, M);

	print_arr(arr1, N);
	print_arr(arr2, M);
	printf("\n");

	sort_arr_p(arr1, N);
	sort_arr_m(arr2, M);

	print_arr(arr1, N);
	print_arr(arr2, M);
	printf("\n");

	int i = 0, h = 0;
	for (i = 0; i < N / 2; i++)
		new_arr1_1[i] = arr1[i];
	for (i = N / 2; i < N; i++, h++)
		new_arr1_2[h] = arr1[i];

	h = 0;
	for (i = 0; i < M / 2; i++)
		new_arr2_1[i] = arr2[i];
	for (i = M / 2; i < M; i++, h++)
		new_arr2_2[h] = arr2[i];

	print_arr(new_arr1_1, N / 2);
	print_arr(new_arr1_2, N / 2);
	printf("\n");
	print_arr(new_arr2_1, M / 2);
	print_arr(new_arr2_2, M / 2);
	printf("\n");

	h = 0;
	for (i = 0; i < N / 2; i++, h++)
		new_arr[h] = new_arr1_1[i];
	for (i = 0; i < M / 2; i++, h++)
		new_arr[h] = new_arr2_1[i];
	for (i = 0; i < N / 2; i++, h++)
		new_arr[h] = new_arr1_2[i];
	for (i = 0; i < M / 2; i++, h++)
		new_arr[h] = new_arr2_2[i];

	print_arr(new_arr, size_new_arr);

	free(new_arr);
	free(new_arr1_1);
	free(new_arr1_2);
	free(new_arr2_1);
	free(new_arr2_2);

	return EXIT_SUCCESS;
}

void init_arr(int * array, int size_arr) {

	int i;
	for (i = 0; i < size_arr; i++)
		array[i] = rand() % 101;
}
//метод сортировки выбором
void sort_arr_p(int * array, int size_arr) {

	int i, temp;

	int k = 0, index = 0;
	for (i = 0; i < size_arr; i++) {
		index = i;
		for (k = i + 1; k < size_arr; k++)
			if (array[k] < array[index])
				index = k;
		temp = array[index];
		array[index] = array[i];
		array[i] = temp;
	}
}

void sort_arr_m(int * array, int size_arr) {

	int i, temp;

	int k = 0, index = 0;
	for (i = 0; i < size_arr; i++) {
		index = i;
		for (k = i + 1; k < size_arr; k++)
			if (array[k] > array[index])
				index = k;
		temp = array[index];
		array[index] = array[i];
		array[i] = temp;
	}
}

void print_arr(int * array, int size_arr) {

	int i;
	for (i = 0; i < size_arr; i++)
		printf("%4d", array[i]);
	printf("\n");
}
