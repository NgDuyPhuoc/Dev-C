#include<stdio.h>

int main(){
	float c, f;
	
	printf("Nhap nhiet do C: ");
	scanf("%f", &c);
	
	f = (c * 9/5) + 32;
	
	printf("%.1f Do C = %.1f Do F", c, f);
}