// calc.c 
#include <stdio.h>
#include <math.h> // M_PI는 여기에 있어야 하지만 없으면..
#include "calc.h" // 우리 만든 .h 파일이 include 할 때 
				  // 큰 따옴표 사용

// 함수 정의하기
double sum(double value1, double value2) { /*더하기*/
	return value1 + value2;
}
double sub(double value1, double value2) { /*빼기*/
	return value1 - value2;
}
double mul(double value1, double value2) { /*곱하기*/
	return value1 * value2;
}
double div(double value1, double value2) { /*나누기*/
	if (value2 != 0) return value1 / value2;
	else {
		printf("Error: Divede by 0!");
		return 0;
	}
}
int rem(int value1, int value2) { /*나머지*/
	if (value2 != 0) return value1 % value2;
	else {
		printf("Error: Divide by 0!");
		return 0;
	}
}

// 추가 함수 정의하기
double power(double base, double exponent) { /*제곱*/
	return pow(base, exponent); // pow() 함수?? -> <math.h>
}
double squareRoot(double num) { /*제곱근*/
	if (num >= 0) {
		return sqrt(num); // math.h에서 있는 sqrt() 함수
	}
	else {
		printf("Error: Negative number!");
		return -1;
	}
}
double areaOfCircle(double radius) { /*원넓이*/
	return M_PI * radius * radius; // M_PI 정의해야함
}
double circumferenceOfCircle(double radius) { /*원둘레*/
	return 2 * M_PI * radius;
}