//Write a C program to input month number and print number of days in that month.

#include <stdio.h>

int main()
{
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if(month == 1)
    {
        printf("This month is 31 days");
    }
    else if(month == 2)
    {
        printf("This month is 28 or 29 days");
    }
    else if(month == 3)
    {
        printf("This month is 31 days");
    }
    else if(month == 4)
    {
        printf("This month is 30 days");
    }
    else if(month == 5)
    {
        printf("This month is 31 days");
    }
    else if(month == 6)
    {
        printf("This month is 30 days");
    }
    else if(month == 7)
    {
        printf("This month is 31 days");
    }
    else if(month == 8)
    {
        printf("This month is 31 days");
    }
    else if(month == 9)
    {
        printf("30 days");
    }
    else if(month == 10)
    {
        printf("This month is 31 days");
    }
    else if(month == 11)
    {
        printf("This month is 30 days");
    }
    else if(month == 12)
    {
        printf("This month is 31 days");
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).\n");
    }

    return 0;
}
