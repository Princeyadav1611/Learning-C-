#include<stdio.h>
int  main(){


int A;
int B;
int C;

printf("Enter a no A.\n");
scanf("%d", &A);
printf("Enter a no B.\n");
scanf("%d", &B);
printf("Enter a no C.\n");
scanf("%d", &C);

printf("%f", (A + B + C) / 3.0);

return 0;
}