/*
 * Cap phat dong
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int i;
    int *ptr;
    int sum = 0;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));   // Cap phat bo nho dong
    if (ptr == NULL) {
        printf("Error");
        exit(0);
    }

    printf("Nhap vao cac gia tri: ");
    for(i = 0; i < n; i++) {
        scanf("%d", ptr+i);
        sum += *(ptr+i);
    }
    printf("Tong = %d", sum);
    free(ptr);                                  // Giai phong bo nho
    return 0;
}