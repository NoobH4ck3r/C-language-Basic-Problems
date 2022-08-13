#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a Number=\t");
    scanf("%d",&n);
    for (int i = 0; i <= 15; i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    getch();
}