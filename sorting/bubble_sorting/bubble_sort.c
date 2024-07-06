#include <stdio.h>
//swapping elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
//sorting the array
int* bubble_sort(int n, int arr[]) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
    return arr;
}
//printing the array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//main function
int main() {
    int arr[] = {19, 8, 17, 5, 11, 12, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int* sortedArray = bubble_sort(n, arr);
    printArray(sortedArray, n);

    return 0;
}
