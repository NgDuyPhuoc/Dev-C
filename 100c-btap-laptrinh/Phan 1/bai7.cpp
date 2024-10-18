#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao mot so bat ki n = ");
	scanf("%d", &n);
	
	if(n % 2 == 0){
		printf("%d la so chan", n);
	} else{
		printf("%d la so le", n);
	}
}