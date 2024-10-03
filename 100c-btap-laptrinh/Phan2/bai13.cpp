#include<stdio.h>

int main(){
	int n, i, fi;
	
	do{
		printf("Nhap vao mot so nguyen duong: n = ");
		scanf("%d", &n);
		
		if(n<0){
			printf("Vui long nhap lai\n");
		}
	}while(n<0);
	
	for(i = 0; i <= n; i++){
		fi = i + i;
		printf("test Fi: %d\n", fi);
	}
	
}