#include<stdio.h>
#define to_string(x) #x
#define print(x) printf(x "\n")
int main(){
	int a = 10+5;
	print(to_string(return));
	print(to_string(a));
	print(to_string(10+2));
	print(to_string((10+2)));
	print(to_string(3.14));
	return 0;
}