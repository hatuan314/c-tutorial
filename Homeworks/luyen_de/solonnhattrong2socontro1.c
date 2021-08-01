//so lon nhat trong 2 so bai 5//
#include<stdio.h>
int max(int *p1,int *p2)
{
    if(*p1>*p2)
    {
        printf("So lon nhat la ; %d\n",*p1);
    }
    else
    {
        printf("So lon nhat la: %d\n",*p2);
    }
    return 0;
}
int main()
{
    int a;
    int b;
    int *p1;
    int *p2;
    printf("Nhap vao a:");
    scanf("%d",&a);
    printf ("Nhap vao b:");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    max(p1,p2);
    return 0;
}
