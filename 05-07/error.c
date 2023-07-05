#include<stdio.h>
#define pi 3.14
#ifndef pi 
	#error Pi is already defined
#endif
int main(){
	printf("%f\n", pi);
	return 0;
}