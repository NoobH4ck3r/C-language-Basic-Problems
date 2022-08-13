#include<stdio.h>
#include<conio.h>
int main()
{
    long num,first_num=0,second_num=1,next_num,i;
 printf("Enter the range vlaue you want to print fabonacci series of =\t");
 scanf("%d",&num);
 for(i=0;i<=num;i++)
 {
     next_num=first_num+second_num;
     first_num=second_num;
     second_num=next_num;
     printf("%d\n",next_num);
 }   
getch();
}