/*#include <stdio.h>
#define MAX_ARRAY_SIZE 100

int main(void) {
	int array[MAX_ARRAY_SIZE] = { 0 };
	int i;
	int* parray;
	int max; 
	int min; 
	parray = array; // *(parray + i)


	for (i = 0; i < MAX_ARRAY_SIZE; i++) {
		*(parray + i) = i + 1; 
		//parray[i] = i + 1;
		//array[i] = i + 1; 
	}
	for (i = 0; i < MAX_ARRAY_SIZE; i++) {
		printf("%4d", parray[i]);
		if ((i + 1) % 10 == 0) {
			putchar('\n');
		}
	}
	for (i = 0; i < MAX_ARRAY_SIZE; i++) {
		max = *(parray + 0);
		if (max < *(parray + i)) {
			max = *(parray + i);
		}
	}
	for (i = 0; i < MAX_ARRAY_SIZE; i++) {
		min = *(parray + 0);
		if (min > *(parray + i)) {
			min = *(parray + i);
		}
	}
	printf("> max : %d", max);
	printf("> min : %d\n", min);

	return 0;
}
*/