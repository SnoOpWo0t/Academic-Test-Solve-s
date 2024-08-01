#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high) {
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    while (i <= j) {
        while (a[i] <= pivot && i <= high) {
            i++;
        }
        while (a[j] > pivot && j >= low) {
            j--;
        }
        if (i < j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    swap(a[low], a[j]);
    return j;
}

void quicksort(int a[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(a, low, high);
        quicksort(a, low, pivotIndex - 1);
        quicksort(a, pivotIndex + 1, high);
    }
}

int main() {
    int a[5] = {12, 6, 7, 20, 45};
    quicksort(a, 0, 4);  // Corrected the range

    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
