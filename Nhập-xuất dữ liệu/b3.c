//Nhap 2 so nguyen và thuc hien cac phep tinh
#include <stdio.h>

int main() {
    int a, b;
    
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    printf("Tong: %d + %d = %d\n", a, b, a + b);
    printf("Hieu: %d - %d = %d\n", a, b, a - b);
    printf("Tich: %d * %d = %d\n", a, b, a * b);
    
    if (b != 0) {
        printf("Thuong: %d / %d = %.2f\n", a, b, (float)a / b);
    } else {
        printf("Khong the chia cho 0!\n");
    }

    return 0;
}

