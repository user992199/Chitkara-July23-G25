#include<stdio.h>
void update(int arr[], int n){
	for(int i = 0; i < n; i++){
		arr[i] += 10;
	}
}
typedef struct array{
	int arr[10];
}arr;
void print_struct(arr a1, int n){
	for(int i = 0; i < n; i++){
		printf("%d ", a1.arr[i]);
	}printf("\n");
}
void update_struct(arr a1, int n){
	for(int i = 0; i < n; i++){
		a1.arr[i] += 10;
	}
	print_struct(a1, n);
}
int main(){
	// int arr[] = {1, 2, 3, 4, 5};
	// int n = sizeof(arr)/sizeof(arr[0]);
	// update(arr, n);
	// for(int i = 0; i < n; i++){
	// 	printf("%d ", arr[i]);
	// }
	arr a1;
	int n = sizeof(a1.arr)/sizeof(a1.arr[0]);
	for(int i = 0; i < n; i++){
		a1.arr[i] = i+10;
	}
	print_struct(a1, n);
	update_struct(a1, n);
	print_struct(a1, n);
	return 0;
}