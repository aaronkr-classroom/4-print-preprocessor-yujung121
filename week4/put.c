// put.c0
#include <stdio.h>

int main(void) {
	char* name = "Yujung";

	// �������
	putc(name, stdout);
	putchar(10);
	putchar(name); // putc(name, stdout);

	putchar(10);
	putchar(65);
	putchar(97);
	putchar(10);

	// ���ڿ� ���
	puts(name);
	puts("65");
	puts("97");
	puts("10");
	
	printf(name);



	return 0;
}