#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Nhap vao so a:\t");
    scanf("%d", &a);
    printf("Nhap vao so b: \t");
    scanf("%d", &b);
    printf("Tong cua hai so %d (a) va %d (b) la:\t%d (a+b)\n", a, b, a + b);
    return 0;
}