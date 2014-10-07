/*
 ============================================================================
 Name        : 1-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a, b;
	double c;
	FILE *f;

	a = (-200 + rand() % (-20 -(-200) +1));
	b = (-200 + rand() % (-20 -(-200) +1));
	c = (-200 + rand() % (-20 -(-200) +1));

	f = fopen("file3", "w");

	fprintf(f, "%d\t%d\t%lf\n", a, b, c);

	fclose(f);

	return EXIT_SUCCESS;
}
