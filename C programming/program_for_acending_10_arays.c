#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],temp;
    for (int i = 0; i < 10; i++)
    {
        printf("a [%d]=\t",i);
        scanf("%d",&a[i]);
    }
    for (int l = 0; l < 10; l++)
    {
        for (int m = 0; m < 10; m++)
        {
            if (a[l]<a[m])
            {
                temp = a[l];
                a[l]=a[m];
                a[m]=temp;
            }
            
        }
        
    }
    for (int n = 0; n < 10; n++)
    {
        printf("%d\t",a[n]);
    }
    
}