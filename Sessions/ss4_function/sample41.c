/*
 * Ham la mot chuong trinh con thuc hien mot khoi cong viec duoc lap di lap lai
 * nhieu lan trong khi chay chuong trinh hoac dung tach mot khoi cong viec cu the
 * de chuong trinh do phuc tap
 */

/*
 * Vd: In ra man hinh
 * #    #   #   #   #   #
 * #   Hello, world!    #
 * #    #   #   #   #   #
 */

#include <stdio.h>

// Ham tinh => Khong tra ve gia tri
void line() {
    printf("#    #   #   #   #   #\n");
}

int main() {
    line();
    printf("#   Hello, world!    #\n");
    line();
    return 0;
}