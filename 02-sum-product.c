#include <stdio.h>
void sumAndProduct(int number){
    int sum = 0;
    int product = 1;
    while (number !=0 ) //jab take zero ke equal nahi hai 
    {
        int digit = number % 10;
        sum = sum + digit;
        product = product * digit;
        number = number / 10;
    }

   printf("Total sum is: %d\n", sum);
    printf("Total product is: %d\n", product);

    //number = 123
    //digit = 3
    //sum = 3 , product = 3

    // number = 12
    // digit = 2;
    // sum = 5 , product = 6

    // number = 1;
    // digit =1 ;
    // sum = 6 , product = 6
}
int main(){
    int number = 123;
    sumAndProduct(number);
    return 0;
}