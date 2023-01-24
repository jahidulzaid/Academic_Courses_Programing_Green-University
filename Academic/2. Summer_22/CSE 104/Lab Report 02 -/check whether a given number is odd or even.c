#include <stdio.h>

int main()
{
    /* program introduction */
    printf("This program check whether a given number is odd or even.\n");
    printf("It accepts integer value.\n");

    /* required variables*/
    int number;

    /* required input */
    printf("\nEnter a number: ");
    scanf("%d", &number);


    /* calculation */

    /* output section */

        if(number % 2 ==0)
    {
        printf("Entered number is Even.\n");
    }
    else{
        printf("Entered number is Odd.\n");
    }
return 0;

}
