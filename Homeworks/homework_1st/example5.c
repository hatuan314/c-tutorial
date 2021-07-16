/*
 * Viết chương trình nhập vào một số a bất kỳ và in ra giá trị bình phương (a^2), lập phương (a^3) của a và giá trị a^4.
 */

#include <stdio.h>
#include <math.h>

int main() {
    float numb_a;
    printf("Nhap vao so a:\t");
    scanf("%f", &numb_a);
    printf("%.2f^2 = %.2f\n", numb_a, powf(numb_a, 2));
    printf("%.2f^3 = %.2f\n", numb_a, powf(numb_a, 3));
    printf("%.2f^4 = %.2f\n", numb_a, powf(numb_a, 4));
    return 0;
}