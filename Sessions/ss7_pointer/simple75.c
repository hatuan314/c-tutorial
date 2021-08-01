/*
 * Bai 2: Viết hàm sắp xếp tăng dần, giảm dần của một dãy số cho trước.
 */

#include<stdio.h>

void inputArray(int *a, int n) {
    printf("Nhap phan tu\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", a);
        *(a++);
    }
}

void tangdan(int a[], int n) {
    printf("\nday tang dan\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void giamdan(int a[], int n) {
    printf("\nday giam dan\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int tp = a[i];
                a[i] = a[j];
                a[j] = tp;
            }
        }
    }
}

void xuat(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", a);
        *(a++);
    }
}

int main() {
    int n, a[100];
    printf("Nhap so luong phan tu\n");
    scanf("%d", &n);
    inputArray(a, n);
    tangdan(a, n);
    xuat(a, n);

    giamdan(a, n);
    xuat(a, n);
    return 0;
}
