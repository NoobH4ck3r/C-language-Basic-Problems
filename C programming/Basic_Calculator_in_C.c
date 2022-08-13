#include<stdio.h>
#include<conio.h>
int main()
{
int long a,b,choice;
printf("Enter Your Choice\n");
printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
scanf("%d" ,&choice);
if (choice>4)
{
    printf("Out of range");
}
else
{
    printf("Enter first Number :\n");
    scanf("%d", &a);
printf("Enter second number :\n");
scanf("%d", &b);
}
switch (choice)
{
case 1:
    printf("%d + %d = %d\n", a, b, (a+b));
    break;
    case 2: 
    printf("%d - %d = %d\n", a, b, (a-b));
    break;
    case 3:
    printf("%d * %d = %d\n", a, b, (a*b));
    break;
    case 4:
    if (b != 0)
    {
        printf("%d / %d = %d\n", a, b, (a/b));
    }
    else
    {
    printf("Number can not be divided by zero\n");
    }
    default:
    break;
}
getch();
}