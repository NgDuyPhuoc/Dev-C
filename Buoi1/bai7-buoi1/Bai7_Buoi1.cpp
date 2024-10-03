#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b;
	printf("Nhap so nguyen a = ");
	scanf("%d", &a);
	printf("Nhap so nguyen b = ");
	scanf("%d", &b);
	
	if(a==b){
		printf("Ket qua: a = b\n");
	}
	else if(a>b){
		printf("Ket qua: a > b\n");
	}
	else{
		printf("Ket qua: a < b\n");
	}
}