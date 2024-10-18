#include<stdio.h>

int main(){
	int n, sum;
	
	do{
		printf("Nhap so nguyen duong n = ");
		scanf("%d", &n);
		
		if(n <= 0){
			printf("Vui long nhap lai so nguyen n lon hon 0\n");
		}
		
	}while (n <= 0);
	
	sum = (n * (n + 1)) / 2;
	printf ("Tong cac so nguyen duong dau tien cua %d = %d", n, sum);
}