#include<stdio.h>

void inputMatrix(int a[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);

        }
    }
}

int MAX(int a[][100], int n, int m) {
    int max = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (max < a[i][j]) {
                max = a[i][j];
            }
        }
    }
    return max;
}

int MIN(int a[][100], int n, int m) {
    int min = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (min > a[i][j]) {
                min = a[i][j];
            }
        }
    }
    return min;
}

void outputMatrix(int a[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\n", a[i][j]);
        }
    }
}

int checkPrime(int k) {
    if (k < 2) {
        return 0;
    }
    for (int i = 2; i < k; i++) {
        if (k % i == 0) {
            return 0;
        } else return 1;
    }
}


void sumPrime(int a[][100], int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (checkPrime(a[i][j]) == 1) {
                sum += a[i][j];
            }
        }
    }
    printf("\ntong cac so nguyen to la:%d", sum);
}

int main() {
    int a[100][100], n, m;
    printf("nhap so hang,so cot\n");
    scanf("%d%d", &n, &m);
    printf("nhap vao ma tran\n ");
    inputMatrix(a, n, m);
    printf("in ra ma tran n\n");
    outputMatrix(a, n, m);
    printf("\ngia tri lon nhat:%d", MAX(a, n, m));
    printf("\ngia tri nho nhat:%d", MIN(a, n, m));
    sumPrime(a, n, m);
    return 0;
}