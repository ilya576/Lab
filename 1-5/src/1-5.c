/*
 ============================================================================
 Name        : 1-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int d, e, sint;
	double a, b, c, sfloat;
	FILE *f;

	f = fopen("data.txt", "w");
	fprintf(f, "%lf %lf %lf\n%d %d", 1.2, 2.3, 3.4, 4, 5);
	fclose(f);

	f = fopen("data.txt", "r");
	fscanf(f, "%lf %lf %lf\n%d %d", &a, &b, &c, &d, &e);
	fclose(f);

	(d > e) ? (sint = d) : (sint = e);
	(a > b) ? (sfloat = a) : ((b > c) ? (sfloat = b) : (sfloat = c));

	printf ("Большее из целых = %d\nБольшее из вещественных = %lf", sint, sfloat);

	return EXIT_SUCCESS;
}
