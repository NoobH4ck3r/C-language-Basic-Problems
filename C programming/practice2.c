#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int r;
    printf("Enter the Radius of the circle=\t");
    scanf("%d",&r);
    printf("\nThe area of circle=\t%f",(float)3.14159*pow(r,2));
getch();
}