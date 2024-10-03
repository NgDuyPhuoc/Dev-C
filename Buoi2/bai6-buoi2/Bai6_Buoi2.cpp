#include<stdio.h>
#include<conio.h>

int main(){


	int n, i;
	
	do{
	
		printf("Nhap 1 so nguyen duong n=");
		scanf("%d", &n);
	} while(n<=0);
	
//	printf("\nCac so chan tu 0 den %d la:", n);
	
	if(n % 2 != 0){
		printf("%d Khong phai la so chan", n);
	} else{
		for(i=2; i<=n; i = i + 2){
			printf("Cac so chan tu 0 den %d la: %d\n", n, i);
		}
	}
	 return 0;                           
}