/*
 * Viết chương trình nhập vào một chuỗi sau đó in ra màn hình mỗi dòng là một từ. Ví dụ chuỗi "Lap trinh C". Kết quả in ra
 * Lap
 * Trinh
 * C
 */

/*
 * Y tuong: lap trinh c
 * mang chuoi: {"lap", "trinh", "c"}
 */

#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char str[] = "lap trinh c";
    char split[MAX][MAX];
    int index;
    int splitIndex = 0;
    int subStrIndex = 0;
    for (index = 0; index < strlen(str); index++) {
        if (str[index] != ' ') {
            split[splitIndex][subStrIndex] = str[index];
            subStrIndex++;
        } else {
            splitIndex++;
            subStrIndex = 0;
        }
    }
    for (index = 0; index <= splitIndex; index++) {
        printf("%s\n", split[index]);
    }
    return 0;
}
//int main() {
//    char str[] = "lap trinh c";
//    int i;
//    for (i = 0; i < strlen(str); i++) {
//        if (str[i] != ' ') {
//            printf("%c", str[i]);
//        } else {
//            printf("\n");
//        }
//    }
//    printf("\n");
//    return 0;
//}