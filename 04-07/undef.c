#include<stdio.h>
#define pi 3.14
#ifdef pi
	#undef pi
#else 
	#define pi 4.56
#endif
#define pi 1.1
int main(){
	printf("%f\n",pi);
	return 0;
}