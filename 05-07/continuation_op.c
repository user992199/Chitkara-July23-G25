#include<stdio.h>
// #define print(x, y, z) \
// printf("%f, %f, %f", x, y, z)
#define print(x) \
printf("%f\n", \
 x)
int main(){
	print(3.14);
	return 0;
}