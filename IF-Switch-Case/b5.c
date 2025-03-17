#include <stdio.h>
#include <math.h>

void GiaiPTBacHai(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo nghiem\n");
        } else {
            printf("Phuong trinh có mot nghiem: x = %.2f\n", -c / b);
        }
        return;
    }

    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("Phuong trinh vo nghiem\n");
    } else if (delta == 0) {
        printf("Phuong trinh co nghiem kep: x = %.2f\n", -b / (2 * a));
    } else {
        printf("Phuong trinh co hai nghiem phan biet:\n");
        printf("x1 = %.2f\n", (-b + sqrt(delta)) / (2 * a));
        printf("x2 = %.2f\n", (-b - sqrt(delta)) / (2 * a));
    }
}

int main() {
    double a, b, c;
    printf("Nhap a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    GiaiPTBacHai(a, b, c);
    return 0;
}

