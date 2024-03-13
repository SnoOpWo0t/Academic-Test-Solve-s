#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int low,int high)
{
    int pivot = a[low];
    int i = low +1;
    int j = high;
    while(i<j)
    {
        while(a[i]<pivot&& i<high)
        {
            i++;
        }
        while(a[j]>pivot&&j>low)
        {
            j--;

        }
        if(i<j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    swap(a[low],a[j]);
    return j;
}
void quicksort(int a[],int low,int high)
{

  if(low<high)
  {
  int   pivotindex = partition(a,low,high);
   quicksort(a,low,pivotindex -1);
   quicksort(a,pivotindex+1,high);

  }  
}
void display(int a[],int size)
{
    for(int i = 0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[] = {11,13,7,12,16,9,24,5,10,3};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<"Before sorting"<<endl;
     display(a,size);
    quicksort(a,0,size-1);
    cout<<"After sorting"<<endl;
    display(a,size);

}

