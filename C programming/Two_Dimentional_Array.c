#include<stdio.h>
#include<conio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2];
    for(int i =0;i<2;i++)
    for(int j=0;j<2;j++)
    {
        printf("a[%d][%d]=\t",i,j);
        scanf("%d",& a[i][j]);
        printf("b[%d][%d]=\t",i,j);
        scanf("%d",& b[i][j]);
    }
    for (int l=0;l<2;l++)
    for(int m=0;m<2;m++)
    {
        c[l][m]=a[l][m]+b[l][m];
        printf("c[%d][%d]=%d",l,m,c[l][m]);
    }
    
}