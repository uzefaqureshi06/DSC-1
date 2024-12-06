#include <stdio.h>
int main()
{
    int arr[5] = {1, 3, 4};                 // n
    char arr2[5] = {'a', 'b', 'c', 'd'};    // m
    int n = sizeof(arr) / sizeof(arr[0]);   // 12/3
    int m = sizeof(arr2) / sizeof(arr2[0]); // 12/3

    int a = 2;
    char b = 'c';
    float c = 2.3;
    double d = 2.3;
    printf("Size of a is %d\n", sizeof(a));
    printf("Size of b is %d\n", sizeof(b));
    printf("Size of c is %d\n", sizeof(c));
    printf("Size of d is %d\n", sizeof(d));
    printf("Size of aray of int type is %d\n", n);
    printf("Size of aray of char type is %d\n", m);
    return 0;
}