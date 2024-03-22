
#include <stdio.h>

int main()
{
    /* program introduction */
    printf("This program check whether a year is leap year or not.\n");
    printf("It accepts integer value.\n");

    /* required variables*/
    int year;

    /* required input */
    printf("\nEnter 4 digit year: ");
    scanf("%d", &year);


    /* calculation */

    /* output section */

    if (year % 4 ==0)
        {
        printf("%d is Leap Year.\n", year);
        }
    else{
        printf("%d is not a leap year.\n", year);
    }
return 0;

}

