/*
 * Viết chương trình lặp lại nhiều lần công việc nhập một ký tự và in ra mã ASCII
 * của ký tự đó, khi nào nhập số 0 thì dừng.
 *
 * Nhap vao 1 so va in ra ky tu tuong ung trong bang ma ASCII
 * Nhap nhieu lan và chi dung khi so nhap vao la 0
 */

#include <stdio.h>

int main() {
    int numb = -1;
    int flag = 0;
//    while (flag == 0) {
//        printf("Nhap vao mot so: ");
//        scanf("%d", &numb);
//        if (numb == 0) {
//            break;
//        }
//        printf("%d >>> %c\n", numb, numb);
//    }

    while (numb != 0) {
        if (numb != -1) {
            printf("%d >>> %c\n", numb, numb);
        }
        printf("Nhap vao mot so: ");
        scanf("%d", &numb);
    }
    return 0;
}