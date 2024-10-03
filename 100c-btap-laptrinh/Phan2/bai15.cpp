#include<stdio.h>

int main() {
	int n, dao_nguoc;
	
	printf("Nhap so nguyen duong: n = ");
	scanf("%d", &n);
	
	printf("\nSo dao nguoc cua %d la: ", n);
	
	while(n != 0){
		int tam = n % 10;
		dao_nguoc = dao_nguoc * 10 + tam;
		n = n / 10;
	}
	printf("%d", dao_nguoc);
}