#include<stdio.h>

int main(){
	int n, sum = 0;
	
	do{
		printf("Nhap so nguyen duong: n = ");
		scanf("%d", &n);
		if(n <= 0){
			printf("Vui long nhap lai (n > 0)\n");
		}
	}while(n <= 0);
	
	while(n > 0){
		sum = sum + n % 10;
		n = n / 10;
	}
	printf("Tong cac chu so la: %d", sum);
}