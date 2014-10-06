/*
 ============================================================================
 Name        : L2-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a, m1, m2;
	double old_a, b;

	while (1 < 2) {

	scanf("%d", &a);

	if (a >= (-99) && a <= (99)) {

	m1 = a % 10;
	m2 = a / 10;

	if ((m1 + m2) > 10)
		while (a < 100) {
			old_a = a;
			b = (1.5 + rand() * (10.7 - 1.5)) / (double)RAND_MAX;
			a += b;
			printf("%lf + %lf = %d\n", old_a, b, a);
			} else printf("неверное значение а\n");
		} fflush(stdout);
	}
	return EXIT_SUCCESS;
}
