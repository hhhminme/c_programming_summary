// 계산기 
// 두 개의 수 입력하고 
// 연산자 넣기 +-*/ 

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {

	int a, b;
	char op;
	printf(" ")
	int result; 
	result = calc(&a, &b, &op);
	printf("num 1 : %5d, num 2 : %5d", a, b);
	printf("%d", result);
}

int calc(int* a, int* b, char op) {
	int result;

	switch (op)
	{
	case '+':
		result = *a + *b;
		return result;
	case '-':
		result = *a - *b;
		return result;
	case '*':
		result = *a * *b;
		return result;
	case '/':
		result = *a / *b;
		return result;
	default:
		break;
	}
}