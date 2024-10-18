#include<stdio.h>

int main(){
	int a, b, UCLN, BCNN;
	do{
		printf("Nhap vao mot so nguyen: a = ");
		scanf("%d", &a);
		printf("Nhap vao mot so nguyen: b = ");
		scanf("%d", &b);
	} while(a <= 0 || b <= 0);
	
	
	if(a == 0 || b == 0){
		UCLN = (a + b);
	} else{
		int bc = a * b;
		
		while(a != b){
			if(a > b){
				a = a - b;
			}else{
				b = b - a;
			}
		}
		printf("BCNN = %d", bc / a);
	}
}