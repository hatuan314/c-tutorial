//Viết hàm kiểm tra số nguyên tố bai 3//
#include<stdio.h>
#include<math.h>

int checkSnt(int *p) {
    int i;
    int ngt = 1;
    if (*p == 1 || *p == 0)
        printf("Khong la so nguyen to");
    else {
        for (i = 2; i <= sqrt(*p); i++) {
            ngt = 1;
            if (*p % i == 0) {
                ngt = 0;
            }
        }
        if (ngt == 1)
            printf("%d la so nguyen to", *p);
        else
            printf("%d khong phai la so nguyen to", *p);
    }
}

int main() {
    int n;
    int *p;
    printf("Nhap n: ");
    scanf("%d", &n);
    p = &n;
    checkSnt(p);
}
