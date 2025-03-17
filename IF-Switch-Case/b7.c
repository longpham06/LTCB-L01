#include <stdio.h>

void XepLoai(double dtb) {
    if (dtb < 5) {
        printf("Yeu\n");
    } else if (dtb < 7) {
        printf("Trung bình\n");
    } else if (dtb < 8) {
        printf("Kha\n");
    } else if (dtb < 9) {
        printf("Gioi\n");
    } else {
        printf("Xuat sac\n");
    }
}

int main() {
    double dtb;
    printf("Nhap diem trung bình: ");
    scanf("%lf", &dtb);
    XepLoai(dtb);
    return 0;
}

