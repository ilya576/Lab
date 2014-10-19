/*
 ============================================================================
 Name        : L2-11.c
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
void search_randd(double [N][N]);


int main(void) {

	double arr[N][N] = {{0}};
	double n, ultimate_rand;
	int count_ij;
	int i, j;

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			arr[i][j] = -90 + (rand() * (20 - (-90)) / (double)RAND_MAX);
			printf("%lf ",arr[i][j]);
		} printf("\n");
	}

	n = search_n(arr); // насколько меньший элемент ЅќЋ№Ў≈ максимального... ищем...
	count_ij = search_ij(arr);
	ultimate_rand = search_rand(arr);

	printf("%lf\n", n);
	printf("%d\n", count_ij);
    printf("%lf\n", ultimate_rand);
    search_randd(arr); // функци€ проверки

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

	double sum = 0, d;
	int i;

	d = 1 + (rand() * (N * N - 1) / RAND_MAX); // случайное количество от 1 до 100
	for (i = 0; i < d; i++)
		sum += (array[0][0] + (rand() * (array[(int)d][(int)d] - array[0][0])) / RAND_MAX);

	return sum;
}

void search_randd(double array[N][N]) {

	double sum = 0.0;
	int i, j, i1, j1, d;
	int arr[N][N] = {{0}};

	d = 1 + rand() % (N*N);

	/*for (i = 0; i < d; i++) {
		i1 = rand() % (N + 1);
		j1 = rand() % (N + 1);
		sum += array[i1][j1];
		printf ("i1 = %d, j1 = %d\n", i1, j1);
		printf("%lf\n", array[i1][j1]);
		printf("%lf\n", sum);
	}
	printf("%lf\n", sum); */

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			arr[i][j] = 10 + rand() % (100 - 10 + 1);
			printf("%d", arr[i][j]);
		} printf("\n");
	}
	for (i = 0; i < d; i++) {
		i1 = rand
	}

}


