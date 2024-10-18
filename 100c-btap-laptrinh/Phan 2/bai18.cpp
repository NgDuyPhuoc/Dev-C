#include<stdio.h>

int main(){
	int a, b, i, UCLN;
	do{
		printf("Nhap vao so thu nhat: a = ");
		scanf("%d", &a);
		printf("Nhap vao so thu hai b = ");
		scanf("%d", &b);
	} while(a && b < 1);
	
	printf("UCLN cua %d va %d = ", a, b);
	
	if(a == 0 || b == 0){
		UCLN = (a + b);
	}else{
		while(a != b){
			if(a > b){
				a = a - b;
			}else{
				b = b - a;
			}
			UCLN = a;
		}
	}
	printf("%d", UCLN);
}