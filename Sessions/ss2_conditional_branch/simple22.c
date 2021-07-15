/*
 * Dạng 2: If đủ (If...else...)
 */

/*
 * Viết chương trình nhập vào 2 số nguyên a, b. Tìm và in ra số lớn nhất.
 */

#include <stdio.h>

int main() {
    int numbA;
    int numbB;

    printf("Nhap vao a:\t");
    scanf("%d", &numbA);
    printf("Nhap vao b:\t");
    scanf("%d", &numbB);

    if (numbA > numbB) {
        printf("%d la so lon nhat\n", numbA);
    } else {
        printf("%d la so lon nhat\n", numbB);
    }
    printf(">>>>>>>>> END <<<<<<<<<<");
    return 0;
}