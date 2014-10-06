/*
 ============================================================================
 Name        : L2-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, a, b;
	FILE *f;

	f = fopen("input.txt", "w+");

	for (i = 1; i < 11; i++) {
		a = (-50 + rand() % (50 - (-50) + 1));
		b = (-50 + rand() % (50 - (-50) + 1));
		(a > b) ? fprintf(f, "%d ", a) : fprintf(f, "%d ", b);
		if ((i % 2) == 0)
			fprintf(f, "\n");
	}

	fclose(f);

	return EXIT_SUCCESS;
}
