// printf_num.c
#include <stdio.h>

int main(void) {
	int small = 7,
		mid = 147,
		dig = 77441;

	printf("[%5d] [%05d] [%-5d]\n", small, small, small);
	printf("[%5d] [%05d] [%-5d]\n", mid, mid, mid);
	printf("[%5d] [%05d] [%-5d]\n", dig, dig, dig);

	return 0;
}