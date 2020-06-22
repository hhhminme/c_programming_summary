#include<stdio.h>
enum week {MON=5,TUE,WED,THI,FRI,SAT,SUN};
int main() {
	enum week day;
	day = SAT;  //day =5; 
	printf("%d", day);
	return 0;
}