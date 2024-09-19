#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b;

	printf("Nhap vao so nguyen a:");
	scanf("%d", &a);
	printf("Nhap vao so nguyen b:");
	scanf("%d", &b);
	
	int tong=a+b;
	int hieu=a-b;
	int tich=a*b;
	int thuong=a/b;
	
	printf("Tong cua 2 so nguyen la: %d\n", tong);
	printf("Hieu cua 2 so nguyen la: %d\n", hieu);
	printf("Tich cua 2 so nguyen la: %d\n", tich);
	printf("Thuong cua 2 so nguyen la: %d\n", thuong);	
	return 0;
}
