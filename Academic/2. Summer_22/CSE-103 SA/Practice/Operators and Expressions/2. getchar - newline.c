#include <stdio.h>

int main()
{
    /* program introduction */

char c;
    //c= 'f';

    while( c != '\n'){
        printf("Enter a c: ");
        c = getchar();
        getchar();
        printf(" Entered: %c\n", c);
    }
    getchar();
    printf(" Entered: %c", c);



return 0;

}

