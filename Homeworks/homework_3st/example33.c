/*
 * Viết hàm kiểm tra số nguyên tố.
 */

#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    int index;
    if (n == 0 || n == 1) {
        return 0;
    }
    if (n == 2) {
     return 1;
    }
    int length = sqrt(n);
    for (index = 2; index <= length; index++) {
        if (n % index == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    int flag = isPrime(n);
    if (flag == 0) {
        printf("%d khong la so nguyen to", n);
    } else if (flag == 1) {
        printf("%d la so nguyen to", n);
    }
    return 0;
}