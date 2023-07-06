#include<stdio.h>
void f1(int a){
	a = 71;
	printf("%d\n", a);
}
typedef struct student{
	int rn;
	float s;
}stu;
void f2(stu s1, struct student s2){
	printf("%d %f\n", s1.rn, s1.s);
	printf("%d %f\n", s2.rn, s2.s);
}
int main(){
	// int a = 13;
	// f1(a);
	// printf("%d\n", a);
	stu s1 = {14, 45.5};
	stu s2 = {13, 33.8};
	f2(s1, s2);
	return 0;
}