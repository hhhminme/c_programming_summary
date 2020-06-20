#include <stdio.h>
#include <stdlib.h>

struct A {
	int x; 
	char y[4];
};

union B {
	int x;
	char y[4];
};

int main(void) {
	struct A s = { 0x01020304, }; //엘리먼트 수보다 초기화를 작게하면 나머지는 0
	union B	u = { .y[1] = 1};
	
	//s.x = 0x01020304;
	//u.x = 0x01020304;

	printf("-strut.x = %x\n", s.x);
	printf("-strut.y = %x %x %x %x\n",
		s.y[0], s.y[1], s.y[2], s.y[3]);

	printf("-union.x = %x\n", u.x);
	printf("-union.y = %x %x %x %x\n",
		u.y[0], u.y[1], u.y[2], u.y[3]);
	//숫자가 낮은 번지에 있는것이 낮은 값으로 들어간다. 
	//낮은 번지라는 의미는 y[0]부터 시작함 번지는 0부터 증가함 
	// 리틀 엔디언



	return 0;
}