#include<stdio.h>
#include<math.h>

int kiemTraSoNguyenTo(int x){
	if(x <= 1)
	return 0;
	for(int j = 2; j <= sqrt(x); j++){
		if(x % j == 0)
			return 0;
	}
	return 1;
}

int main(){
	int n;
	
	do{
		printf("Nhap vao mot so nguyen to: n = ");
		scanf("%d", &n);
		
		if(n<1){
			printf("Vui long nhap lai! (n >= 1)\n");
		}
	}while(n < 1);
	
	for(int i = 2; i <= n; i++){
//		int kt = kiemTraSoNguyenTo(i);
		if(kiemTraSoNguyenTo(i)){
			printf("%d ", i);
		}
	}
}
