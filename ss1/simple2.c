#include <stdio.h>

int main() {
    int numb;                                       // Lệnh khai báo, i gọi là tên biến
    /*
     * Biến là một vị trí trong bộ nhớ dùng để lưu trữ giá trị nào đó mà chương trình sẽ dùng để sử dụng.
     * Mỗi biến PHẢI thuộc một kiểu dữ liệu.
     */
    int dump = 0;
    printf("Nhap vao mot so:\t");

    scanf("%d", &numb);                             // Sử dụng hàm scanf() để nhận từ người sử dụng một giá trị nào đó.
    /*
     * Hàm scanf() gồm 2 đối mục:
     * "%d": chuỗi định dạng, cho biết loại dữ liệu mà người dùng sẽ nhập vào.
     * "&numb": dầu & đi đầu gọi là address operator, dấu & phối hợp với tên biến cho hàm scanf() biết giá trị nhập vào
     * từ bàn phím sẽ lưu vào biến numb
     */
    printf("So ban vua nhap la: %d\n", dump);
    /*
     * Hàm printf() gồm 2 đối mục:
     * 1. Một chuỗi định dạng có chứa chuỗi văn bản (có thể không) và %d (ký hiệu khai báo chuyển đổi dạng thức) cho
     * biết số nguyên sẽ được in ra
     * 2. "numb" cho biết giá trị lấy ra từ biếy numb để in ra màn hình
     */
    return 0;
}