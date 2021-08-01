/*
 * Bai 2: Viết chương trình C sắp xếp các ký tự của chuỗi theo thứ tự bảng chữ cái.
 */

#include <stdio.h>
#include<string.h>

int main() {
    char s[400], tmp;
    printf("nhap chuoi: ");
    gets(s);
    for (int i = 0; i < strlen(s) - 1; i++) {
        for (int j = i + 1; j < strlen(s); j++) {
            if (s[i] > s[j]) {
                tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }
    puts(s);
    return 0;
}