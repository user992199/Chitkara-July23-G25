#include<stdio.h>
#define pi 1.1
#if defined(pi) && !defined(print)
	#define print(x) printf("%f\n", x)
#else
	#define print(x) printf("%f\n", x+1)
#endif
int main(){
	print(pi);
	return 0;
}