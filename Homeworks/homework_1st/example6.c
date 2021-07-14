/*
 * Viết chương trình đọc từ bàn phím 3 số nguyên biểu diễn ngày, tháng, năm và xuất ra màn hình dưới dạng "ngay/thang/nam" (chỉ lấy 2 số cuối của năm).
 */

#include <stdio.h>

int main() {
    int day;
    int month;
    int year;

    printf("Nhap vao ngay:\t");
    scanf("%d", &day);
    printf("Nhap vao thang:\t");
    scanf("%d", &month);
    printf("Nhap vao nam:\t");
    scanf("%d", &year);

    printf("ngay/thang/nam: %d/%d/%d", day, month, year%100);
    return 0;
}