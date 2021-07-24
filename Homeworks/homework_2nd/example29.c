#include <stdio.h>
int main()
{
    int dong,cot;
    printf("nhap so dong\n");
    scanf("%d",&dong);
    printf("\nnhap so cot");
    scanf("%d",&cot);
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
           if (i == 0 || i == dong - 1){
               printf("*\t");
               continue;
           }
           if (j == 0 || j == cot - 1) {
               printf("*\t");
               continue;
           }
            printf("\t");
        }
        printf("\n");
    }
}