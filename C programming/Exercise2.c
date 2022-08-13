#include <stdio.h>
#include <conio.h>
int main()
{
    float option, value;
    char wish;
beginning:
    printf("\n\nChoose an option\n1.Km into miles\n2.Inces into foot\n3.Cm into inches\n4.Pound into Kgs\n5.Inches into meters\n\nPress ctrl+c to quit\n");
    scanf("%f", &option);
    if (option == 1)
    {
        printf("\nEnter the value in Kms =\t");
        scanf("%f", &value);
        printf("\n%f Kms in miles is %f", value, (float)value / 1.609);
        goto beginning;
    }
    if (option == 2)
    {
        printf("Enter the value =\t");
        scanf("%f", &value);
        printf("\n%f Inches in foot are %f", value, (float)value / 12);
        goto beginning;
    }
    if (option == 3)
    {
        printf("Enter the value =\t");
        scanf("%f", &value);
        printf("\n%d Cms in Inches are %f", value, (float)value / 2.54);
        goto beginning;
    }
    if (option == 4)
    {
        printf("Enter the value =\t");
        scanf("%f", &value);
        printf("\n%f Pounds in Kgs are %f", value, (float)value / 2.205);
        goto beginning;
    }
    if (option == 5)
    {
        printf("Enter the value =\t");
        scanf("%f", &value);
        printf("\n%f Inches in Meters are %f", value, (float)value / 39.37);
        goto beginning;
    }
    else
    {
        printf("Please Enter a valid option\n");
        printf("\n\nPress Y to Enter option again or ctrl+c to exit\n");
        scanf("%s", &wish);
        if (wish != 1)
        {
            goto beginning;
        }
    }

    getch();
}