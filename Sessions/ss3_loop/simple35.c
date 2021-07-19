/*
 * Lenh break
 * Dung de thoat khoi vong lap
 */

/*
 * VD: Nhap vao mot so nguyen duong n bat ky. In ra man hinh day so tu 0 den n.
 * Nếu n la mot so lon hon 5 thi in ra man hinh day so tu 0 den 5
 */
#include <stdio.h>

int main() {
    int index = 0;
    int numb;
    printf("Nhap vao so nguyen duong n:\t");
    scanf("%d", &numb);
    while (index <= numb) {
        printf("%d\t", index);
        index++;
        if (index > 5) {
            break;
        }
    }
    return 0;
}