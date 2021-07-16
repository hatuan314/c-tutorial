/*
 * Viết chương trình nhập vào bán kính hình cầu, tính và in ra diện tích, thể tích của hình cầu đó.
 */

#include <stdio.h>
#include <math.h>

#define pi 3.14

int main() {
    float radius;
    printf("Nhap vao ban kinh hinh cau:\t");
    scanf("%f", &radius);

    if (radius <= 0) {
        printf(">>>>>>>> Ko ton tai hinh cau co ban kinh am");
        return 0;
    }
    printf("Dien tich hinh cau:\t%.2f\n", 4 * pi * powf(radius, 2));
    printf("The tich hinh cau:\t%.2f\n", (4/3) * pi * powf(radius, 3));
    return 0;
}