#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter value for a:");
    scanf("%d",&a);
    printf("\nEnter value for b:");
    scanf("%d", &b);
    printf("\nEnter value for c:");
    scanf("%d", &c);
if (a>b && a>c)
{
    printf("\na is greater");
}
if (b>a && b>c)
{
    printf("\nb is greater");
}
if (c>a && c>b)
{
    printf("\nc is greater");
}
getch();

}