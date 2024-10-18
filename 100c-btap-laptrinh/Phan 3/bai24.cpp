#include<stdio.h>

int main() {
    int n, i, j;

    // Nhập số phần tử của mảng
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];

    // Nhập các phần tử của mảng
    for (i = 0; i < n; i++) {
        printf("Nhap vao so phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }

    // Sắp xếp mảng theo thứ tự tăng dần (Selection Sort)
    for (i = 0; i < n - 1; i++) {
        int min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        // Hoán đổi phần tử nhỏ nhất với phần tử thứ i
        if (min != i) {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    // In mảng sau khi sắp xếp
    printf("Mang sau khi sap xep tu be den lon: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
