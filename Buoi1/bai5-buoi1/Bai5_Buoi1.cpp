#include<stdio.h>
#include<math.h>

int main(){
	int n;
	double x, ket_qua;
	
	printf("Nhap mot so nguyen duong x:");
	scanf("%d", &x);
	
	printf("Nhap mot so nguyen duong n:");
	scanf("%d", &n);
	
	ket_qua = pow((x * x + 1), n);
	
	printf("Ket qua cua phep tinh (x2+1)n la: %d", ket_qua);
}