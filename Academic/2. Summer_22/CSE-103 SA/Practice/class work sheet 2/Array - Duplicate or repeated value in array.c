//repeated or duplicate value in array.
#include <stdio.h>
int main(){
//init arry
int a[]={1, 2, 3, 4, 2, 7, 8, 8, 3};
int i, j, length;

//calculate the length of array.
length = sizeof(a)/sizeof(a[0]);

for (i =0; i< length; i++){
    for (j=i+1; j<length; j++){
        if (a[i]==a[j])
            printf("%d\n", a[j]);
    }
}
return 0;
}
