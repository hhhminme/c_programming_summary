#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void input_array(int* pa, int count);
void print_array(int* pa, int count);
int main(void) {
	int array01[4] = { 0};
	int array02[8] = { 0};
	
	input_array(array01, (sizeof(array01)/sizeof(array01[0])));
	input_array(array02, (sizeof(array02) / sizeof(array02[0])));

	print_array(array02, (sizeof(array01) / sizeof(array01[0])));
	print_array(array02, (sizeof(array02) / sizeof(array02[0])));

	return 0;
}

void input_array(int* pa, int count)
{
	printf("%d 개의 요소를 입력해주세요\n", count);
	for (int i = 0; i < count; i++) {
		scanf("%5d", pa+i);
	}
	putchar('\n');
}

void print_array(int* pa, int count) {
	printf("%d 개 요소 출력 \n", count);
	for (int i = 0; i < count; i++) {
		printf("%5d", *(pa + i));
	}
	putchar('\n');
}