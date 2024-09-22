
#include<stdio.h>
#include<conio.h>

int main()
{
	int n, s, i;
	
	do
	{
		printf("Nhap 1 so nguyen duong n=");
		scanf("%d", &n);
	} while(n<=0);
	
	s=0;
	for(i=1; i<=n; i++)
	{	s=s+i; 
	}
	printf("\nS= %d", s);	
		
	return 0;
}

//Khi nhập n vào thì chương trình sẽ tính tổng các giá trị của n
//Ví dụ: Khi nhập n = 3, chương trình sẽ lấy 1 + 2 + 3 ==> S = 6
