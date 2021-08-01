//giai he phuong trinh bac nhat
#include <stdio.h>

int main() {
    int a, b, c, d, e, f, D, Dx, Dy;
    float x, y;
    printf("nhap cac he so cua phuong trinh 1\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("nhap he so cua phuong trinh 2\n");
    printf("d = ");
    scanf("%d", &d);
    printf("e = ");
    scanf("%d", &e);
    printf("f = ");
    scanf("%d", &f);
    D = a * e - b * d;
    Dx = c * e - b * f;
    Dy = a * f - c * d;
    if (D == 0) {
        if (Dx == Dy) {
            printf("he co vo so nghiem\n");
        }
        if ((Dx == 0) || (Dy == 0)) {
            printf("he vo nghiem\n ");
        }
    } else {
        printf("he phuong trinh co nghiem la:\n");
        x = (float) Dx / D;
        y = (float) Dy / D;
        printf("x = %f, y = %f", x, y);
    }
}