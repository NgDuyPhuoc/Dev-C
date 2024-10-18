#include<stdio.h>

long long Fibonacci(int n){
	if(n <= 1)
		return 1;
	else {
		return(Fibonacci (n - 1) + Fibonacci ( n - 2));
	}
}

int main(){
	int n, i, fi;
	
	do{
		printf("Nhap vao mot so nguyen duong: n = ");
		scanf("%d", &n);
		
		if(n<0){
			printf("Vui long nhap lai\n");
		}
	}while(n<0);
	
	printf("Fibonacci cua %d = %d", n, Fibonacci(n));
}