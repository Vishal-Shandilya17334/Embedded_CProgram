#include <stdio.h>

void selectionSort(int arr[], int n) {
    if (n <= 0) {
        printf("Array is empty, no sorting needed.\n");
        return;
    }

    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int arr[5] = {}; // This array is currently empty
    int n = sizeof(arr) / sizeof(arr[0]);
     if (n == 0) {
        printf("Array is empty, no sorting needed.\n");
    } else {
        selectionSort(arr, n);
        printf("Sorted array: \n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    //selectionSort(arr, n);
    }
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
