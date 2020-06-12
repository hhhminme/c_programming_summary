#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int* iPtr;
	int i, num;
	int size = 5, count = 0;

	iPtr = (int*)calloc(5, sizeof(int));

	if (iPtr == NULL) {
		printf("> calloc 오류 \n");
		return 1; 
	}
	while (1) {
		printf(">숫자를 입력하세요:");
		scanf("%d", &num);
		if (num < 0) {
			break;
		}
		iPtr[count] = num;
		count++;

		if (count == size) {
			size += 5;
			iPtr = (int*)realloc(iPtr, size); 
			//다 찼으면 size만큼 메모리 확보
			if (iPtr == NULL) {
				printf("> realloc 오류 \n");
				return 1;
			}
			
			printf(">realloc, size : %d\n",
				size * sizeof(int));
		}
	}
	for (i = 0; i < count; i++) {
		printf("%d	",iPtr[i]);
		if (i % 5 == 0) {
			putchar('\n');
		}
	}
	free(iPtr);
	return 0; 
}
