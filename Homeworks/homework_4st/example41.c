/*
 * Bai 1: Viết chương trình C tìm số lần xuất hiện của một ký tự trong một chuỗi.
 */

#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    char t;
    printf("Nhap chuoi: ");
    gets(s);
    printf("Nhap mot ky tu: ");
    scanf("%c",&t);
    int count=0;
    for(int i=0;i<=strlen(s);i++)
    {
        if(s[i]==t)
            count=count+1;
    }
    printf("So lan xuat hien ky tu %c la: %d ",t,count);
    return 0;
}