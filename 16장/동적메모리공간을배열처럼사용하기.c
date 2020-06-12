#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* iPtr;
	int i, sum = 0;
	//포인터변수의 타입 해석
	//포인터 변수가 있어서 주소로 가면 거기에 정수가 있다.

	//int **iPtr; 
	//주소가 있는데 한번가면 주소가 있고 
	//또 한번 가면 정수가 있다.


	iPtr = (int*)malloc(sizeof(int) * 100);
	//calloc(100, sizeof(int)); 
	//파라메타를 2개 받음 알아서 곱해줌

	for (i = 0; i < 100; i++) {
		//*(iPtr + i) = i + 1; 아래랑 똑같다. 
		iPtr[i] = i + 1;
		//괄호 안에 i는 숫자처럼 되는게 아니라
		//1은 정수하나 , 2는 정수 두개 이렇게 생각해야됨\
		
	}//초기화
	for (i = 0; i < 100; i++) {
		printf("%d	", iPtr[i]);
		if (iPtr[i] % 5 == 0) {
			putchar('\n');
		}
	}

	for (i = 0; i < 100; i++) {
		sum += iPtr[i];
	}

	printf("sum : %d", sum);
	free(iPtr);
	return 0;
}
