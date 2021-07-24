/*
 * Viết hàm tính n!
 */

#include<stdio.h>
int fact(int n)
{
    int i;
    int gt=1;
    for(i=2;i<=n;i++)
    {
        gt*=i;
    }
    return gt;
}
int main()
{
    int n;
    printf("Nhap vao n: ");
    scanf("%d",&n);
    printf("Ket qua tinh %d giai thua la: %d\n",n ,fact(n));
    return 0;
}