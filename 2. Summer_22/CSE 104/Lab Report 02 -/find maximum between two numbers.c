#include <stdio.h>

int main()
{
    /* program introduction */
    printf("This program find maximum between two numbers.\n");
    printf("It accepts integer value.\n");

    /* required variables*/
    int num1, num2;

    /* required input */
    printf("\nEnter the 1st number: ");
    scanf("%d", &num1);
    printf("\nEnter the 2nd number: ");
    scanf("%d", &num2);

    /* calculation */
    if (num1 > num2){
        printf("%d is Maximum.\n", num1);
    }
    else
        printf("%d is Maximum", num2);


    /* output section */

return 0;

}
