#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isArmStrong(int num){
    int temp = num, digit, result = 0;
    while (temp!=0)
    {
        int digit = temp % 10;
        result = result + pow(digit, 3);
        temp = temp / 10;
    }
    return result == num;
}
int main (){
    int number = 1573;
    if (isArmStrong(number))
    {
        printf("Its is an ArmStrong");
    }else{
        printf("It is not an ArmStrong");
    }
    
    return 0;

}