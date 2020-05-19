#include <stdio.h>
void test1() {
	int a = 30, b = 0;

	//short circuilt rule
	if ((50 < a) && (++b < 20)) {
		printf("> 조건내 문장 실행..\n");
	}
	printf("> after b = %d \n", b);

}

void test2() {
	int a = 1, b = 2, c = 3;

	c = a + 1, b + 1;
	printf("> a = %d \n", a);
	printf("> b = %d \n", b);
	printf("> c = %d \n", c);

	c = a++, b++; 
	printf("> a = %d \n", a);
	printf("> b = %d \n", b);
	printf("> c = %d \n", c);
}

void test3() {
	int a = 7; //000111
	int b = 5; //000101 
	int c;
	unsigned d; 

	d = 0xfffffff8; //11111111 111111111 11111111 11111000;
	d = d >> 1; // 01111111 111111111 111111111 11111100;
	printf("> d 0x%x \n", d);
}

void test4() {
	int a = 1, b = 2, c = 3;

	printf("> result = %d \n", a + b - c); // + == - < *, /
	printf("> result = %d \n", a + b * c); // + == - < *, /
	printf("> result = %d \n", (a + b)* c); // + == - < *, /
	printf("> result = %d \n", a + b == c); // 산술 > shift > 관계 > 논리 
	printf("> result = %d \n", a + b << 1); // 011 -> 0110
	printf("> result = %d \n", a > 0 && b < c); 
	printf("> result = %d \n", ++a + b); // 단항 > 이항



}	
int main(void)
{
	test4();

	return 0; 
}