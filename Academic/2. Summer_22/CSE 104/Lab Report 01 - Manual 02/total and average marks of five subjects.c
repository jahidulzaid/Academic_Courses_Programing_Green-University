#include <stdio.h>
int main()
{
    /* program introduction */
    printf("This program takes five subjects and calculate total and average marks.\n");
    printf("It accepts float value.\n");

    /* required variables*/
    float sub1, sub2, sub3, sub4, sub5, average, total;

    /* required input */
    printf("Enter Marks in 1st subject: ");
    scanf("%f", &sub1);
    printf("Enter Marks in 2nd subject: ");
    scanf("%f", &sub2);
    printf("Enter Marks in 3rd subject: ");
    scanf("%f", &sub3);
    printf("Enter Marks in 4th subject: ");
    scanf("%f", &sub4);
    printf("Enter Marks in 5th subject: ");
    scanf("%f", &sub5);

    /* calculation */
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total/5;

    /* output section */
    printf("\nTotal obtained marks: %.2f\n", total);
    printf("\nAverage marks of Five subjects: %.2f", average);
    return 0;
}
