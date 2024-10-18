#include<stdio.h>

int tongMang(int n){
	int a[n], i, sum;
	
	for(i = 0; i < n; i++){
		printf("Nhap vao so phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
	for(i = 0; i <= n - 1; i++){
		sum = sum + a[i];
	}
	printf("%d", sum);
	return sum;
}

int main(){
	int n, i, sum;
	
	printf("Nhap vao so phan tu cua mang: n = ");
	scanf("%d", &n);
	
	tongMang(n);
}