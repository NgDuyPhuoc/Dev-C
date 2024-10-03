#include<stdio.h>
 int main(){
 	int dai, rong, chu_vi;
 	printf("Nhap chieu dai: ");
 	scanf("%d", &dai);
 	printf("Nhap chie rong: ");
 	scanf("%d", &rong);
 	
 	chu_vi = (dai + rong) * 2;
 	
 	printf("Chu vi cua hinh chu nhat la: %d", chu_vi);
 }