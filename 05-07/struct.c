#include<stdio.h>
struct student{
	int roll_number;
	float score;
};
int main(){
	struct student st1, st2;
	st1.score = 50.5;
	st1.roll_number = 13;
	printf("%d %f\n", st1.roll_number, st1.score);
	printf("%d %f\n", st2.roll_number, st2.score);
	return 0;
}