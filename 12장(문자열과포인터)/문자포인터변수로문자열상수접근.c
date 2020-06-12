#include <stdio.h>
int main(void) {
	char* pc;
	pc = "water melon";
	int index = 0; 

	/*while (*("water melon"+index) != '\0') {
		putchar(*("water melon" + index));
		index++;
	}*/

	while (*pc != '\0') {
		putchar(*pc);
		pc++;
	}

	return 0;
}