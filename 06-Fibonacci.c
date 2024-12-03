#include <stdio.h>
void fibonacci( int count){
    int first = 1, second = 0, next;
    printf("Fibonaaci is :");
    for (int i = 0; i < count; i++)
    {
     if (i<=1)
     {
            next = i;
     }
     else{
         next = first + second;
         first = second;
         second = next;

     }
     printf("%d", next);
    }
    printf("\n");
}
int main(){
    int number;
    printf("Enter Your number:");
    scanf("%d", &number);
    if ( number<0)
    {
        printf("Enter a Positive number");
    }
    
    fibonacci(number);
    return 0;
}