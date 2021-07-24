// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include <stdio.h>

void nhapmang(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

/*
 * Tim max
 */
int SLN(int a[], int n) {
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

int SNN(int a[], int n) {
    int min = a[0];
    for (int i = 0; i < n; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    return min;
}

int main() {
    int a[1000], n;
    printf("n = ");
    scanf("%d", &n);
    nhapmang(a, n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf("so lon nhat la: %d\n", SLN(a, n));
    printf("so nho nhat la: %d\n", SNN(a, n));
}

/*
 * VD: a = 2, b = 5
 * 2    5   (a < b => bien doi b)
 *      2(a)   3(b)     (a < b => bien doi b)
 *             2(a)    1(b)
 *
 */
