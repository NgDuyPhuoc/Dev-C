#include<stdio.h>

int main()
{
    int n, i, s = 1;
	float x, luy_thua = 1;
	
    do
    {
        printf("Nhap 1 so nguyen duong n = ");
        scanf("%d", &n);
        
        if (n <= 0){
        	printf("Nhap n phai la so nguyen duong\n");
		}
    } while(n <= 0);
    
    printf("Nhap 1 so thuc x = ");
    scanf("%f", &x);

    for(i = 0; i < n; i++)
    {
        luy_thua = luy_thua * x;
    }

    printf("\nLuy thua la %.2f", luy_thua);    

    return 0;
}

//Khi nhập n vào thì chương trình sẽ tính tổng các giá trị của n
//Ví dụ: Khi nhập n = 3, chương trình sẽ lấy 1 + 2 + 3 ==> S = 6
