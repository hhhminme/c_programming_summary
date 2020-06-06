#include <stdio.h>
int a;
void func1(void);
void func2(int* pCount);
int main(void)
{
	int a; 
	a = 100; 
	int count = 0; 

	func2(&count);
	func2(&count);
	func2(&count);
	
	return 0; 
}

void func1(void) {

}
void func2(int* pCount) {
	(*pCount)++;
	printf("> func2 a = % d \n",*pCount);
}
