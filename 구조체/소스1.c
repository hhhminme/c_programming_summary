#include <stdio.h>
#include <stdlib.h>
#include <string>
int main(void) {
	struct subject{
		int math;
		int eng;
		int sci;
	};

	struct student {
		char name[20];
		struct subject grade; 
		int stID;
	};
	typedef struct subject subType;
	typedef struct student stType;

	stType st01 = { "david",{92, 90},2020001 };
	stType st02;
	//st01.name = "DAVID"; 오류발생
	//name은 시작 주소임 
	st02 = st01;
	strcpy(st01.name,"DAVID");
	printf("-name : %s\n", st02.name);
	printf("-id : %d\n", st02.stID);
	printf("-eng : %d\n", st02.grade.eng);
	printf("-math : %d\n", st02.grade.math);
	printf("-sci : %d\n", st02.grade.sci);

	return 0;
}