/*
 ============================================================================
 Name        : KP1-5_B12.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, count = 0, st = 4;

	for(i = 0; i < 50; i++) {
		printf("%d ", -38 + rand() % (74 - (-38) +1));
		count++;
		if ((count / 5) == st) {
			printf("\n");
			count = 0;
			st--;
		}
	}

	return EXIT_SUCCESS;
}
