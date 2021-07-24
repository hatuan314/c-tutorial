/*
 * Viết chương trình tìm USCLN, BSCNN của 2 số.
 * Cach 1 :Tim USCLN
 *  - 2 so a,b.
 *  B1: - Neu a < b thi b1 = b - a.
 *      - Neu a > b thi a1 = a - b.
 *      - Neu a = b thi a(hoac b) la USCLN
 *  B2: - Neu a1 < b thi b2 = b - a1
 *      - Neu a1 > b thi a2 = a1 - b
 *      - Neu a1 = b thi a1(hoac b) la USCLN
 * Tim BSCNN
 */

/*
 * a = 5, b = 8
 * a < b (5 < 8) => b1 = b - a = 8 - 5 = 3
 * a > b1 (5 > 3) => a1 = a - b1 = 5 - 3 = 2
 * a1 < b1 (2 < 3) => b2 = b1 - a1 = 3 - 2 = 1;
 * a1 > b2 (2 > 1) => a2 = a1 - b2 = 2 - 1 = 1;
 * a2 == b2 => a2 la USCLN.
 */

//#include <stdio.h>
//
//int main()
//{
//    int a;
//    int b;
//    printf("a = ");
//    scanf("%d", &a);
//    printf("b = ");
//    scanf("%d", &b);
//
//    while (a != b) {
//      if (a > b) {
//          a = a - b;
//          continue;
//      }
//      if (a < b) {
//          b = b - a;
//          continue;
//      }
//    }
//    printf("USCLN = %d", a);
//    return 0;
//}

/*
 * Cach 2: Tim min trong 2 a,b. Sau do chay vong lap tu min den 1 den khi nao gap so
 * chia het cho ca hai so a va b thi dung lai
 */

#include <stdio.h>

int main()
{
    int a;
    int b;
    int min;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    // Tim min
    min = a < b ? a : b;

    // Tim USCLN
    while (min > 0) {
        if (a % min == 0 && b % min == 0) {
            break;
        }
        min--;
    }
    int uscln = min;
    printf("USCLN = %d\n", uscln);

    /*
     * Tim BSCNN
     * BSCNN = (a * b)/USCLN
     */
    printf("BSCNN = %d\n", (a * b)/uscln);
    return 0;
}