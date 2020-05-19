#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void test1() {
	 // 4 구간 
	// a < 5, 5< a <= 50, 50 < a < 100, a>=100
	int a = 70;

	if (a < 5) {
		printf("a < 5 경우 입니다.\n");
	}
	else if (a <= 50) {
		printf("a>= 5 && a <= 50 경우 입니다.\n");
	}
	else if (a < 100) {
		printf(" a > 50 && a < 100 경우 입니다. \n");
	}
	else {
		printf(" a>= 100 경우 입니다. \n");
	}
}

void test2() {
	int a = -1, b = 1; 

	if (a > 0)  // 괄호지움
		if (b > 0) {
			printf(" a > 0 && b > 0\n");
		}
	// 괄호 지움 
	else {
		printf(" a<= 0\n");
	}
}

void test3() {
	char c = 'A'; //아스키 코드 값이 저장 - 정수 
	switch (c)
	{
	case 'A': 
		printf(" A 입니다. \n");
		break;
	case 'B':
		printf(" B 입니다. \n");
		break;
	case 'C':
		printf(" C 입니다. \n");
		break;
	default:
		printf("default 입니다.\n");
		break;
	}
}

void test4() {
	int index = 100; 
	while (1) {
		if (index % 2 == 1) {
			printf("%5d", index);

		}
		index++;
		if (index > 200) {
			break;
		}
	}
}

void test5() {
	int index = 100; 
	for (index = 100; index <= 200; index++) {
		if (index % 2 == 1){
			printf("%5d", index);
		}
	}
}

// 구구단 출력 
// 2단부터 출력
void test6() {
	int i, j;
	int count = 0;

	for (i = 2; i <= 9; i++) { //단을 표시 
		printf("\n--%2d단--\n", i);
		for (j = 1; j <= 9; j++) {
			count++;
			if (j > 5) { // 5보다 클 경우 break
				continue;
			}
			printf("%3d * %3d = %5d\n", i, j, i * j);
		}
	}
	printf("count %d", count);
}

//소수 출력하기
void test7() {
	// 2~ 100 숫자 중에서 소수 인 경우 출력... 
	// 소수 : 1과 자신을 제외한 다른 숫자로는 나누어 떨어지지 않는 수

	int i, j, prime, count = 0;
	for (i = 2; i <= 100; i++) {
		// 대상 숫자 : i;
		prime = 1;
		// 1, i 제외 : 2 ~ i-1 숫자 대상으로 나누어 본다. 
		for (j = 2; j <= i - 1; j++) {

			if (i % j == 0) {
				//소수에서 제외
				prime = 0; 
				break;
			}
		}
		if (prime == 1) {
			// 해당 숫자 : i is 소수에 해당...
			printf("%5d", i);
			count++;
			if (count  % 5 == 0) {
				putchar('\n');
			}
		}
	}
}

void printMatrix(int a[][3]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%4d", a[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
}
//매트릭스 계산함수
void test8() {
	int i, j, k, temp;
	int mA[3][3] = { 1,2,3, 4,5,6, 7,8,9 };
	int mB[3][3] = { 1,2,3, 4,5,6, 7,8,9 };
	int mC[3][3] = { 0,};

	// mC[i][j] = mA[i][k] * mB[k][j]

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			temp = 0;
			for (k = 0; k < 3; k++) {
				temp += mA[i][k] * mB[k][j];
			}
			mC[i][j] = temp;
		}
	}
	printf("\n--mA--\n");
	printMatrix(mA);
	printf("\n--mB--\n");
	printMatrix(mB);
	printf("\n--mC--\n");
	printMatrix(mC);

}
int main(void)
{
	test8();
}