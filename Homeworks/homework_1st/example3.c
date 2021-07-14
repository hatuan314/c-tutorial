/*
 * Viết chương trình đọc và 2 số nguyên và in ra kết quả của phép (+), phép trừ (-), phép nhân (*), phép chia (/). Nhận xét kết quả chia 2 số nguyên.
 */

#include <stdio.h>

int main() {
    int number1st;
    int number2nd;

    printf("Nhap vao so thu nhat:\t");
    scanf("%d", &number1st);
    printf("Nhap vao so thu hai:\t");
    scanf("%d", &number2nd);

    printf("Tong %d va %d la: %d + %d = %d\n", number1st, number2nd, number1st, number2nd, number1st + number2nd);
    printf("Hieu %d va %d la: %d - %d = %d\n", number1st, number2nd, number1st, number2nd, number1st - number2nd);
    printf("Tich %d va %d la: %d * %d = %d\n", number1st, number2nd, number1st, number2nd, number1st * number2nd);
    printf("Thuong %d va %d la: %d / %d = %.2f\n", number1st, number2nd, number1st, number2nd,
           (float) number1st / number2nd);
}