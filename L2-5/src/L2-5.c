/*
 ============================================================================
 Name        : L2-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculation(double, double);

int main(void) {

	double x, y, result;
	FILE *f;

	f = fopen("input.txt", "r");
	fscanf(f, "%lf %lf", &x, &y);
	fclose(f);

	result = calculation(x, y);

	printf ("%lf", result);

	return EXIT_SUCCESS;
}

double calculation(double x, double y) {

	double s = 0.0;

	if (y != 0) {
		if (x / y + 7 * pow(cos(x + 9), 2) > 0)
			s = 1 / sqrt(x / y + 7 * pow(cos(x + 9), 2));

	}

	return s;
}
