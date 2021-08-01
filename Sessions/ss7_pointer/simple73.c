/*
 * Con tro tro den mang trong ham
 */
#include "stdio.h"

void add(int *, int);

int main() {
    int arr[] = {2, 5, 6, 9};
    int i;
    int counter = 10;
    int *pointer = arr; // *pointer dung de khai bao
    printf("Phan thu 0: %d\n", arr[0]);
    printf("Phan thu 3: %d\n", arr[2]);
    printf("Phan thu 0 (Con tro): %d\n", *pointer);   // *pointer la bien thuc thi
    printf("Phan thu 3 (Con tro): %d\n", *(pointer + 2));
    add(arr, counter);
    for (i = 0; i < 4; i++) {
        printf("%d\n", *(arr + i));
    }
    return 0;
}

void add(int *arr, int counter) {
    int index;
    for (index = 0; index < 4; index++) {
        *arr = *arr + counter; // Thay doi gia tri của bien ma con tro dang tro toi
        *(arr + 1); // thay doi dia chi ma con tro muon tro toi
    }
}