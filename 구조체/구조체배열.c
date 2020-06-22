#include <stdio.h>
#include <math.h>
#define MAX_NUM 3 
#define PI 3.141592
double getArea(struct circle* atr, int count);
struct circle {
	int x; 
	int y;
	int r; 
};
int main(void) {
	struct circle aCircle[MAX_NUM] = { {1,2,3},{4,5,6},{7,8,9} };
	
	double sum = 0.0;

	sum = getArea(aCircle, MAX_NUM);
	printf("sum : %lf\n", sum);

	return 0;
}
double getArea(struct circle* aPtr, int count) {
	double sum = 0.0;
	int index;
	for (index = 0; index < count; index++) {
		sum += (pow((double)(aPtr + index)->r, 2.0) * PI);
	}
	return sum;
}



