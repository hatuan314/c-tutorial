/*
 * Viết hàm tính tổng S = 1+2+....+n.
 */

#include <stdio.h>

int sum(int n)
{
    int i;
    int s=0;
    for (i=0;i<=n;i++)
        s+=i;
    return s;
}

int main()
{
    int n;
    printf("Nhap vao n: ");
    scanf("%d",&n);
    printf("Tong s = %d",sum(n));
    return 0;
}