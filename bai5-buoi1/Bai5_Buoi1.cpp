#include<stdio.h>
#include<conio.h>

int main(){
	int n, x;
	
	printf("Nhap mot so nguyen duong x:");
	scanf("%d", &x);
	
	printf("Nhap mot so nguyen duong n:");
	scanf("%d", &n);
	
	int ket_qua = (x*2+1)*n;
	
	printf("Ket qua cua phep tinh (x2+1)n la: %d", ket_qua);
}