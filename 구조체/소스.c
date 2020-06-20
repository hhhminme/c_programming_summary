#include <stdio.h>
#include <stdlib.h>
int main(void) {
	struct point {
		int x; 
		int y;
	}; typedef struct point PointType; 
	struct rect {
		PointType p01; 
		PointType p02;
	}; typedef struct rect rectType;
	
	rectType Rect01 = { {1,2},{7,8} };
	//문제 rect의 면적을 구하시오
	//p02-p01 
	int width, heigh, result;
	width = Rect01.p02.x - Rect01.p01.x;
	heigh = Rect01.p02.y - Rect01.p01.y;
	//구조체 변수의 맴버가 또 구조체니깐 점을 두번 찍어야한다. 
	result = width * heigh;
	printf("result = %d\n", result);

	return 0;
}