// put2.c
#include <stdio.h>

#define MESSAGE "Hello, World" // �����ݷ� ����.

int main(void) {
	// 1.puts()
	puts("Using puts():");
	puts(MESSAGE); // puts() ����� �� �ڵ����� �� �ٲ� ����.
	
	// 2. putchar()
	puts("\nUsing putchar():");
	for (int i = 0; MESSAGE[i] != '\0'; i++) {
		putchar(MESSAGE[i]);
	}
	putchar('\n'); // putchar() ����� �� �� �ٲ� ����.
	
	// 3.putc()
	puts("\nUsing putc():");
	for (int i = 0; MESSAGE[i] != '\0'; i++) {
		putc(MESSAGE[i], stdout);
	}
	putc('\n', stdout); // putc() ����� �� �� �ٲ� ����.

	return 0;
}