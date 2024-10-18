#include<stdio.h>

int main(){
	int year;
	
	printf("Nhap so nam: ");
	scanf("%d", &year);
	
	if(year % 400 == 0 && year % 4 == 0){
		printf("%d la nham Nhuan", year);
	} else if(year % 100 == 0 && year % 4 != 0){
		printf("%d khong phai la nam Nhuan", year);
	} else {
		printf("%d khong phai la nam Nhuan", year);
	}
}