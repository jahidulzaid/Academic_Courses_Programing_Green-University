#include <stdio.h>
void display(int arr[], int arrLen){
    for (int i = 0; i<arrLen; i++){
        printf(" %d", arr[i]);
    }
    printf("\n");
}
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {
      if (array[i] < array[min_idx])
        min_idx = i;
    }
        swap(&array[min_idx], &array[step]);
    }
}

int main(){
    int arr[] = {2, 6, 3, 1, 5, 4, 7, 9, 8, 0, 10};
    int arrLen = sizeof arr / sizeof arr[0];
    display(arr, arrLen);
    selectionSort(arr, arrLen);
    display(arr, arrLen);
}