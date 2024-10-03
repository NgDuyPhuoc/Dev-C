#include<stdio.h>

int main(){
	int n, i, nguyen_to = 1, count = 0;
	
	printf("Nhap so nguyen to: n = ");
	scanf("%d", &n);
	
	if(n <= 1){
		printf("%d khong phai la so nguyen to", n);
		return 0;
}

	for(i = 1; i <= n; i++){
		if(n % i == 0){
			count++;
		}
	}
	if(count <= 2){
		printf("%d la so nguyen to", n);
	} else if(count > 2){
		printf("%d khong la so nguyen to", n);
	}
	printf("\ncount = %d", count);
}