#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int beg,int mid,int end)
{

}
void mergesort(int a[],int beg,int end)
{
    while(beg<end)
    {
        int mid = (beg+end )/2;
        mergesort(a,beg,mid);   
        mergesort(a,mid+1,end);
        merge(a,beg,mid,end);
    }

}
int main ()
{
    int a[] = {5, 12, 7, 1, 13, 2, 23, 11, 18};
    int size = sizeof(a)/sizeof(a[0]);
    mergesort(a,0,size-1);
    
}