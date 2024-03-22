#include <stdio.h>
int main()
{
    /* program introduction */
    printf("This program product of digits of any number.\n");
    /* required variables*/
    int num, remainder, product=1;
    /* required input */
    printf("\nEnter an integer number: ");
    scanf("%d", &num);
    /* calculation */
    while(num != 0)
    {
        remainder = num % 10;
        product *= remainder;
        num /=  10;
    }
    /* output section */
    printf("The product of digits: %d\n\n", product);
    return 0;
}

