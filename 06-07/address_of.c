#include<stdio.h>
typedef struct student{
	int rn;
	float s;
}stu;
int main(){
	int a = 10;
	printf("%d\n", &a);
	stu s1;
	printf("%d\n", &s1);
	return 0;
}