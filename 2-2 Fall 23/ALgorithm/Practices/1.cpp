#include<bits/stdc++.h>
using namespace std;
int partition(int a[], int low, int high)
{
   int pivot = a[low];
    int i = low +1;
   int j = high ;
    while(i<=j)
    {
        if(i<= high && a[i] < pivot)
        {
            i++;
        }
        else if(j> low && a[j] > pivot)
        {
            j--;
        }
        else if(i<j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    swap(a[low], a[j]);
    return j ;
}
void quicksort(int a[], int low, int high)
{
    if(low < high)
    {
        int pivotIndex = partition(a, low, high);
        quicksort(a, low, pivotIndex - 1);
        quicksort(a, pivotIndex + 1, high);
    }
}
int main ()
{
    int a [] = {1,5, 12, 7,7,8, 1, 13, 2, 23, 11, 18};
    int size = sizeof(a) / sizeof(a[0]);
    quicksort(a, 0, size - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

}