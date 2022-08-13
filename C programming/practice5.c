#include<stdio.h>
#include<conio.h>
int sumfunction(int *adressa,int *adressb)
{
    return *adressa=*adressa+*adressb;
};
int subfunction(int *adressa, int *adressb)
{
    return *adressb=*adressa-*adressb;
};
int main()
{
    int a=4,b=3;
    sumfunction(&a,&b);
    subfunction(&a,&b);
    printf(" a=%d and b=%d",a,b);
    return 0;
}