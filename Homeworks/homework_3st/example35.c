/*
 * Viết hàm tìm số lớn nhất trong 2 số.
 */

#include<stdio.h>
void max(int a,int b)
{
    if(a>b)
    {
        printf("So lon nhat la ; %d\n",a);
    }
    else
    {
        printf("So lon nhat la: %d\n",b);
    }
}
int main()
{
    int a;
    int b;
    printf("Nhap vao a:");
    scanf("%d",&a);
    printf ("Nhap vao b:");
    scanf("%d",&b);
    max(a,b);
    return 0;
}