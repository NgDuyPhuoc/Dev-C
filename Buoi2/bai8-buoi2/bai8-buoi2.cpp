#include<stdio.h>

int main(){
	
	int n, i;
	
	do{
		printf("Nhap 1 so nguyen duong n = ");
		scanf("%d", &n);
		
		if(n<=0){
			printf("Nhap lai n phai la so nguyen duong\n");
		}
	}while(n<=0);
	
	printf("Cuu chuong %d:\n", n);
	
	for(i = 1; i <= 10; i++){
		int x = n * i;
		printf("%d x %d = %d\n", n, i, x);
	}
}