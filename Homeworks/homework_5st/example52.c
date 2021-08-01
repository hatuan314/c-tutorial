/*
 * Bai 1: Nhập vào 2 ma trận vuông cấp n số thập phân. Cộng 2 ma trận này lưu vào ma trận thứ 3.
 */
#include <stdio.h>

void input(int *row, int *column, int *dong2, int *cot2) {
    printf("nhap so dong cua ma tran 1\n");
    scanf("%d", row);
    printf("\nnhap so cot cua ma tran 1 ");
    scanf("%d", column);
    printf("\nnhap so dong cua ma tran 2 ");
    scanf("%d", dong2);
    printf("\nnhap so cot cua ma tran 2 ");
    scanf("%d", cot2);
    printf(">>>>> input function\n");
    printf("row: %d\n", *row);
    printf("column: %d\n", *column);
    printf("dong2: %d\n", *dong2);
    printf("cot2: %d\n", *cot2);
}

void inputFirstMatrix(int firstMatrix[][100], int row, int column) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("mt1[%d][%d]=\n", i, j);
            scanf("%d", &firstMatrix[i][j]);
        }
    }
}

void inputSecondMatrix(int secondMatrix[][100], int row, int column) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("mt2[%d][%d]=\n", i, j);
            scanf("%d", &secondMatrix[i][j]);
        }
    }
}

void sumMatrix(int firstMatrix[][100], int secondMatrix[][100], int resultMatrix[][100], int row, int column) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            resultMatrix[i][j] = firstMatrix[i][j] +
                                 secondMatrix[i][j];
        }
    }
}

void outputMatrix(int resultMatrix[][100], int row, int column) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("mtt[%d][%d]=%d\n", i, j, resultMatrix[i][j]);
        }
    }
}

int main() {
    int row, column;
    int firstMatrix[100][100], secondMatrix[100][100], resultMatrix[100][100];
//    input(&row, &column, &dong2, &cot2);
    printf("So dong: ");
    scanf("%d", &row);
    printf("So cot: ");
    scanf("%d", &column);
    inputFirstMatrix(firstMatrix, row, column);
    inputSecondMatrix(secondMatrix, row, column);
    sumMatrix(firstMatrix, secondMatrix, resultMatrix, row, column);
    outputMatrix(resultMatrix, row, column);
    return 0;
}
