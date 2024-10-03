#include<stdio.h>
#include<conio.h>

int main()
{
	int n, i;
	int tong = 0;
	do
	{
		printf("Nhap 1 so nguyen duong n=");
		scanf("%d", &n);
	} while(n<=0);
	
//	printf("\nCac so chan tu 2 den %d la:", n);
//	for(i=0; i<=n; i++)
//	{
//		if(i%2==0){
//			printf("%3d", i);	
//		}
//	}
	 
	for(i=2; i <= n; i = i+2){

		tong = tong + i;
}
	printf("Tong cac so chan tu 1 den %d = %d", n, tong);
	return 0;
}

