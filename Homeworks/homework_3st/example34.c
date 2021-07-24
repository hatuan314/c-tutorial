/*
 * Viết hàm tính số hạng thứ n trong dãy Fibonacci.
 * 1    1   2   3   5   8   13  21  34  ...
 * f(n) = f(n-1) + f(n-2)
 */

#include <stdio.h>

int getFibonacciIndex(int n) {
    int index = 3;
    int a = 1;
    int b = 1;
    int fibonacciIndex;

    if (n == 1 || n == 2) {
        return 1;
    }
    while (index <= n) {
        fibonacciIndex = a + b;
        a = b;
        b = fibonacciIndex;
        index++;
    }
    return fibonacciIndex;
}

int main() {
    int n;
    printf("Nhap vao mot so nguyen n: ");
    scanf("%d", &n);
    printf("So Fibonacci thu %d: %d", n, getFibonacciIndex(n));
    return 0;
}