#include<stdio.h>

int main() {
    int a[1000], dem, n;
    printf("nhap so luong ptu\n");
    scanf("%d", &n);
    printf("nhap ptu\n");
    for (int i = 0; i < n; i++) { scanf("%d", &a[i]); }
    for (int i = 0; i < n; i++) { if (a[i] % 2 == 0) { dem++; }}
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("so ptu chia het cho 2 \n%d", dem);
            printf("vi tri cua so la %d\n", a[i], i);
        }
    }
    return 0;
}