#include <stdio.h>

int main()
{
    /* program introduction */
    printf("This program check whether a number is divisible by 5 and 11 or not.\n");
    printf("It accepts integer value.\n");

    /* required variables*/
    int number;

    /* required input */
    printf("\nEnter a number: ");
    scanf("%d", &number);


    /* calculation */

    /* output section */

    if (number % 5 ==0)
        {
        printf("Entered number is Divisible by 5.\n");
        }
    else if (number % 11 ==0)
        {
        printf("Entered number is Divisible by 11.\n");
        }
    else{
        printf("Entered number is not divisible.\n");
    }
return 0;

}

