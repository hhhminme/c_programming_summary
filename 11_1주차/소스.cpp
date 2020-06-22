#define _CRT_SECURE_NO_WARNINGS
#define MAX_BUF_SIZE 7
#include <stdio.h>
//\n까지 문자 입력하기 
void func1() { 
	char c; 

	while (1) {
		scanf("%c", &c);
		printf("%c", c);
		if (c == '\n') {
			break;
		}
	}
}
//scanf() 반환값이 -1 이 될 때까지 문자 입력하기 
void func2() {
	int ret; 
	char c; 

	while (1) {
		ret = scanf("%c", &c);
		printf("%c", c);
		if (ret == -1) {
			break;
		}
	}
}
//getchar() 을 이용한 문자열 입력 
void my_gets(char* str, int size) {
	char ch;
	int i = 0; 
	ch = getchar();
	/// 입력된 문자열 중에서 공백 없애기 
	while ((ch != '\n')&& (i < size - 1)) {
		if (ch != ' ') {
			str[i] = ch;
			i++;
		}
		ch = getchar();
	}
	str[i] = '\0';
}

int main() {
	char str[MAX_BUF_SIZE];
	my_gets(str, sizeof(str));
	printf("입력한 문자열 : %s\n", str);
	
	return 0; 
}
