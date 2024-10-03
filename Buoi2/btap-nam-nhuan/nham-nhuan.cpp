           
		   #include<stdio.h>
#include <string.h>

int main() {
	
	char ten[20];
	int tuoi, nam_sinh, length;
	
	printf("Nhap ten cua ban: ");
	scanf("%s", &ten);
	printf("Nhap tuoi cua ban: ");
	scanf("%d", &tuoi);
	
	nam_sinh = 2024 - tuoi;
	
	length = strlen(ten);
	
	printf("\nTen cua ban la: %s", ten);
	printf("\nTuoi cua ban la: %d", tuoi);
	printf("\nNam sinh cua ban la: %d", nam_sinh);
	printf("\nChieu dai ten cua ban la: %d ki tu", length);

	if(nam_sinh % 4 == 0 && nam_sinh % 100 != 0){
		printf("\n%s Sinh vao nam Nhuan", ten);
	} else {
		printf("\n%s Khong sinh vao nam Nhuan", ten);
	}
}