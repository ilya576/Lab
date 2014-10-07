/*
 ============================================================================
 Name        : 1-7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	double a, h, g, s, b;

	scanf("%lf %lf %lf %lf", &a, &g, &s, &b);

	if (b != 0)
		h = sin(pow(g,2)) - log(3*a) + pow((s/b),2);
	else
		printf("Недопустимое значение b\n");

	printf("Результат h = %lf", h);

	return EXIT_SUCCESS;
}
