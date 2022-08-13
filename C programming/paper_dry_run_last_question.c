#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,x;
    printf("Enter vlaue for a:");
    scanf("%d", &a);
    printf("\nEnter value for b:");
    scanf("%d", &b);
    printf("\nEnter value for c:");
    scanf("%d", &c);
    x=(a*a)+(4*b)-c;
    printf("\nAnswer is %d",x);
}