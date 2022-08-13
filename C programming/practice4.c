#include<stdio.h>
#include<conio.h>
void startriangularpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        printf("\n");
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
    }
};
void reversetriangularpattern(int rows)
{
    for(int i=0;i<=rows;i++)
    {
        printf(" ");
        for(int j=0;j<=rows+i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
};
int main()
{
    beginning:
    printf("Welcome to a program for printing star pattern\n\nPress ctrl+c to quit\n\n");
    int rows,pattern;
    printf("Enter the number of rows you want to print =\t");
    scanf("%d",&rows);
    printf("Choose a pttern to print \n");
    scanf("%d",&pattern);
    switch (pattern)
    {
    case 1:
        startriangularpattern(rows);
        goto beginning;
    case 2:
        reversetriangularpattern(rows);
        goto beginning;
    default:
        printf("\n\nEnter a Valid option");
        goto beginning;
    }
    return 0;
}