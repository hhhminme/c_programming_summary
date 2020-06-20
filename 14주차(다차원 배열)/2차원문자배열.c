#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char data[2][5] = { "abcd","ABCD" };
	//data[0]와 data[1]의 주소를 확인하고 싶다. 
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			printf("%10d ",&data[i][j]);
		}
		printf("\n");
	}
	printf("-data[0] = %d\n",data[0]);
	printf("-data[0] = %d\n",data[1]);

	return 0;
}