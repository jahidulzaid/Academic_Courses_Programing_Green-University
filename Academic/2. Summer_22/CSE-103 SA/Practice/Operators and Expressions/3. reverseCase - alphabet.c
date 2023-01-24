#include <stdio.h>

int main()
{

    char c;
    printf("Enter an alphabet: ");
    putchar('\n');
    c = getchar();
    if (islower(c))
        putchar(toupper(c));
    else
        putchar(tolower(c));

    return 0;

}


