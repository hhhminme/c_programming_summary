#define _CRT_SECURE_NO_WANINGS
#include <stdio.h>
int forFact(int n);
int fact(int a);

int main(void) {
	//fact 
	//n! = n*(n-1)
	return 0;
}

int fact(int a) {
	int result = 0;
	if (a == 1) {
		result = 1;
	}
	else {
		result = a * fact(a - 1);
	}

	printf("res = %d\n", result);
	return result;
}

int forFact(int n) {
	// 
	int index;
	int result = 1;
	for (index = n; index > 1; index--) {
		result = result * index; 
	}
	printf(" fact(%d) = %d\n", n, result);
	return result; 
}