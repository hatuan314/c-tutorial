/*
 * Switch-case
 * - Giống với cấu trúc else if
 * -
 */

/*
 * Viết chương trình nhập vào số 1, 2, 3. In ra tương ứng 1, 2, 3 sao.
 */

#include <stdio.h>

int main() {
    int stars;
    printf("Stars:\t");
    scanf("%d", &stars);

    switch (stars) {
        case 1:
            printf("*\n");
            break;
        case 2:
            printf("**\n");
            break;
        case 3:
            printf("***\n");
            break;
        default:
            printf("More stars\n");
            break;
    }
    return 0;
}