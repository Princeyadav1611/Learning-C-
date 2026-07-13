#include<stdio.h>
int main()
{
    int A;
    int B;
    int C;
    printf("enter three numbers ");
    scanf("%d %d %d", &A, &B, &C);

    if (A <= B && B <= C)
    {
        printf("%d is the smallest number.\n", A);

    }
    else if (B <= A && B <= C)
{
    printf("%d is the smallest number.\n", B);

}
else 
{
    printf("%d is the smallest number.\n", C);
}

return 0;
}