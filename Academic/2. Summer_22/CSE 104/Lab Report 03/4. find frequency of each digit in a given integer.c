#include <stdio.h>
int main()
{
    /* program introduction */
    printf("This program takes a number and print its digit in reverse order.\n");
    /* required variables*/
    int num, one=0, two=0, three=0, four=0, five=0, six=0, seven=0, eight=0, nine=0, ten=0;
    /* required input */
    printf("\nEnter an integer number: ");
    scanf("%d", &num);
    /* calculation */
    /* loop */
    for(;num!=0;num/=10){
        if(num%10==1)
        {one++;}
        if(num%10==2)
        {two++;}
        if(num%10==3)
        {three++;}
        if(num%10==4)
        {four++;}
        if(num%10==5)
        {five++;}
        if(num%10==6)
        {six++;}
        if(num%10==7)
        {seven++;}
        if(num%10==8)
        {eight++;}
        if(num%10==9)
        {nine++;}
        if(num%10==0)
        {ten++;}}
    printf("One     : %d\n", one);
    printf("Two     : %d\n", two);
    printf("Three   : %d\n", three);
    printf("Four    : %d\n", four);
    printf("Five    : %d\n", five);
    printf("Six     : %d\n", six);
    printf("Seven   : %d\n", seven);
    printf("Eight   : %d\n", eight);
    printf("Nine    : %d\n", nine);
    printf("Ten     : %d\n", ten);
    return 0;
}
