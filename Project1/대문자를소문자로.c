#define _CRT_SECURE_NO_WARNINGS
#define MAX_BUF_SZIE 7
#include <stdio.h>
void test1(){
	char c;
	int index = 1;
	while (index) {
		printf(">알파벳 문자를 입력하세요");
		scanf(" %c", &c);
		if (c >= 'A' && c <= 'Z') {
			c = c + ('a' - 'A');
			printf("-대문자 입니다 -> 소문자(%c). \n", c);

		}
		else if (c >= 'a' && c <= 'z') {
			printf("- 소문자 입니다. \n");

		}
		else {
			printf("-알파벳이 아닙니다.\n");

		}
		index = 0;

	}
} //대소문자
void test2() {
	char c; 
	while (1) {
		scanf("%c", &c);
		printf("-입력 문자 = A : %d, C: %c \n", c, c);
	}
}
void test3() {
	char c; 
	while (1) {
		scanf("%c", &c);
		printf("입력문자 = A : %d, C : %c \n", c, c);
	}
}
void test4() {
	int data, data1; 
	char c; 

	scanf("%d", &data);
	printf(">data = %d\n", data);
	
	getchar();
	scanf("%c", &c);
	printf("> %d - %c \n", c, c);
	
	scanf("%d", &data1);
	printf(" > data1 = %d \n", data1);
}

//getchar()을 이용한 문자열 입력
void my_gets(char* str, int size) {
	char ch; 
	int i = 0; 
	ch = getchar();
	while ((ch != '\n') && (i < size - 1)) {
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';
}

int main(void) {

	char str[MAX_BUF_SZIE];
	my_gets(str, sizeof(str));
	printf("입력된 문자열 : %s\n", str);
	
	return 0; 
}
