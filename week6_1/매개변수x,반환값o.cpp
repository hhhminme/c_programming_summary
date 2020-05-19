#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getIntData(void);
int main(void) {
	//매개 변수 x, 반환값 0
	int data; 
	data = getIntData();

	printf("> data = %d\n", data);

	return 0;
}

int getIntData(void) {
	int data; 
	printf(">정수값을 입력하세요 : ");
	scanf("%d", &data);
	return data;
}