#include<bits/stdc++.h>
using namespace std;
quicksort(){

};
int main ()
{
    int n,i,h;
    cin>>n;
    int a [n];
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quicksort(a,n-1);
    int pivot=a[0]; //first element from the array
    h = a[n-1];// last element from the array
    
}