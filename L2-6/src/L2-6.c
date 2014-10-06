/*
 ============================================================================
 Name        : L2-6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 30
int main(void) {

	int c = 0, i, m1, m2, arr[N] = {0};

	for (i = 0; i < N; i++) {
		arr[i] = (-1500 + rand() % (1500 - (-1500) + 1));
		printf("%d ", arr[i]);
	}

	printf("\n");

	for (i = 0; i < N; i++) {
		m1 = arr[i] % 10;
		arr[i] /= 10;
		m2 = arr[i] % 10;
		arr[i] *= 10;
		arr[i] += m1;
		if (m1 == m2) {
			printf("%d", arr[i]);
			c++;
			break;
		}
	}
	if (c == 0)
		printf("Заданного числа необнаружено\n");

	return EXIT_SUCCESS;
}
