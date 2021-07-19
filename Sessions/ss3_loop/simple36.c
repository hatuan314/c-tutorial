/*
 * Cau lenh continue
 * Dung de thuc hien vong lap moi
 */

/*
 * VD: Nhap vao so nguyen duong n (n>1). In ra man hinh cac so tu 0 den n
 * (tru so 1).
 */

#include <stdio.h>

int main() {
    int numb;
    int index = 0;
    printf("Nhap vao so nguyen n:\t");
    scanf("%d", &numb);
    while (index <= numb) {
        if (index == 1) {
            index++;
            continue;
        }
        printf("%d\t", index);
//        if (index != 1) {
//            printf("%d\t", index);
//        }
        index++;
    }
    return 0;
}