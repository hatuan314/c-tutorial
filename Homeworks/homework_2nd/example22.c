//Bai 2: Viết chương trình tính tổng bậc 3 của N số nguyên đầu tiên.//

// S = 1^3 + 2^3 + 3^3 + ... + n^3
/*
 * Cach giai toi uu
 * - Neu gia tri n nhap vao la 1 thi s luon bang 1
 * - Neu gia tri n > 1, thi ta nen de gia tri khoi tao cua s = 1
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    int s = 1;
    printf("Nhap vao so nguyen n:");
    scanf("%d",&n);
    if (n == 1) {
        printf("Tong bac 3 cua n so nguyen la dau tien la: %d",s);
        return 0;
    } else {
        for (i=2;i<=n;i++) {
            s = s + pow(i, 3);
        }
    }
    printf("Tong bac 3 cua n so nguyen la dau tien la: %d",s);
    return 0;
}