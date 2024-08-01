#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high)
{ 
    int pivot = a[low];
    int i = low + 1;  // Initialize i to the next element after pivot
    int j = high;

    while (i <= j)
    {
        if (a[i] < pivot && i <= high) 
        {
            i++;
        }
        else if (a[j] > pivot && j >= low)
        {
            j--;
        }
        else if (i <= j) // Swap a[i] and a[j] only if i and j have not crossed each other
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
     swap(a[low], a[j]);
    return j;
   
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(a, low, high);
        // Recursive calls to sort the sub-arrays
        quickSort(a, low, pivotIndex - 1);
        quickSort(a, pivotIndex + 1, high);
    }
}

int main()
{
    int a[] = {1,5, 12, 7,7,8, 1, 13, 2, 23, 11, 18};
    int size = sizeof(a) / sizeof(a[0]);
    // cout << "Original array: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    quickSort(a, 0, size - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
