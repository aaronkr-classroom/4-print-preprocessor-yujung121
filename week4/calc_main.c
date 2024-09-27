// calc_main.c
#include <stdio.h>
#include "calc.h"

// 값 출력
int main(void) {
	double x = 2, y = 0;

	printf("x:%.1f + y:%.1f = %.1f\n", x, y, sum(x, y));  // 더하기 출력
	printf("x:%.1f - y:%.1f = %.1f\n", x, y, sub(x, y));  // 빼기 출력
	printf("x:%.1f * y:%.1f = %.1f\n", x, y, mul(x, y));  // 곱하기 출력
	printf("x:%.1f / y:%.1f = %.1f\n", x, y, div(x, y));  // 나누기 출력
	printf("x:%d %% y:%d = %d\n\n", (int)x, (int)y, rem(x, y));  // 나머지 출력

	// 추가 함수 출력
	printf("x: %.1f ^ y: %.1f = %.1f\n", x, y, power(x, y));
	printf("sqrt of x: %.1f = %.1f\n", x, squareRoot(x));
	printf("area of y: %.1f = %.1f\n", y, areaOfCircle(y));
	printf("circ of y: %.1f = %.1f\n", y, circumferenceOfCircle(y));

	return 0;
}