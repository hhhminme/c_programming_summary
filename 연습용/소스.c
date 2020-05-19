//피보나치 수열 계산하기 

// fn= fn - 2 + fn -1 ; 
// fn-2 = 1 ; fn-1 = 0; 

#include <stdio.h>
int main(void) {
	//피보나치 수열 반복할 for 문 
	//식 저장할 res
	int i, res = 0; 
	for (i = 0; i <= 5; i++) {
		res += fibo(i);
		printf("%d\n", res);
	}
	return 0; 
}

int fibo(int num) {
	int result;
	if (num == 0) {
		return 0; 
	}
	else if (num == 1){
		return 1; 
	}
	else {
		result = fibo(num - 2) + fibo(num - 1);
	}

	return result; 
}

int forfibo(int num) {
	// 한칸 씩 밀기 
	//fn = fn - 1 + fn - 2;
	//fn + 1 = fn + fn 1 - ; 
	
	int i; 
	for (i = 0; i < num; i++) {

	}

}