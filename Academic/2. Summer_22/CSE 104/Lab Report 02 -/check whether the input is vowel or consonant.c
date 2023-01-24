#include <stdio.h>
#include <stdlib.h>


int main()
{
    /* program introduction */
    printf("This program take the value from the user as input any alphabet \nand check whether it is vowel or consonant.\n");
    printf("It accepts integer value.\n");

    /* required variables*/
    char char1;

    /* required input */
    printf("\nEnter a Character: ");
    scanf("%c", &char1);
    /* calculation */
    switch (char1)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is a vowel. \n", char1);
        break;
    case 0x0A:
        printf("Enter Key is pressed.\n");
        break;
    default:
        printf("%c is a consonant.\n", char1);
        break;
    }

    /* output section */

return 0;

}


