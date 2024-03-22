#include <stdio.h>

int main()
{
    /* program introduction */
    printf("This program check whether a number is negative, positive or zero.\n");
    printf("It accepts integer value.\n");

    /* required variables*/
    int number;

    /* required input */
    printf("\nEnter a number: ");
    scanf("%d", &number);


    /* calculation */

    /* output section */

        if(number > 0)
    {
        printf("Number is POSITIVE");
    }
    if(number < 0)
    {
        printf("Number is NEGATIVE");
    }
    if(number == 0)
    {
        printf("Number is ZERO");
    }

return 0;

}
