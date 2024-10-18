#include<stdio.h>

int main(){
	
	int n;
	
	printf("Nhap vao so nguyen duong bat ki: n = ");
	scanf("%d", &n);
	
	if(n > 0){
		printf("%d la so nguyen duong", n);
	} else if(n == 0){
		printf("%d la so bang 0", n);
	} else{
		printf("%d la so nguyen am", n);
	}
}