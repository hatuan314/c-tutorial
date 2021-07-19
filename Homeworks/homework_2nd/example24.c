//Viết chương trình tính tổng nghịch đảo của N số nguyên đầu tiên theo công thức S = 1 + 1/2 + 1/3 + ... + 1/N//
#include <stdio.h>
int main ()
{
    int n, i;
    float s;
    printf ("Nhap vao n: ");
    scanf(" %d", &n);
    s=0;
    for (i=1; i<=n; i++)
        s+= (float)1/i;
    printf("Tong nghich dao cua n la: %.2f",s);
    return 0;
}