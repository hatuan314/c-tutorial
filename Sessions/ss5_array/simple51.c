/*
 * Mang (Array): La tap hop cac phan tu co cung du lieu
 */

/*
 * Tinh trung binh cong cua tap hop n so nguyen nhap vao tu ban phim
 */

#include <stdio.h>
#define arrayLength 100

int main() {
//    int arr[arrayLength];
    int n;
    int index = 0;
    printf("Nhap vao so luong phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    // Khai bao cac phan tu trong mang
    while (index < n) {
        printf("arr[%d] = ", index);
        scanf("%d", &arr[index]);
        index++;
    }

    // In ra cac phan tu trong mang
//    index = 0;
//    while (index < n) {
//        printf("arr[%d] = %d\n", index, arr[index]);
//        index++;
//    }
    // Tinh tong
    index = 0;
    int sum = 0;
    while (index < n) {
        sum += arr[index];
        index++;
    }
    // Tinh trung binh cong
    float average = (float) sum/n;
    printf("Trung binh cong: %.2f", average);
    return 0;
}