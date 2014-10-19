/*
 ============================================================================
 Name        : KP1-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	double y, x, miny;
	int min = -3, max = 15;
	FILE *f;

	miny = 5 * (-3) - 3;

	for (x = min; x <= max; x += 1.6) {
		y = 5 * x - 3;
		if (miny > y)
			miny = y;
	}

	f = fopen("data.txt", "w+");
	fprintf(f, "%lf", miny);
	fclose(f);

	return EXIT_SUCCESS;
}
