#include<stdio.h>
// syntax
// #define macro_name value
#define pi 3.14 + 1
#define print_hello printf("hello\n")
#define print(x)	printf("%f\n", x)
#define square(a) a*a
int main(){
	// 19 = 20; // this will give an error
	int r = 7;
	// float pi = 3.14 + 1;
	float ans = 2 * pi * r;
	printf("%f\n", ans);
	print_hello;
	print(ans);
	print(square(ans));
	return 0;
}