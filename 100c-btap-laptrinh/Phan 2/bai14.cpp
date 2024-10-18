#include<stdio.h>

int tongSN(int n){
	int sum = 0, tam;
	while(n != 0){
		tam = n % 10;
		sum += tam;
		n = n / 10;
	}
	return sum;
}

	int main(){
	int n;
	
	do{
		printf("Nhap so nguyen duong: n = ");
		scanf("%d", &n);
		if(n <= 0){
			printf("Vui long nhap lai (n > 0)\n");
		}
	}while(n <= 0);
	
	
	printf("Tong cac chu so %d = %d", n, tongSN(n));
}