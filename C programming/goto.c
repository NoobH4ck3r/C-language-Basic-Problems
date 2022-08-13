#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    for(int i=0;i<=10;i++)
    {
        printf("%d",i);
        for(int j=0;j<10;j++)
        {
            printf("%d\n",j);
            printf("Enter 0 to exit\n");
            scanf("%d",&num);
            if (num==0)
            {
                goto end;
            }
            
        }
    }
    end:
    getch();
}