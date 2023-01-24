#include <stdio.h>
int main()
{
    /* program introduction */
    printf("This program find sum of first and last digit of any number.\n");
    /* required variables*/
    int num, sum, firstDigit, lastDigit;
    /* required input */
    printf("\nEnter an integer number: ");
    scanf("%d", &num);
    /* calculation */
    lastDigit = num %10;
    /* loop */
    while(num >=10 )
    {
        num /=  10;
    }
    firstDigit = num;
    sum = firstDigit + lastDigit;

    /* output section */
    printf("%d", sum);
    return 0;
}
