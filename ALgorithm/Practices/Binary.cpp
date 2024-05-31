#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[5]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int k = 4;
    int low = 0 , high = n-1;
    while(low <=high)
    {
        int mid = (low+high)/2;
        if(a[mid]== k)
        {
            cout<<"Element found at index "<<mid;
            break;
        }
        else if(a[mid]<k)
         low = mid +1;
        else
            high = mid -1;
    }
}