#include<stdio.h>
// #define pi 3.14
// #ifdef macro_name
#ifndef pi 
	#define print(x) printf("%f\n", x)
#else
	#define print(x) printf("%f\n", x+3)
#endif
#define pi 8.15
int main(){
	print(pi);
	return 0;
}