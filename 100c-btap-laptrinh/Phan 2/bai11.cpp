#include<stdio.h>

int main(){
	int a, b, c;
	
	printf("Nhap so a = ");
	scanf("%d", &a);
	printf("Nhap so b = ");
	scanf("%d", &b);
	printf("Nhap so c = ");
	scanf("%d", &c);
	
	if(a > b && a > c){
		printf("a = %d la so lon nhat", a);
	} else if (b > a && b > c){
		printf("b = %d la so lon nhat", b);
	} else{
		printf("c = %d la so lon nhat", c);
	}
}