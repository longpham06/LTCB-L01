#include <stdio.h>

int TinhSoNgay(int thang, int nam) {
    if (thang < 1 || thang > 12) return 0;

    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) ? 29 : 28;
        default:
            return 0;
    }
}

int main() {
    int thang, nam;
    printf("Nhap thang va nam: ");
    scanf("%d %d", &thang, &nam);

    int SoNgay = TinhSoNgay(thang, nam);
    if (SoNgay == 0) {
        printf("Thang không hop le\n");
    } else {
        printf("Thang %d nam %d co %d ngay\n", thang, nam, SoNgay);
    }

    return 0;
}

