#include<iostream>
using namespace std;

int binarysearch(int a[],int k,int start,int end)
{
    if(start>end)
    return -1;

    int mid=start+(end-start)/2;

    if(a[mid]==k)
    return mid;
    
    if(a[mid]>k)
    {
        // go left
       return ( binarysearch(a,k,start,mid-1));
    }
    else
    // go right
    return (binarysearch(a,k,mid+1,end));
}



int main()
{
    int a[5]={1,2,3,4,5};
   int start=0;
   int n=5;
   int end=n-1;
    int k=4;
    cout<<binarysearch(a,k,start,end);
}