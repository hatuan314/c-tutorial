// tinh n giai thua bai 1//
#include<stdio.h>

int fact(int *p) {
    int i;
    int gt = 1;
    for (i = 2; i <= *p; i++) {
        gt *= i;
    }
    return gt;
}

int main() {
    int n;
    int *p;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    p = &n;
    printf("Ket qua tinh giai thua la: %d\n", fact(p));
    return 0;
}
