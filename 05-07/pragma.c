#include<stdio.h>
#pragma startup f1
#pragma exit f2
void f1(){
	printf("f1\n");
}
void f2(){
	printf("f2\n");
}
// gcc does not support pragma
// otherwise the output would have been
// f1
// main
// f2
int main(){
	printf("Main\n");
	return 0;
}