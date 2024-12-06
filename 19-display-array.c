#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("%d", *ptr + 5);
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i)); // Access each element using pointer arithmetic
    }

    printf("\n");

    return 0;
}
