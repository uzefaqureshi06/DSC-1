#include <stdio.h>
void isleapYear(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0))
    {
        printf("It is a Leap Year");
    }
    else
    {
        printf("Its is not a leap Year");
    }
}
int main()
{
    int year;
    printf("Enter Your Leap Year :");
    scanf("%d", &year);
    isleapYear(year);
    return 0;
}