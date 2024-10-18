#include<stdio.h>

int main(){
	
	int r, chu_vi;
	printf("Nhap ban kinh hinh tron: r = ");
	scanf("%d", &r);
	
	chu_vi = 2 * 3.1416 * r;
	
	printf("Chu vi cua hinh tron co ban kinh r = %d bang %d", r, chu_vi);
}