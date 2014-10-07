/*
 ============================================================================
 Name        : 1-9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, count = 1, step = 3;
	FILE *f;

	for (i = 0; i < 12; i++)
		printf("%d\t", 1 + rand() % (1 - 10 + 1));

	f = fopen("data.txt", "w");

	for(i = 1; i < 17; i++) {
		fprintf(f, "%d ", 1 + rand() % (1 - 10 + 1));

		if (i % count == 0) {
			fprintf(f, "\n");
			count = (i + step);
			step += 2;
		}
	}

	fclose(f);

	return EXIT_SUCCESS;
}
