#include <stdio.h>

int main()
{
    /* program introduction */
    printf("This program find maximum between three numbers.\n");
    printf("It accepts integer value.\n");

    /* required variables*/
    int num1, num2, num3;

    /* required input */
    printf("\nEnter the 1st number: ");
    scanf("%d", &num1);
    printf("\nEnter the 2nd number: ");
    scanf("%d", &num2);
    printf("\nEnter the 3rd number: ");
    scanf("%d", &num3);
    /* calculation */
    if (num1 > num2){

            if( num1>num3)
            {
                printf("%d is Maximum.\n", num1);
            }
            else {
                printf("%d is Maximum.\n", num3);
            }
    }
    else if (num2> num3) {
        printf("%d is Maximum", num2);
    }
    else {
    printf("%d is Maximum", num3);
    }

    /* output section */

return 0;

}

