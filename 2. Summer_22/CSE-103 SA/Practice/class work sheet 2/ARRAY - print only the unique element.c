#include <stdio.h>
int main(){
    int index, counter, size;
printf("Enter the size of the array: ");
scanf("%d", &size);
int a[size];

//storing values in the array
for (index =0; index< size; index++){
    scanf("%d", &a[index]);
}

for(index=0; index<size; index++){
    counter=0;
    for(int j=0; j<size + 1; j++){
    //Increment the counter when a duplicate is found
    if (index!=j){
        if(arr[index]==arr[
           j]){
            counter++;
        }
    }
    }
if(counter==0)
//coming out of inner loop, without finding any duplicates
{
    printf("%d ",arr[index]);
}
}
}
