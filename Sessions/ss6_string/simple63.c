#include <stdio.h>

int main() {
    int iMonth;
    char monthList[12][15] =
            {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Nov", "Dec"};
    printf("Nhap vao thang (1 - 12): ");
    scanf("%d", &iMonth);
    printf("%s", monthList[iMonth - 1]);
    return 0;
}