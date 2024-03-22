public class MergeSort {
    void merge(int arr[], int left, int mid, int right) {
        int l = mid - left + 1;
        int r = right - mid;

        int leftArray[] = new int[l];
        int rightArray[] = new int[r];

        for (int i = 0; i  l; i++) {
            leftArray[i] = arr[left + i];
        }

        for (int j = 0; j  r; j++) {
            rightArray[j] = arr[mid + 1 + j];
        }

        int i = 0, j = 0;
        int k = left;

        while (i  l && j  r) {
            if (leftArray[i] = rightArray[j]) {
                arr[k] = leftArray[i];
                i++;
            } else {
                arr[k] = rightArray[j];
                j++;
            }
            k++;
        }

        while (i  l) {
            arr[k] = leftArray[i];
            i++;
            k++;
        }

        while (j  r) {
            arr[k] = rightArray[j];
            j++;
            k++;
        }
    }

    void mergeSort(int arr[], int left, int right) {
        if (left  right) {
            int mid = left + (right - left)  2;

            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);

            merge(arr, left, mid, right);
        }
    }

    public static void main(String args[]) {
        int arr[] = {12, 11, 13, 5, 6, 7};

        MergeSort mergeSort = new MergeSort();
        mergeSort.mergeSort(arr, 0, arr.length - 1);

        System.out.println(Sorted array);
        for (int i = 0; i  arr.length; i++) {
            System.out.print(arr[i] +  );
        }
    }
}
