#include <stdio.h>
//traversing array
void output(int arr[], int size){
    
    for (int i = 0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//insertion
int indexInsertion(int arr[], int size, int element, int capacity, int index){
    if (size >= capacity ){
        printf("insertion is not possible.\n");
        return -1;
    }
    for (int i = size -1; i>= index; i--){
        arr[i+1]= arr[i];
    }
    arr[index] = element;
    
}

void  test(int arr[], int size, int index, int element){
    if (index>size){
        printf("insertion is not possible.\nIndex is greater than the element size.\n");
    }
    else{
        indexInsertion(arr, size, element, 100, index);
        size++;
        //output after insert
        printf("output after insert\n");
        output(arr, size);    
    }
    return;
}

int main(){
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    int size= 9;
    printf("The initial Array is: \n");
    output(arr, size);
    //give element to add
    int element = 5;
    //give index where to add
    int index = 4;
    test(arr, size, index, element);
    

    return 0;
}