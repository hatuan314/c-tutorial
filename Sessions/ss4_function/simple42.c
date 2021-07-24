#include <stdio.h>

//#define pi 3.14     // define dùng để định nghĩa hằng số pi

float pi = 3.14;    // Biến toàn cục

float circleArea() {
    float radius;   // Biến cục bộ
    printf("Nhap vao ban kinh duong tron:\t");
    scanf("%f", &radius);
    return 2 * pi * radius;
}

int main() {
    printf("Dien tich hinh tron:\t%.2f\n", circleArea());
    return 0;
}