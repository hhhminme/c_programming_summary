#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp;
	FILE* fp2;

	char c; 
	fp = fopen("c:\\data.txt", "r");
	fp2 = fopen("c:\\data2.txt", "w");
	while (1) {
		c = fgetc(fp);
		if (c == EOF) {
			break;
		}
		else {
			fputc(c, stdout);
			fputc(c, fp2);
		}
	}
	printf("\n");
	fclose(fp);
	fclose(fp2);

	return 0;
}