#include<stdio.h>
typedef struct student{
	int rn;
	float s;
	struct student * friend;
}stu;
int main(){
	stu s1, s2;
	stu * sptr = &s1;
	s1.friend = &s2;
	s1.friend -> rn = 13;
	s1.friend -> s = 14.5;
	printf("%d %d\n", s2.rn, s1.friend->rn);
	printf("%f %f\n", s2.s, s1.friend->s);
	return 0;
}