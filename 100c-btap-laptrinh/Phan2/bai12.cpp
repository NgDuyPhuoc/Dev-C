#include<stdio.h>

int main(){
	int n, i, gthua = 1;
	
	printf("Nhap so nguyen duong bat ki: n = ");
	scanf("%d", &n);
	
	for(i = 2; i <= n; i++){
		gthua = gthua * i;
	}
	printf("Giai thua cua %d = %d", n, gthua);
}