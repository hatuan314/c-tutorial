#include <stdio.h>

#define pi 3.14     // define dùng để định nghĩa hằng số pi

int main() {
    float radius;
    printf("Nhap vao ban kinh duong tron:\t");
    scanf("%f", &radius);
    printf("Dien tich hinh tron:\t%.2f\n", 2 * pi * radius);
    return 0;
}