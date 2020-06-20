#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char data[2][20] = { 0 };

	printf("문자열을 2개 입력하세요");
	for (int i = 0; i < 2; i++) {
		scanf("%s", data[i]);
	}
	printf(">입력된 문자열을 출력합니다.\n");
	for (int i = 0; i < 2; i++) {
		printf("%s\n", data[i]);
	}

	return 0; 
}