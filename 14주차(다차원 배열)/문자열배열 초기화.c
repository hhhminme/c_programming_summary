//2차원 문자 배열 초기화 
//문자 단위 초기화와 스트링 단위 초기화 비교 

#include <stdio.h>
int main(void)
{
	char data1[2][5] = { {'a','b','c','\0'},{'A','B','\0'} };
	char data2[][5] = { "abc","AB" };
	

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("data 1 : %d\t", data1[i][j]);
		}
		putchar('\n');
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("data 2 : %d\t", data2[i][j]);
		}
		putchar('\n');

	}

	char data[2][20] = { "ABCDEFG","abcdefg" };
	char* ptr1[2];
	printf("ptr1 before size : %d\n", sizeof(ptr1));
	for (int i = 0; i < 2; i++) {
		ptr1[i] = data[i];
	}
	printf("ptr1 after size : %d\n", sizeof(ptr1));
	char* ptr2[2] = { "ABCDEFG","abcdefg" };
	printf("ptr2 size : %d\n", sizeof(ptr2));

	return 0;
}