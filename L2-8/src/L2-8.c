/*
 ============================================================================
 Name        : L2-8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 6

int main(void) {

	int init_array[N][N] = {{0}}, new_array[N][N] = {{0}}, i, j, sum_p =0, count = 0, count_avr = 0;
	FILE *f;

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			init_array[i][j] = (-500 + rand() % (500 - (-500) + 1));

	f = fopen("array.txt","w+");
	for (i = 0; i < N; i++) {
		for(j = 0; j < N; j++)
			fprintf(f, "%d ", init_array[i][j]);
		fprintf(f, "\n");
	}
	fclose(f);

	f = fopen("array.txt", "r");
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			fscanf(f, "%d", &new_array[i][j]);
	fclose(f);

	int sum = 0;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if ((i < j) && (new_array[i][j] < 0)) {
				sum += new_array[i][j];
			}
	printf("Сумма = %d\n", sum);


	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if ((i + j) == (N - 1)) {
				sum_p += new_array[i][j];
				count_avr++;
			}
	double average = (double)sum_p / count_avr;

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if (new_array[i][j] > average)
				count++;
	printf("Количество элементов = %d\n", count);

	return EXIT_SUCCESS;
}
