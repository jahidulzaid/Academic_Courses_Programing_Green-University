#include <stdio.h>
#include <math.h>
int main()
{
    /* program introduction */
    printf("This program swap first and last digits of any number.\n");
    /* required variables*/
    int num, swapNum, digitsCount, firstDigit, lastDigit, x, y;
    /* required input */
    printf("\nEnter an integer number: ");
    scanf("%d", &num);
    /* calculation */
    digitsCount = log10(num);
    printf("TEST - digitsCount: %d\n", digitsCount);
    firstDigit = num / pow(10, digitsCount);
    printf("TEST - firstDigit : %d\n", firstDigit);
    lastDigit = num %10;
    printf("lastdigit = %d\n", lastDigit);

    x = firstDigit *(pow(10, digitsCount));
    printf("x = %d\n", x);
    y = num % x;
    printf("y = %d\n", y);
    num = y /10;
    printf("num = %d\n", num);


    swapNum = lastDigit * (pow(10, digitsCount)) + (num *10 + firstDigit);

    /* output section */
    printf("\nThe Number after Swapping First Digit and Last Digit:  %d", swapNum);
    return 0;
}

