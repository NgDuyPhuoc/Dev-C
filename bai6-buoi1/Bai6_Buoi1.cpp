#include<stdio.h>
#include<conio.h>

int main() {
	float tong, tich, a, b, c;
	int n, tam1, tam2;
	scanf("%d", &n);
	a = n / 100;
	tam1 = n / 10;
	b = tam1 %10;
	tam2 = n % 100;
	c = tam2 % 10;
	tong = a+b+c;
	tich = a*b*c;
	printf("Tong cua n = %0.f\n", tong);
	printf("Tich cua n = %0.f", tich);
}