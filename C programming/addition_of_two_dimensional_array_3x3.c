#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    {
        printf("a[%d][%d]=\t",i,j);
        scanf("%d",& a[i][j]);
        printf("b[%d][%d]=\t",i,j);
        scanf("%d",& b[i][j]);
    }
    for(int l=0;l<3;l++)
    for(int m=0;m<3;m++)
    {
        c[l][m]=a[l][m]+b[l][m];
        printf("c[%d][%d]=%d",l,m,c[l][m]);
    }
    getch();
}