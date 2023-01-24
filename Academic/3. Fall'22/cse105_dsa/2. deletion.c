#include <stdio.h>
//traversing array
void output(int arr[], int size){
    
    for (int i = 0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//insertion
int indexDeletion(int arr[], int index, int size){
    for (int i = index; i<=size-1; i++){
        arr[i-1]= arr[i];
    }
}   

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10};
    int size= 11;
    printf("The initial Array is: \n");
    output(arr, size);
    //give index what to delete
    int index = 6;
    indexDeletion(arr, index, size);
    size--;
    //ouput after deletion
    output(arr, size);
    

    return 0;
}