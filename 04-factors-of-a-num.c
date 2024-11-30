#include <stdio.h>
void findFactors (int n){
    for (int i = 1; i <=n; i++)
    {
       
        if (n%i==0)
        {
            printf("%d" , i);
        }
        printf("\n");
    }
    
}
int main(){
    int num;
    printf("Enter Your number:");
    scanf("%d", &num);
    findFactors(num);
    return 0;
}