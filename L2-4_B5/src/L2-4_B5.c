/*
 ============================================================================
 Name        : L2-4_B5.c
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
double average(double, double, double);

int main(void) {

	double x, min = 4.0, max = 14.2, h = 0.7;

	for(x = min; x <= max; x += h)
		printf("%lf ", x);
	printf("\n");

	for(x = min; x <= max; x += h)
		printf("%lf ", function(x));
	printf("\n");

	printf("%lf", average(min, max, h));


	return EXIT_SUCCESS;
}

double function(double x) {

	double y;

	y = pow(x, 4) - pow(x, 3) - pow(x, 2) + 15;

	return y;
}

double average(double a, double b, double h) {

	double x, aver = 0;
	int n = 0;

	for (x = a; x <= b; x += h) {
		aver += function(x);
		n++;
	}

	aver /= n;

	return aver;
}
