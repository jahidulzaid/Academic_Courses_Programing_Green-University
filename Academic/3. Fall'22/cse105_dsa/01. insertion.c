#include<stdio.h>

int display(int arr[], int arrLen){
    for (int i = 0; i<arrLen; i++){
        printf(" %d", arr[i]);
    }
    printf("\n");
}
int insertion(int arr[], int arrLen, int index, int elementToInsert){
    if(index>arrLen){
        return -1;
    }
    for (int i = arrLen-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[index]= elementToInsert;
    arrLen++;
    display(arr, arrLen);
}


int main(){
    int arr[] = {1,2,3,4, 6,7,8,9,10};
    int size = 9;
    int index = 4;
    int elementToInsert = 5;
    int arrLen = sizeof arr / sizeof arr[0];
    //print initial array
    display(arr, size);
    //insertion
    insertion(arr, arrLen, index, elementToInsert);
    
}