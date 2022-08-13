#include<stdio.h>
#include<conio.h>
int main()
{
    int *q, a,*w,b,*e,c;
    q=&a,w=&b,e=&c;
    printf("Enter vlaue for a=\t");
    scanf("%d",&a);
    printf("\nEnter vlaue for b=\t");
    scanf("%d",&b);
    printf("Values of a=%d and b=%d before swapping\n",a,b);
    *e=*q;
    *q=*w;
    *w=*e;
    printf("\nValues of a=%d and b=%d after swapping",a,b);
getch();
}