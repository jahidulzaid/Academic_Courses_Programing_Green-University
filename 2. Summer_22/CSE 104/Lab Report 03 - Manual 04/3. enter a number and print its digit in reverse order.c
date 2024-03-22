#include <stdio.h>
int main()
{
    /* program introduction */
    printf("This program takes a number and print its digit in reverse order.\n");
    /* required variables*/
    int num, remainder, reverse = 0;
    /* required input */
    printf("\nEnter an integer number: ");
    scanf("%d", &num);
    /* calculation */
    while(num != 0)
    {
        remainder = num % 10;
        reverse = reverse *10 + remainder;
        num /=  10;
    }
    /* output section */
    printf("%d", reverse);
    return 0;
}
