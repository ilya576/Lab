/*
 ============================================================================
 Name        : Progon.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sum(double, double, double);
double function(double);

int main(void) {

	int min = -3, max = 15;
	double y, x, h = 1.6, miny = 5 * (-3) - 3;

	for (x = min; x <= max; x += h) {
		y = function(x);
		if (miny < y)
			miny = y;
	}

	printf("%lf\n", miny);
	printf("%lf\n", sum(min, max, h));

	return EXIT_SUCCESS;
}
double function(double x) {

	return 5 * x - 3;

}

double sum(double a, double b, double h) {

	double x, y, summa = 0;

	for (x = a; x <= b; x += h) {
		y = function(x);
		if (y > 0) {
			summa += y;
		}
	}

	return summa;
}
