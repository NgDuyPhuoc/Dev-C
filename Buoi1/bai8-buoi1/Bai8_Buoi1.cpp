#include <stdio.h>
#include<conio.h>
int main() {
    float diem_toan, diem_ly, diem_hoa, dtb;

    printf("Nhap diem toan: ");
    scanf("%f", &diem_toan);
    printf("Nhap diem ly: ");
    scanf("%f", &diem_ly);
    printf("Nhap diem hoa: ");
    scanf("%f", &diem_hoa);

    dtb = (diem_toan + diem_ly + diem_hoa) / 3;

    if (dtb >= 9) {
        printf("Xep loai: Xuat sac\n");
    } if (dtb >= 8) {
        printf("Xep loai: Gioi\n");
    } if (dtb >= 6.5) {
        printf("Xep loai: Kha\n");
    } if (dtb >= 5) {
        printf("Xep loai: Trung binh\n");
    } if (dtb >= 3.5) {
        printf("Xep loai: Yeu\n");
    } else {
        printf("Xep loai: Kem\n");
    }

    return 0;
}
