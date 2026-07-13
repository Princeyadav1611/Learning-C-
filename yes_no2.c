#include <stdio.h>
int main()
{
    int season;
    int day;
    printf("Only if it is sunday , press 1\n");
    scanf("%d", &day);
    printf("Only if it raining , press 1\n");
    scanf("%d", &season);

    if (season == 1 && day == 1)
    {
        printf("Yess!!, Thus is the best day\n");
    }
    else
    {
        printf("This may not be your best day!!\n");
    }
}