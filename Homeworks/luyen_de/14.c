#include <stdio.h>

#define LENGTH 100

int showMenu();
void inputMatrixs(int arrA[LENGTH][LENGTH], int arrB[LENGTH][LENGTH]);
void inputMatrix(int arr[LENGTH][LENGTH]);
void outputMatrixs(int arrA[LENGTH][LENGTH], int arrB[LENGTH][LENGTH]);
void outputMatrix(int arr[LENGTH][LENGTH]);

int main() {
    showMenu();
    return 0;
}

int showMenu() {

    do {
        int arrA[LENGTH][LENGTH];
        int arrB[LENGTH][LENGTH];
        int arrC[LENGTH][LENGTH];
        int choice;
        printf("1/ Nhap 2 ma tran\n");
        printf("2/ Tinh tich 2 ma tran\n");
        printf("3/ Hien thi 3 ma tran\n");
        printf("4/ Ket thuc\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                inputMatrixs(arrA, arrB);
                outputMatrixs(arrA, arrB);
                break;
            case 2:
                // Tinh tich
                break;
            case 3:
//                outputMatrix(arrA, arrB);
                break;
            case 4:
                // End
                return 0;

        }
    } while (1);
}

void inputMatrixs(int arrA[LENGTH][LENGTH], int arrB[LENGTH][LENGTH]) {
    printf("Ma tran A\n");
    inputMatrix(arrA);
    printf("Ma tran B\n");
    inputMatrix(arrB);
}

void inputMatrix(int arr[LENGTH][LENGTH]) {
    int column;
    int row;
    int columnIndex;
    int rowIndex;
    printf("So hang: ");
    scanf("%d", &row);
    printf("So cot: ");
    scanf("%d", &column);
    for (rowIndex = 0; rowIndex < row; rowIndex++) {
        for (columnIndex = 0; columnIndex < column; columnIndex ++) {
            printf("[%d][%d]", rowIndex, columnIndex);
            scanf("%d", &arr[rowIndex][columnIndex]);
        }
    }
}

void outputMatrixs(int arrA[LENGTH][LENGTH], int arrB[LENGTH][LENGTH]) {
    printf("Ma tran A\n");
    outputMatrix(arrA);
    printf("Ma tran A\n");
    outputMatrix(arrB);
}

void outputMatrix(int arr[LENGTH][LENGTH]) {
    int row; int column;
    int columnIndex;
    int rowIndex;
    for (rowIndex = 0; rowIndex < row; rowIndex++) {
        for (columnIndex = 0; columnIndex < column; columnIndex ++) {
            printf("[%d][%d] = %d\n", rowIndex, columnIndex, arr[rowIndex][columnIndex]);
        }
    }
}