/*
 ============================================================================
 Name        : D2-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculation(double, double, double, double);

int main(void) {

	double b, c, d, x;
	FILE *f;

	if ((f = fopen("input.txt", "r")) == 0){
		printf ("Ошибка при открытии файла input.txt\n");
		exit(1);
	}
	fscanf(f, "%lf %lf %lf %lf", &b, &c, &d, &x);
	fclose(f);

	printf("%lf", calculation(x, b, c, d));

	return EXIT_SUCCESS;
}

double calculation (double x, double b, double c, double d) {

	double result = 0;

	if ((d > 0) && ((10 + pow(c, 3)) != 0 ) )
		result = log(8 * d) + pow(5, x) + pow(c, 2) - ((pow(b, 3) - 5) / (10 + pow(c, 3)));

	return result;
}
