#include<stdio.h>

int dao_nguoc(int n){
	int tam, dao = 0;
	while(n != 0){
		tam = n % 10;	
		dao = dao * 10 + tam;
		n = n / 10;
	}
	return dao;
}

int main() {
	int x;
	printf("Nhap so nguyen duong: x = ");
	scanf("%d", &x);
	
	printf("\nSo dao nguoc cua %d la: ", x);
	
	printf("%d", dao_nguoc(x));
}