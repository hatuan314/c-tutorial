//Viết hàm tính tổng S = 1+2+....+n bai 2//
#include <stdio.h>
int sum(int *p)
{
     int i;
     int s=0;
     for (i=0;i<=*p;i++)
        s+=i;
     return s;
}
int main()
{
     int n;
     int *p;
     printf("Nhap vao n: ");
     scanf("%d",&n);
     p=&n;
     printf("Tong s = %d",sum(p));
     return 0;
}
