#define _CRT_SECURE_NO_WARNINGS /* Disable scanf warning in VS */
#include <stdio.h>

int main()
{
    int a;
    printf("Please enter an integer:\n");
    scanf("%d", &a);// Read the input integer
    if (a % 2 == 0)// Determine whether it is odd or even
    {
        printf("%d Is an even number\n", a);
    }
    else
    {
        printf("%d Is an odd number\n", a);
    }
    return 0;
}