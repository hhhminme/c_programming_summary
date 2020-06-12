#include <stdio.h>
int main(void)
{
	printf("- %s \n","david"); //스트링 그대로 출력
	printf("- %p \n", "david"); //시작주소인 것을 확인
	printf("- %c \n", *"david"); //주소에 있는 글자 하나
	printf("- %c \n", *("david" + 1)); //1은 요소 하나를 의미 1byte를 의미
	printf("- %c \n", "david"[1]);; //위와 같은 표현
	//문자열상수는 별도의 메모리 공간이 저장 되어 있고 
	//시작주소를 의미한다. 

	char* pc;
	pc = "david"; //시작 주소

	putchar('\n');
	printf("- %s \n", pc); //스트링 그대로 출력
	printf("- %p \n", pc); //시작주소인 것을 확인
	printf("- %c \n", *pc); //주소에 있는 글자 하나
	printf("- %c \n", *(pc + 1)); //1은 요소 하나를 의미 1byte를 의미
	printf("- %c \n", pc[1]);; //위와 같은 표현

	//동일하게 표현된다. 

	return 0;
}