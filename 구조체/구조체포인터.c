#include <stdio.h>
#include <stdlib.h>

void exchange(struct point* p);

struct point {
	int x;
	int y;

};

int main(void)
{
	struct point p01 = { 100,200 };
	struct point* pstr;
	pstr = &p01;

	printf("before> x=%d, y=%d\n", pstr->x, pstr->y); //포인터일때 화살표
	//p01 = exchange(*pstr); //구조체를 넘기는 구조
	exchange(pstr);
	printf("after> x=%d, y=%d\n", pstr->x, pstr->y);



	return 0;
}
void exchange(struct point *p) {
	int tmp;
	tmp = p->x;
	p->x = p->y;
	p->y = tmp;
	//리턴할 필요 없음
	//주소를 넘기면 주소에 의해 자체적으로 바뀌여있음.
}