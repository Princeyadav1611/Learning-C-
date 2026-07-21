#include<stdio.h>
void sum(int*a, int *b, int *c, int *d);
int main(){
    int wallet=0;
    int spent=0;
    int cashback=0;
    int pts=0;

    printf("=========================================================\n");
    printf("      WELCOME TO SMART DIGITAL WALLET SYSTEM (IN C)     \n");
    printf("=========================================================\n");
    printf("RULES & HOW TO PLAY:\n");
    printf("1. Set your initial wallet balance to start.\n");
    printf("2. Every turn, enter your Spent Amount and Cashback.\n");
    printf("3. IF Cashback is 0, you can enter Reward Points!\n");
    printf("4. SMART POINTS SYSTEM:\n");
    printf("   - Points carry forward across transactions.\n");
    printf("   - Every 10 Points = Rs 1 automatically credited to wallet!\n");
    printf("   - Leftover points remain saved for next time.\n");
    printf("5. BANKRUPTCY RULE:\n");
    printf("   - If Balance <= 0, enter 'Y' to Top-Up or 'N' to Exit.\n");
    printf("=========================================================\n\n");
    
    printf("how much money do u waant to addd in wallet\n");
    scanf("%d", &wallet);
    while(wallet > 0){
    printf("how much money do u spent this time?\n");
    scanf("%d", &spent);
    printf("how much money do u got cashback\n");
    scanf("%d", &cashback);
    if(cashback==0){
        int new_pts;
        printf("how much pts do u got\n");   
        scanf("%d", &new_pts); 
        pts=pts+new_pts;  
    }
    sum(&wallet, &spent, &cashback, &pts);
    char response;
    if (wallet <=0){
        printf("You have to add more money,\nEnter Y/n.\n");
        scanf(" %c", &response);

        if(response == 'Y'||response=='y'){
            printf("enter the amt you wish to add\n");
            scanf("%d", &wallet);

        }
        else{
            printf("Thank you .\nYou are Bankruprt");
            printf("your closing balance is %d\n", wallet);
            printf("your closing points is %d", pts);
            printf("\n-----------------------------------\n");


            break;
        }
    }
}

    return 0;
}
void sum(int *wallet, int *spent, int *cashback, int *pts){
    int pcts = (*pts)/10;
    *pts=(*pts)%10;
    *wallet=*wallet-(*spent)+(*cashback)+pcts;
    printf("Remaining Balance: %d | Leftover Points: %d\n", *wallet, *pts);
    printf("\n-----------------------------------\n");
    
}