#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int a[] ={1,2,34,44};
    int low = 0,siz =sizeof(a)/sizeof(a[0]),high = siz-1,mid;
    int k ;
    cin>>k;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(a[mid]==k)
        {
            cout<<"Found at "<<mid+1<<endl;
            break;
        }
        else if(a[mid]>k)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    } 


}