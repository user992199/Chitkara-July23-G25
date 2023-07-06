#include<stdio.h>
typedef struct student{
	int rn;
	float s;
}stu;
int main(){
	int a = 10;
	// syntax
	// datatype * pointer_name;
	int * aptr;
	aptr = &a;
	printf("%d %d\n", &a, aptr);
	stu s1;
	stu * sptr = &s1;
	struct student * sptr2 = &s1;
	// printf("%d %d %d \n", &s1, sptr1, sptr2);
	sptr -> rn = 13;
	sptr -> s = 14.5;
	printf("%d %d\n", s1.rn, sptr->rn);
	printf("%f %f\n", s1.s, sptr->s);
	return 0;
}