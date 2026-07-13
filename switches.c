#include <stdio.h>
int main()
{

    int day;
    printf("Enter the daymon-sun from 1-7 respectively.\n");
    scanf("%d", &day);
    switch (day){

        case 1 : printf("Monday");
        break;

        case 2 : printf("tuesday");
        break;

        case 3 : printf("Wednesday");
        break;

        case 4 : printf("Thursday");
        break;

        case 5 : printf("Friday");
        break;

        case 6 : printf("Saturday");
        break;

        case 7 : printf("Sunday");
        break;

        default : printf("Information given is inaccurate.\n");



    }

}