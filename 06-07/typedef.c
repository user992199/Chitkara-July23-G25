#include<stdio.h>
typedef struct student{
	int rn;
	float s;
}stu;
int main(){
	struct student s1;
	stu s2;
	printf("%d %f\n", s1.rn, s1.s);
	printf("%d %f\n", s2.rn, s2.s);
	return 0;
}