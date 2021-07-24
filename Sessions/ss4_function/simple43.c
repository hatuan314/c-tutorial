/*
 * Viết chương trình tìm USCLN, BSCNN của 2 số.
 */

#include <stdio.h>

int constants = 6;
int findUscln(int ia, int ib) {
    int min = ia < ib ? ia : ib;

    // Tim USCLN
    while (min > 0) {
        if (ia % min == 0 && ib % min == 0) {
            break;
        }
        min--;
    }
    int uscln = min;

    return uscln;
}

int findBscnn(int a, int b, int uscln) {
    int bscnn = (a * b) / uscln;
    return bscnn;
}

int main() {
    int a;
    int b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
//    // Tim USCLN
    int uscln = findUscln(a, constants);
    printf("USCLN = %d\n", uscln);
    /*
     * Tim BSCNN
     * BSCNN = (a * b)/USCLN
     */
    int bscnn = findBscnn(a, b, uscln);
    printf("BSCNN = %d\n", bscnn);
    return 0;
}