#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a [5] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int low = 0, high = n-1;
    int k = 4;
    while(low<= high)
    {
       int  mid1 = low + (high - low)/3;
       int mid2 = high - (high - low)/3;
       if(a[mid1]==k)
         {
              cout<<"Element found at index "<<mid1;
              break;
         }
         if(a[mid2]==k)
            {
                  cout<<"Element found at index "<<mid2;
                  break;
            }
            else if(a[mid1]>k)
                high = mid1 -1;
            else if(a[mid2]<k)
                low = mid2 +1;
            else
            {
                low = mid1 +1;
                high = mid2 -1;
            }
    }
}
