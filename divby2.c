#include <stdio.h>
int main(void)
{
    int A;
    printf("Enter a number to check if it is divisble by 2 or not. \n");
    scanf("%d", &A);
    if (A % 2 == 0)
    {
    printf("Yes!! %d is divisble by 2", A);
    }
    else
    {
    printf("%d is not divisible by 2", A);
    }
}