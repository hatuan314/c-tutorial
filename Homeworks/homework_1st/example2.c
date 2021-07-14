/*
 * Viết chương trình đổi một số nguyên (int) sang dạng ký tự (char)
 */

#include <stdio.h>

int main() {
    int numb;
    printf("Nhap vao mot so nguyen:\t");
    scanf("%d", &numb);
    /*
     * Việc chuyển đổi 1 số nguyên dương sang dạng ký tự dựa theo bảng mã ASCII
     */
    printf("So nguyen %d co dang ky tu la:\t%c", numb, numb);
    return 0;
}