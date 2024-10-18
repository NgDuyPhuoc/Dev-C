#include<stdio.h>

int kiemTraSoNTo(int n){
	int count = 0;
	for(int i = 1; i <= n; i++){
		if(n % i == 0)
			count++;
	}
	if(count == 2){
		printf("%d La so nguyen to\n", n);
	}else{
		printf("%d Khong phai la so nguyen to\n", n);
	}
	return count;
}

int main(){
	int n;
	
	printf("Nhap so nguyen to: n = ");
	scanf("%d", &n);
	
	kiemTraSoNTo(n);
}