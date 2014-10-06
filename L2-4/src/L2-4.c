/*
 ============================================================================
 Name        : L2-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double function(double);
double mult(double, double);

int main(void) {

	double x, y, max_y, min_y, p;

	for (x = -8.5; x <= 3.7; x += 0.6)
		printf("%.2lf ", x);

	printf("\n");

	for (x = -8.5; x <= 3.7; x += 0.6) {
		y = function(x);
		if (y > max_y)
			max_y = y;
		if (y < min_y)
			min_y = y;
		printf("%.2lf ", y);
	}
	printf("\n");

	p = mult(min_y, max_y);

	printf("%lf", p);

	return EXIT_SUCCESS;
}

double function(double x) {

	double y;

	y = 3 * pow(x, 3) - 5 * pow(x, 4) - 2 * x + 3;

	return y;
}

double mult(double min_y, double max_y) {

	double p;

	p = min_y * max_y;

	return p;
}
