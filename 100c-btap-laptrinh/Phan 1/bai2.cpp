#include<stdio.h>

int main(){
	int a, b, sum;
	printf("Nhap gia tri a = ");
	scanf("%d", &a);
	printf("Nhap gia tri b = ");
	scanf("%d", &b);
	
	sum = a + b;
	
	printf("Tong cua hai gia tri %d + %d = %d", a, b, sum);
}