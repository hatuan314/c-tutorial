/*
 * Nhap vao 1 so nguyen duong n. Sau do thuc hien dem tu 0 den n. Neu nguoi dung nhap mot so am thi cho nhap lai
 *
 * De nguoi dung co the nhap lai thi ta se dua phan nhap so nguyen vao vong lap while
 * (De thuc hien duoc vong lap thi gia tri flag phai thoa man dieu kien flag == 0.
 * Tuy nhien neu khong thay doi flag thi vong lap while tro thanh vong lap vo han.
 * De thoai khoi vong lap, hoac bien vong lap while tro thanh vong lap huu han thi
 * can phai thay doi gia tri cua flag)
 *
 * Boi vi chi khi nguoi dung nhap vao mot so nguyen am thi moi thuc hien vong lap.
 * The nen sau khi nguoi dung nhap vao gia tri n. Ta se kiem tra n co duong hay khong.
 * Neu n la so am thi flag = 0. Neu n la so duong thi flag = 1.
 */

#include <stdio.h>

int main() {
    int n;
    int index;
    int flag = 0;
//    if (n <= 0) {
//        printf("!!!!!!! n nhap vao phai la so nguyen duong\n");
//    }
    while (flag == 0) {
        printf("Nhap vao so nguyen duong n:\t");
        scanf("%d", &n);
        if (n <= 0) {
            printf("!!!!!!! n nhap vao PHAI la so nguyen duong\n");
            flag = 0;
        } else {
            flag = 1;
        }
    }
    for (index = 0; index <= n; index++) {
        printf("%d\n", index);
    }
    return 0;
}