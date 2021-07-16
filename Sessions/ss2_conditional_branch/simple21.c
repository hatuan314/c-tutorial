/*
 * Câu lệnh if cho phép lựa chọn một trong hai nhánh tùy thuộc vào giá trị của biểu thức luận lý là đúng (true) hay sai
 * (false) hoặc khác không hay bằng không.
 */

/*
 * Dạng 1: If thiếu
 */

/*
 * Viết chương trình nhập vào 2 số nguyên a, b. Tìm và in ra số lớn nhất.
 */

#include <stdio.h>

int main() {
    int numbA;
    int numbB;

    printf("Nhap vao a:\t");
    scanf("%d", &numbA);
    printf("Nhap vao b:\t");
    scanf("%d", &numbB);

    if (numbA > numbB) {
        printf("%d la so lon nhat\n", numbA);
        return 0;
    }
    printf("%d la so lon nhat\n", numbB);
    return 0;
}