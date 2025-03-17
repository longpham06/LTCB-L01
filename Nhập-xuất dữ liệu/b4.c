//Tinh the tich va dien tich hinh cau
#include <stdio.h>
#define PI 3.14159  

int main() {
    float r, S, V;

    printf("Nhap ban kinh hinh cau: ");
    scanf("%f", &r);

    S = 4 * PI * r * r;
    V = (4.0 / 3) * PI * r * r * r;

    printf("Dien tich hinh cau: %.2f\n", S);
    printf("The tich hinh cau: %.2f\n", V);

    return 0;
}

