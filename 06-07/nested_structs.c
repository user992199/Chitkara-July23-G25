#include<stdio.h>
struct course{
	char cn;
	int cc;
	// struct student s1, s2;
};

typedef struct student{
	int rn;
	float s;
	struct course c1, c2;
	struct group{
		int gc;
		char gn;
	};
	struct group g1, g2;
}stu;
int main(){
	stu s1;
	s1.c1.cc = 13;
	printf("%d => %c\n", s1.c1.cc, s1.c1.cn);
	printf("%d => %c\n", s1.c2.cc, s1.c2.cn);
	return 0;
}