// inc_dec.c
#include <stdio.h>

int main(void) {
	int x = 5;
	int y;
	int post, pre;

	printf("x; %d\n", x);
	y = x; // y�� ���� x�� ���� �����ϱ� 
	printf("y: %d\n", y);

	post = x++;
	printf("x++; %d, x: %d\n", post, x);
	printf("x; %d\n", x);

	pre = ++y;
	printf("++y; %d, y: %d\n", pre, y);
	printf("y: %d\n", y);

	if (x == y) {
		printf("x and y are equal.\n");
	}
	else {
		printf("x and y are NOT equal.\n");
	}

	if (x = 10) {
		printf("x is 10\n");
	}
	printf("x: %d, y:%d\n", x, y);

	return 0;
}