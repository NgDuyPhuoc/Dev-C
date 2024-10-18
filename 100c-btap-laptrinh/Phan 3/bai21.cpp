#include<stdio.h>

int Arr(int n){
	int a[n], i;
	for(i = 0; i < n; i++){
		printf("\nNhap vao phan tu cua mang thu %d: ", i);
		scanf("%d", &a[i]);
	}
	for(i = 0; i <= n - 1; i++){
		printf("\n%d", a[i]);
	}
	return a[i];
}

int main(){
	int n, i;
	
	printf("Nhap vao so pha tu cua mang: ");
	scanf("%d", &n);

	Arr(n);
}