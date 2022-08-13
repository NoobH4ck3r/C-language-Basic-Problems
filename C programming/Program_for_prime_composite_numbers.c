#include<stdio.h>
#include<conio.h>
int main()
{
    int i=2,n;
printf("Enter a Number:\n");
scanf("%d", &n);
if (n%i == 0)
{
    printf("Number is Prime\n");
}
else
{
    printf("\n Number is Composite\n");
}

getch();
}