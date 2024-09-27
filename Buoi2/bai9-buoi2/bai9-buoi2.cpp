#include<stdio.h>

int main(){
	
	int n;
	
	printf("Nhap vao 1 so nguyen to n = ");
	scanf("%d", &n);
	
	if(n<=1){
		printf("\n%d khong phai la so nguyen to", n);
	}
	if(n % 2 == 0){
		printf("\n%d khong phai la so nguyen to", n);
	}
	else{
		printf("\n%d la so nguyen to", n);
	}
}