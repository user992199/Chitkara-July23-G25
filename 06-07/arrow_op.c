#include<stdio.h>
typedef struct student{
	int rn;
	float s;
}stu;
int main(){
	stu s1;
	stu * sptr = &s1;
	sptr -> rn = 13;
	sptr -> s = 14.5;
	printf("%d %d\n", s1.rn, sptr->rn);
	printf("%f %f\n", s1.s, sptr->s);
	return 0;
}