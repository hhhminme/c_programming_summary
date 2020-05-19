#include <stdio.h>
#include <math.h>


#define PI 3.141592
//sin graph 
#define SIN_AMPLITUDE 20.0
#define MAX_AMPLITUDE 40

int main(void)
{
	int i,j, pos;
	double value;
	for (i = 0; i <= (360); i+=20) {
		value = sin(PI * (double)i / 180.0);
		value *= SIN_AMPLITUDE;
		value += SIN_AMPLITUDE; //음수표현이 되지 않는다. 
		pos = (int)value;

		// 공백 출력 
		for (j = 0; j < pos; j++) {
			putchar('#');
		}
		putchar('*');

		// 윗 부분 점신 그리기....
		for (j = 0; j <(MAX_AMPLITUDE - pos); j++) {
			putchar('-');
		}
		putchar('\n');
		//printf("> sin(%d) = %lf\n", i, value);
	}

	return 0;
}