#include <stdio.h>
#include <conio.h>
int converter(int number)
{
    int option;
    float value;
    char wish;
beginning:
    printf("\n\nChoose an option\n1.Km into miles\n2.Inces into foot\n3.Cm into inches\n4.Pound into Kgs\n5.Inches into meters\n\n6.Main Menu\n\nPress ctrl+c to quit\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("\nEnter the value in Kms =\t");
        scanf("%f", &value);
        printf("\n%f Kms in miles is %f", value, (float)value / 1.609);
        goto beginning;
    case 2:
        printf("Enter the value =\t");
        scanf("%f", &value);
        printf("\n%f Inches in foot are %f", value, (float)value / 12);
        goto beginning;
    case 3:
        printf("Enter the value =\t");
        scanf("%f", &value);
        printf("\n%d Cms in Inches are %f", value, (float)value / 2.54);
        goto beginning;
    case 4:
        printf("Enter the value =\t");
        scanf("%f", &value);
        printf("\n%f Pounds in Kgs are %f", value, (float)value / 2.205);
        goto beginning;
    case 5:
        printf("Enter the value =\t");
        scanf("%f", &value);
        printf("\n%f Inches in Meters are %f", value, (float)value / 39.37);
        goto beginning;
    case 6:
        return main(number);
    default:
        printf("Please Enter a valid option\n");
        printf("\n\nPress Y to Enter option again or ctrl+c to exit\n");
        scanf("%s", &wish);
        switch (wish)
        {
        case 'y':
            goto beginning;
        default:
            printf("\n\nOption not valid");
            break;
        }
        break;
    }
};
int calculator(int number)
{
    int long a, b, choice;
    char wish;
beginning2:
    printf("Enter Your Choice\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n\n5.Main Menu\n\nPress q to quit\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter first Number :\n");
        scanf("%d", &a);
        printf("Enter second number :\n");
        scanf("%d", &b);
        printf("%d + %d = %d\n", a, b, (a + b));
        goto beginning2;
    case 2:
        printf("Enter first Number :\n");
        scanf("%d", &a);
        printf("Enter second number :\n");
        scanf("%d", &b);
        printf("%d - %d = %d\n", a, b, (a - b));
        goto beginning2;
    case 3:
        printf("Enter first Number :\n");
        scanf("%d", &a);
        printf("Enter second number :\n");
        scanf("%d", &b);
        printf("%d * %d = %d\n", a, b, (a * b));
        goto beginning2;
    case 4:
        printf("Enter first Number :\n");
        scanf("%d", &a);
        printf("Enter second number :\n");
        scanf("%d", &b);
        if (b != 0)
        {
            printf("%d / %d = %d\n", a, b, (a / b));
        }
        else
        {
            printf("Number can not be divided by zero\n");
        }
    case 5:
        return main(number);
    case 'q':
        printf("Program is quitting...");
        break;
    default:
        printf("Please Enter a valid option\n");
        printf("\n\nPress Y to Enter option again or ctrl+c to quit\n");
        scanf("%s", &wish);
        switch (wish)
        {
        case 'y':
            goto beginning2;
        default:
            printf("\n\nOption not valid");
            break;
        }

        break;
    };
}
int main(int number)
{
    int choice, num;
    char wish;
beginning:
    printf("Choose an option Converter or calculator Enter the option number you want to choose and press Enter\n1.Converter\n2.Calculator\n\nPress ctrl+c to exit\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        converter(num);
        break;
    case 2:
        calculator(num);
    default:
        printf("Plese Enter a valid option\n\nPress y to choose again or n to Exit\n\n");
        scanf("%s", &wish);
        if (wish == 'y')
        {
            goto beginning;
        }
        if (wish == 'n')
        {
            printf("Program is quitting...");
            break;
        }

        else
        {
            printf("OPtion is not valid");
        }
    }
    return 0;
}