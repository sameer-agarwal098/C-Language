// Simple program to find entered number is even or odd number.
#include <stdio.h>

int main()
{
    int num;

    printf("\nEnter the Number to check is even or odd:");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("\n%d is a even.", num);
    }
    else
    {
        printf("\n%d is a odd.", num);
    }
    return 0;
}