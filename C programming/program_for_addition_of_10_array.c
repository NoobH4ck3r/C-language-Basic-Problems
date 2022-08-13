#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],r=0;
    for (int i = 0; i < 10; i++)
    {
        printf("a[%d]=\t",i);
        scanf("%d",&a[i]);
    }
    for (int l = 0; l < 10; l++)
    {
        r=r+a[l];
    }
    printf("\nResult=\t%d",r);
}