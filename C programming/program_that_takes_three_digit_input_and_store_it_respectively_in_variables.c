#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a,b,c;
printf("Enter your number:");
scanf("%d", &n);
if (n<100)
{
    printf("Number should be greater than 99 and less than 1000\n");
}
else
{
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
n=n/10;
printf("a=%d\nb=%d\nc=%d\n",c,b,a);
getch();
}
}
