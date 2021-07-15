/*
 * If lồng
 */

/*
 * Viết chương trình nhập vào 2 số nguyên a, b. So sánh 2 số a,b.
 */

#include <stdio.h>

int main() {
    int numbA;
    int numbB;

    printf("Nhap vao a:\t");
    scanf("%d", &numbA);
    printf("Nhap vao b:\t");
    scanf("%d", &numbB);

    if (numbA >= numbB) {
        if (numbA > numbB) {
            printf("%d lon hon %d\n", numbA, numbB);
        }
        else {
            printf("%d bang %d\n", numbA, numbB);
        }
    } else {
        printf("%d nho hon %d\n", numbA, numbB);
    }

    return 0;
}
