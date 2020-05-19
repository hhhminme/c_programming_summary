#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printf_WideRectangle();

int main(void) {
	//매개변수x , 반환 값 x 
	//정해진 4각형 모양 표시 print... 
	printf_WideRectangle();
	
	
	return 0; 
}
void printf_WideRectangle() {
	int index; 
	putchar(1);
	for (index = 0; index < 20; index++) {
		putchar(6);
	}
	putchar(2);
	putchar('\n');
	putchar(3);
	for (index = 0; index < 20; index++) {
		putchar(6);
	}
	putchar(4);
	
}