#include <stdio.h>
#include <stdbool.h>


int reverseNum( int number){
    
    int revNum = 0;
    while (number!=0)
    {
      int  digit = number % 10;
        revNum = revNum * 10 + digit;
        number = number / 10;
    }
    
    return revNum;
}

bool isPalindrome (int number){
    int reverseNumber = reverseNum(number);
    if (reverseNumber == number)
    {
        return true;
    }
    return false;
}


// int number = 123 
// isPalindrome(123)
// int reversedNumber = reverseNum(number)
// if(number == reversedNumber){
//     return true;
// }

int main(){
    int number;
    printf("Enter your Number: ");
    scanf("%d" , &number);
    bool palindromeAns = isPalindrome(number);
    if (palindromeAns)
    {
        printf("The given number is palindrome%d\n");
    }else{
        printf("The given number is not a palindrome%d\n");

    }
    
}