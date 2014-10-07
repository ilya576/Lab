/*
 ============================================================================
 Name        : 1-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a, b, c, d, e, sumint;
	double k, h, g, sumfloat;
	FILE *f;

	f = fopen("data.txt", "w");
    fprintf(f, "%d %d %d %d %d\n%lf %lf %lf", 1, 2, 3, 4, 5, 6.1, 7.2, 8.3);
    fclose(f);

	f = fopen("data.txt", "r");
	fscanf(f, "%d%d%d%d%d%lf%lf%lf", &a, &b, &c, &d, &e, &k, &h, &g);
	fclose(f);

	sumint = a + b + c + d + e;
	sumfloat = k + h + g;

	printf("a=%d b=%d c=%d d=%d e=%d f=%lf h=%lf g=%lf\n", a, b, c, d, e, k, h, g);
	printf("sumint = %d, sumfloat = %lf", sumint, sumfloat);

	return EXIT_SUCCESS;
}
