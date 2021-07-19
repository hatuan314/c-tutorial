//Bai 5: Viết chương trình tính tổng bình phương các số lẻ từ 1 đến N//
#include <stdio.h>
#include <math.h>

int main()
{
    int n, s, i;
    printf("Nhap vao so nguyen n:");
    scanf("%d",&n);
    s=0;
    for (i=1;i<=n;i=i+2) { s = s + pow(i, 2); }
    printf("Tong binh phuong so le la: %d",s);
    return 0;
}