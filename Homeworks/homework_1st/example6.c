/*
 * Viết chương trình đọc từ bàn phím 3 số nguyên biểu diễn ngày, tháng, năm và xuất ra màn hình dưới dạng "ngay/thang/nam" (chỉ lấy 2 số cuối của năm).
 */

#include <stdio.h>

int main() {
    int day;
    int month;
    int year;

    printf("Nhap vao nam:\t");
    scanf("%d", &year);
    if (year > 0) {
        printf("Nhap vao thang:\t");
        scanf("%d", &month);
        if (month > 0 && month <= 12) {
            printf("Nhap vao ngay:\t");
            scanf("%d", &day);
            if (day > 0) {
                switch (month) {
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 8:
                    case 10:
                    case 12:
                        if (day <= 31) {
                            printf("ngay/thang/nam: %d/%d/%d", day, month, year % 100);
                            return 0;
                        }
                        break;
                    case 4:
                    case 6:
                    case 9:
                    case 11:
                        if (day <= 30) {
                            printf("ngay/thang/nam: %d/%d/%d", day, month, year % 100);
                            return 0;
                        }
                        break;
                    case 2:
                        if (year % 4 == 0 && year % 100 != 0) {
                            if (day <= 29) {
                                printf("ngay/thang/nam: %d/%d/%d", day, month, year % 100);
                                return 0;
                            }
                        } else if (day <= 28) {
                            printf("ngay/thang/nam: %d/%d/%d", day, month, year % 100);
                            return 0;
                        }
                }
            }
        }
    }

    return 0;
}