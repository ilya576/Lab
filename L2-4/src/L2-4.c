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
double mult(double, double, double);

int main(void) {

	double x, min = -8.5, max = 3.7, h = 0.6;

	for (x = min; x <= max; x += h)
		printf("%.2lf ", x);

	printf("\n");

	for (x = min; x <= max; x += h)
		printf("%lf", function(x));

	printf("\n");

	printf("%lf", mult(min, max, h));

	return EXIT_SUCCESS;
}

double function(double x) {

	double y;

	y = 3 * pow(x, 3) - 5 * pow(x, 4) - 2 * x + 3;

	return y;
}

double mult(double a, double b, double h) {

	double min = function(a), max = function(a), x;

	for (x = a; x <= b; x += h) {
		if (function(x) > max)
			max = function(x);
		if (function(x) < min)
			min = function(x);
	}

	return min * max;
}
