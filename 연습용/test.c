#include <stdio.h>
struct point {
	int x; 
	int y;

};
struct point exchange(struct point p) {
	int tmp;
	tmp = p.x;
	p.x = p.y;
	p.y = tmp;
	return p;
};
int main() {
	struct point p01 = { 100,200 };
	struct point* pp01;
	pp01 = &p01;
	printf(">Befor : x = %d, y = %d\n", pp01->x, pp01->y);
	p01 = exchange(*pp01);
	printf(">After : x = %d, y = %d\n", (*pp01).x, (*pp01).y);

	return 0;
}
