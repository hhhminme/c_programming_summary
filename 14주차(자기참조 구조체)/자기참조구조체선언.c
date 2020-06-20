#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592
void exchange(struct point* p);

struct point {
	int x;
	int y; 
	int r;
	struct point* next;
};
typedef struct point ptrType;
void printList(ptrType* ptr);
void getArea(ptrType* ptr);

int main(void)
{
	ptrType a = { 1,2,3,NULL }, 
		b = { 3,4,4,NULL },
		c = {5,6,5,NULL},
		*ptr;
	//연결 리스트니깐 연결 시켜야함 
	a.next = &b; 
	b.next = &c;
	ptr = &a; 

	printList(ptr);
	//문제 따라가면서 넓이를 출력하는 함수 
	//getArea(ptr) 
	//리스트를 따라가면서 면적을 구하고, 면적을 다 합해서 출력
	getArea(ptr);
	return 0; 
}

//linked list 된 구조체를 따라가면서 출력하는 함수
void printList(ptrType* ptr) { 
	while (ptr!= NULL) {
		printf(">circle = (x:%d,y:%d,r:%d)\n",
			ptr->x, ptr->y, ptr->r);
		ptr = ptr->next; 
		//처음 a의 주소 100이 b의 주소 200을 가리킴
		//(ptr != NULL)이 될때까지 반복 
	}
}

void getArea(ptrType* ptr) {
	double area = 0.0;
	while (ptr != NULL) {
		//원의 면적은 pi*r^2
		area += (pow((double)ptr->r, 2.0) * PI);
		ptr = ptr->next;
	}
		printf("%lf\n", area);
}