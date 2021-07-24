/*
 * Mang nhieu chieu (2 chieu)
 */

/*
 * VD: Nhap va in ra man hinh mang 2 chieu co kich thuoc m*n
 */

#include <stdio.h>

void inputMatrix(int matrix[100][100], int m, int n) {
    int i;
    int j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("matrix[%d, %d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void outputMatrix(int matrix[100][100], int m, int n) {
    int i;
    int j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m;
    int n;
    printf("Nhap vao man hinh so cot m: ");
    scanf("%d", &m);
    printf("Nhap vao man hinh so hang n: ");
    scanf("%d", &n);
    int matrix[n][m];
    inputMatrix(matrix, m, n);
    outputMatrix(matrix, m, n);
    return 0;
}