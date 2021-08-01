/*
 * Con tro (Pointer): La mot bien dac biet, am chi mot
 * bien x nao do thong qua dia chi cua bien do (&x)
 * (Hoac) Con tro la mot bien ma gia tri cua no la dia
 * chi cua bien khac
 */

#include <stdio.h>

int main() {
    int x = 5;
    int y = 6;
    int *px;    // Dau * mang y nghia khai bao bien con tro
    int *py;
    printf("x = %d, y = %d\n", x, y);
    px = &x;
    py = &y;
    *px += 10; // Dau * mang y nghia thuc thi (tang bien gia tri bien x them 10 don vi)
    *py += 10;
    printf("x = %d, y = %d\n", x, y);
    return 0;
}