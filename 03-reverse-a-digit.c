#include <stdio.h>
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