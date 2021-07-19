/*
 * Bai 1: Viết chương trình in ra bảng mã ASCII
 */

#include <stdio.h>

int main() {
    int index;
    for (index = 0; index < 128; index++) {
        printf("%d\t\t%c\n", index, index);
    }
    return 0;
}