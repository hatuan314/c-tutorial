/*
 * Chuoi (String): Chuoi la mot mang cac phan tu co kieu du lieu char.
 */

#include <stdio.h>
#define MAX 100

int main() {
    char name[MAX]; // String
    printf("Nhap vao ten cua ban: ");
    /*
     * Ham scanf chi nhan vao du lieu den khi gap khoang trang thi ket thuc
     */
    scanf("%s", name);
    printf("Chao ban %s", name);
    return 0;
}