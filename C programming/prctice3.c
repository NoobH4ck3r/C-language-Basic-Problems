#include<stdio.h>
#include<conio.h>
int main()
{
    struct student
    {
        int rno;
        float fee;
        char name[50];
    }it;
    printf("Enter Your name=\t");
    gets(it.name);
    printf("Enter roll no=\t");
    scanf("%d",&it.rno);
    printf("Enter the amount of fee=\t");
    scanf("%f",&it.fee);
    printf("Roll no=\t%d\nFee=\t%f\n",it.rno,it.fee);
    puts(it.name);
getch();
}