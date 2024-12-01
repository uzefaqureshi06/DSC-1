#include <stdio.h>
/*
number = 123
int digit = 3;
reversed = 3;
number = 12

**********

number = 12
int digit = 2;
reversed =32;
number = 1

*************

number = 1
int digit = 1;
reversed = 321
number = 0
**/
void reverseNumber(int number){
    int reversed = 0;
    while (number !=0)
    {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }

    printf("Total reversed number is %d\n", reversed);
}
int main(){
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);
    reverseNumber(number);
    return 0;
}