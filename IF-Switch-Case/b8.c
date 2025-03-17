#include <stdio.h>
#include <math.h>

void KiemTraTamGiac(double a, double b, double c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Ba canh khong tao thanh tam giac\n");
        return;
    }

    printf("Ba canh tao thanh mot tam giac: ");
    if (a == b && b == c) {
        printf("Ðeu\n");
    } else if (a == b || b == c || a == c) {
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("Vuong can\n");
        } else {
            printf("Can\n");
        }
    } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        printf("Vuong\n");
    } else {
        printf("Thuong\n");
    }

    double p = (a + b + c) / 2;
    double dientich = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("\nDien tich tam giac: %.2f\n", dientich);
}

int main() {
    double a, b, c;
    printf("Nhap ba canh tam giác: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    KiemTraTamGiac(a, b, c);
    return 0;
}

