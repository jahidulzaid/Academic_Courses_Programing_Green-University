
#include <stdio.h>
int main()
{
    /* program introduction */
    printf("This program find the sum of the series 1 +11 + 111 + 1111 + .. n terms.\n");
    /* required variables*/
    int n, i;
    long sum=0;
    long int t=1;
    /* required input */
    printf("\nEnter an integer number: ");
    scanf("%d", &n);
    /* calculation */
    for(i=1; i<=n;i++)
    {
    printf("%ld  ",t);
      if (i<n)
      {
          printf("+ ");

      }
     sum=sum+t;
     t=(t*10)+1;
    }
    /* output section */
    printf("\nThe Sum is : %ld\n",sum);
    return 0;
}

