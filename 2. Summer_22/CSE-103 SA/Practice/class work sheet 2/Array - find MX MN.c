#include <stdio.h>
int main(){
int a[100];
printf("\nEnter the number of element to be stored in the array: ");
int n, i,max, min;
scanf("%d", &n);
for (int i=0; i<n; i++){
    printf("Element %d: ", i);
    scanf("%d", &a[i]);
}
//let's say 1st value is the max and min
max = a[0];
min = a[0];

//if not then check for the remaining element.
for (i = 1; i < n; i++){
    if (a[i] > max){
            max = a[i];
    }
    if (a[i]< min){
            min = a[i];
    }
}

printf("Maximum element is: %d\n", max);
printf("Minimum element is: %d", min);
}
