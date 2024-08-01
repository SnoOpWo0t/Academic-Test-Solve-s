#include <stdio.h>

int partition(int a[], int low, int high) {
    int pivot = a[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        if (a[i] < pivot && i <= high) {
            i++;
        } else if (a[j] > pivot && j >= low) {
            j--;
        } else if (i <= j) {
            // Swap a[i] and a[j] without using pointers
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    // Swap pivot with the correct position in the array
    int temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j; // Return the index of the pivot element
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(a, low, high);
        // Recursive calls to sort the sub-arrays
        quickSort(a, low, pivotIndex - 1);
        quickSort(a, pivotIndex + 1, high);
    }
}

int main() {
    int a[] = {5, 12, 7, 1, 13, 2, 23, 11, 18};
    int size = sizeof(a) / sizeof(a[0]);

    quickSort(a, 0, size - 1);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
