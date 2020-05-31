#include <stdio.h>
void plus100(int* pa); // call by reference 
void plus100_noPointer(int a); // call by value 
int main(void) {

	int a = 100; 

	printf("> a = %d, a 林家 = 0x%p\n", a, &a);
	plus100(&a);
	printf("2> a = %d, a 林家 = 0x%p\n", a, &a);
	plus100_noPointer(a);
	printf("3> a = %d, a 林家 = 0x%p\n", a, &a);
	return 0;
}

void plus100(int* pa) {
	*pa += 100; 
	printf("> *pa = %d, pa 林家 = 0x%p\n", *pa, &pa);
}

void plus100_noPointer(int a) {
	a = a + 100;
	printf("puls100_noPointer> a = %d, a 林家 = 0x%p\n", a, &a);
}