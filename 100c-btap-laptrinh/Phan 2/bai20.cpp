#include<stdio.h>

int main(){
	//Nhập vào số nguyên n:
	int n;
	printf("Nhap vao so nguyen: n = ");
	scanf("%d", &n);
	
	//Tách các số của n:
	int tach = 0;
	while(n != 0){
		tach = n % 10;
		n = n / 10;
		
		printf("%d", tach);
	}
	
}