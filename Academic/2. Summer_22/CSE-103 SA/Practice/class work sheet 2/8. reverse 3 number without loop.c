#include <stdio.h>
int main() {
   int num, remainder=0;
   printf("Enter a 3 digit number to reverse: ");
   scanf("%d", &num);
    remainder = num%10;
    printf("%d", remainder);
    num/=10;
    remainder = num%10;
    printf("%d", remainder);
    num/=10;
    printf("%d", num);

   return 0;
}
