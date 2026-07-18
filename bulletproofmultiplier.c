#include <stdio.h>
int main(){
    int n;
    int attempts = 3;
    int nons = 5;
    printf("=========================================================\n");
    printf("       WELCOME TO THE 'BULLETPROOF MULTIPLIER' GAME     \n");
    printf("=========================================================\n");
    printf("   SYSTEM RULES & REGULATORY WARNINGS:\n");
    printf(" -------------------------------------------------------\n");
    printf(" 1. TARGET: Always enter an ODD integer number.\n");
    printf(" 2. EXIT CODE: Enter '0' anytime to safely quit the game.\n");
    printf(" 3. EVEN NUMBER PENALTY:\n");
    printf("    - Entering an even number costs you 1 Life.\n");
    printf("    - Total Lives: 3. Game Over at 0.\n");
    printf("    - Adaptive Reward: 1 Life is restored for every correct\n");
    printf("      odd input (Max limit: 3 Lives).\n");
    printf(" 4. CRITICAL SECURITY RULE (NON-INTEGERS):\n");
    printf("    - Entering characters/letters (e.g., abc, xyz) is STRICTLY FORBIDDEN.\n");
    printf("    - Total Security Tokens: 5. Game Over at 0.\n");
    printf("    - NO MERCY: These tokens will NEVER be restored!\n");
    printf("=========================================================\n\n");

    while(1){
        int fact=1;
        int sum=0;
        printf("Enter a odd number n:\n");
        if(scanf("%d", &n) == 0){
            printf("Jyada shaana ban ne ki koshish mt kr.\n");
            nons = nons - 1;
            printf("You have %d chances left for non numbers input.\n", nons);
             while ((getchar()) != '\n');
            if(nons <= 0){
                printf("You have entered a non-integer 5times, exiting the program.\n");
                break;
            }
            continue;
        }
        while ((getchar()) != '\n');
        
        if(n == 0){
            printf("You entered 0, exiting the program.\n");
            break;
        }
        if(n % 2 == 0){
            attempts = attempts - 1;
            if(attempts <=0){
                printf("You have entered an even number 3 times, exiting the program.\n");
                break;
            }
            printf("I told you to enter an odd number, %d chances left.\n", attempts);
            continue;
        }
        else
        {
            if(attempts < 3){
                attempts =attempts + 1;
            }

           
            for(int i=1; i<=10; i=i+1){
                printf("%d x %d = %d\n", n, i, n*i);
                sum = sum + n*i;
                
            }
            for(int i=1; i<=n; i=i+1){
                fact = fact * i;
            }

            printf("The factorial of %d is %d.\n", n, fact);
            printf("Sum of the first 10 multiples of %d is: %d\n\n", n, sum);
            printf("---------------------------------------------\n\n");
        }

    }
}