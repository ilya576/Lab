/*
 ============================================================================
 Name        : D2-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mult_range(int, int, int);

int main(void) {

	int a, b, h, result;
	FILE *f;

	f = fopen("input.txt", "r");
	fscanf("%d %d %d", &a, &b, &h);
	fclose(f);

	result = mult_range(a, b, h);

	return EXIT_SUCCESS;
}

int mult_range (int a, int b, int h) {

	int i, result = 1;

	for (i = ((a + b) / 2); i < (b + 1); i += h) {
		result *= i;
	}

	return result;
}
