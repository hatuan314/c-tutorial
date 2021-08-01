#include <stdio.h>

void init(int *px, int *py) {
    printf("x = ");
    scanf("%d", px); // == scanf("%d", &x);
    printf("y = ");
    scanf("%d", py);
}

int main() {
    int x;
    int y;
    init(&x, &y);
    printf("x = %d, y = %d", x, y);
}