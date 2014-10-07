/*
 ============================================================================
 Name        : L2-10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10

double search_n(double [N][N]);
double search_ij(double [N][N]);
double search_rand(double [N][N]);

int main(void) {

	double arr[N][N] = {{0}};
	double n, ultimate_rand;
	int count_ij;
	int i, j;

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			arr[i][j] = -90 + (rand() * (20 - (-90)) / (double)RAND_MAX);

	n = search_n(arr); // насколько меньший элемент ЅќЋ№Ў≈ максимального... ищем...
	count_ij = search_ij(arr);
	ultimate_rand = search_rand(arr);

	printf("%lf\n", n);
	printf("%d\n", count_ij);
    printf("%lf\n", ultimate_rand);

	return EXIT_SUCCESS;
}

double search_n(double array[N][N]) {

	double n, min, max;
	int i, j;

	min = max = array[0][0];

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if (array[i][j] > max)
				max = array[i][j];
			else if (array[i][j] < min)
				min = array[i][j];

	n = max - min;

	return n;
}

double search_ij(double array[N][N]) {

	int i, j;
	double count = 0;

	for(i = 0; i < N; i++)
		for(j = 0; j < N; j++)
			if ((fabs((int)array[i][j])) < (i + j))
				count++;

	return count;
}

double search_rand(double array[N][N]) {

	double sum = 0;
	int i, i1, j1, d;

	d = 1 + rand() % (N*N);

	for (i = 0; i < d; i++) {
		i1 = rand() % (N);
		j1 = rand() % (N);
		sum += array[i1][j1];
	}

	return sum;
}

