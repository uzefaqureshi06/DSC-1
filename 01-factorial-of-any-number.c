#include <stdio.h>

// Function to calculate the factorial of a number
long long factorialOfNumber(int number) {
    long long result = 1;
    for (int i = number; i >= 1; i--) {
        result = result * i;
    }
    return result;
}

int main() {
    int number;
    printf("Enter the number: "); 
    scanf("%d", &number);
    
    if (number < 0) {
        printf("We cannot find the factorial of a negative number\n");
    } else {
        long long result = factorialOfNumber(number);
        printf("Factorial of the given number is %lld\n", result); 
    }

    return 0;
}
