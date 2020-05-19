
#include <stdio.h>
#define MAX_ARRAY_SIZE 5


int main(void)
{
	char array1[MAX_ARRAY_SIZE] = "ABCD";
	char array2[MAX_ARRAY_SIZE] = { 'A','B','C','D','\0'};

	printf("array1 : %s\n", array1);
	printf("array2 : %s\n", array2);

	return 0;
}
