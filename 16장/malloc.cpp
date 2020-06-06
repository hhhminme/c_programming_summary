#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pInt; //타입은 인티져 포인터
	double* pDouble; 
	pInt = (int *)malloc(sizeof(int));
	if (pInt == NULL) {
		printf(">ERROR malloc\n" );
		exit(1); //종료한다. 1번은 정상정료는 아님 정상은 0
		 
	}
	pDouble = (double*)malloc(sizeof(double));
	//malloc은 void포인터임 강제 형변환 필요

	*pInt = 100; 
	*pDouble = 3.14; 
	printf("- 정수 출력 = %d\n", *pInt);
	printf("- 실수 출력 = %lf\n", *pDouble);

	free(pInt);
	free(pDouble);

	return 0; 
}