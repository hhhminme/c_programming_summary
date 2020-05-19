#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_AscIIValue(int start, int end);

int main(void) {
	printf("> ASCII °ª \n ");
	print_AscIIValue(1, 150);

	return 0;
}

void print_AscIIValue(int start, int end) {
	int index; 
	for (index = start; index <= end; index++) {
		printf("code = %d char = %c\n", index, index);
	}
}