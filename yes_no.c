#include <stdio.h>
int main()
{
    int season;
    int day;
    printf("Only if it is sunday , press 1\n");
    scanf("%d", &day);
    printf("Only if it raining , press 1\n");
    scanf("%d", &season);
    if (season == day)
    {
        printf("yess!! , this is the best day.\n");
    }
    else
    {
        printf("this maybe not the best day.\n");
    }
}