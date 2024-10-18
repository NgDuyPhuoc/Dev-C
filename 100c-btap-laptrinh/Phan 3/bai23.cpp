#include<stdio.h>

int timGiaTri(int n){
	int Arr[n], i;
	
	for(i = 0; i < n; i++){
		printf("\nNhap vao so phan tu thu %d: ", i);
		scanf("%d", &Arr[i]);
	}
	int max = Arr[0];
	int min = Arr[0];
	
	for(i = 0; i < n; i++){
		if(Arr[i] > max){
			max = Arr[i];
		} else if(Arr[i] < min){
			min = Arr[i];
		}
	}
	printf("\nGia tri lon nhat trong mang: %d", max);
	
	printf("\nGia tri be nhat trong mang: %d", min);
	
	return max, min;
}

int main(){
	int n, i;
	
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	
	timGiaTri(n);
//	int arr[n];
//	
//	for(i = 0; i < n; i++){
//		printf("\nNhap vao so phan tu thu %d: ", i);
//		scanf("%d", &arr[i]);
//	}
//	
//	int max = arr[0];
//	int min = arr[0];
//	
//	for(i = 0; i < n; i++){
//		if(arr[i] > max){
//			max = arr[i];
//		} else if(arr[i] < min){
//			min = arr[i];
//		}
//	}
//	printf("\nGia tri lon nhat trong mang: %d", max);
//	printf("\nGia tri nho nhat trong mang: %d", min);
}