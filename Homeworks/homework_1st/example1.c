/*
 * Viết chương trình đổi một số nguyên hệ 10 sang hệ 8.
 */
#include <stdio.h>

int main() {
    int numb;
    printf("Nhap vao mot so nguyen:\t");
    scanf("%d", &numb);
    printf("%d he 8:\t%o", numb, numb);
    return 0;
}