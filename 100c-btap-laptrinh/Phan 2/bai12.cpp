#include<stdio.h>

long long giai_thua(int n){
	
	long long gthua = 1;
	for(int i = 1; i <= n; i++)
	gthua *= i;
	return gthua;
}

int main(){
	int n;
	printf("Nhap vao so nguyen duong: n = ");
	scanf("%d", &n);
	
	int kq = giai_thua(n);
	
	printf("Giai thua cua %d = %d", n, giai_thua(n));
}

//int main(){
//	int n, i;
//	long long giai_thua = 1;
//	
//	printf("Nhap vao so nguyen duong: n = ");
//	scanf("%d", &n);
//	
//	if(n < 0){
//		printf("Khong co giai thua");
//	} else{
//		for(i = 1; i <= n; i++){
//			giai_thua *=  i;
//		}
//		printf("Giai thua cua %d = %d", n, giai_thua);
//	}
//}