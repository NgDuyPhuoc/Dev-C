#include<stdio.h>

int main() {
	
	int n, a, b, c, tam1, tam2;
//123
	do{
		printf("Nhap so nguyen duong n co 3 chu so: n = ");
		scanf("%d", &n);
		
		if(n<=100){
			printf("Vui long nhap lai n\n");
		}
	}while(n<=100);
	
	a = n / 100;
	tam1 = n % 100;
	b = tam1 / 10;
	tam2 = n % 100;
	c = n % 10;
	
//	printf("n = %d\n", n);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	printf("c = %d\n", c);
	
	printf("n dao nguoc = %d%d%d", c, b, a);
}
		