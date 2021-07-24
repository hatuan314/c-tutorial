#include <stdio.h>

//#define pi 3.14     // define dùng để định nghĩa hằng số pi

float pi = 3.14;    // Biến toàn cục

void funcB(int radius) {
    pi;
}

void funcA() {
    int a;
}

int main() {

    printf("pi = %d\n", pi);
    float radius;   // Biến cục bộ
    printf("Nhap vao ban kinh duong tron:\t");
    scanf("%f", &radius);
    printf("Dien tich hinh tron:\t%.2f\n", 2 * pi * radius);
    funcA();
    return 0;
}

/*
 * Biến toàn cục: Không nằm trong bất kỳ 1 hàm nào và bất kỳ hàm nào cũng có thể gọi nó ra để sử dụng
 * Biến cục bộ: Được khai báo ở trong 1 hàm bất kỳ và chỉ được sử dụng trong hàm đó, những hàm khác không thể sử dụng
 * được.
 */