#include<iostream>
using namespace std;

//!Binary Search
//! Iterative
int binarySearch(int arr[],int start,int end,int x)
{
    while(start<=end)
    {
        int mid = start + ((end-start)/2);          //To avoid Interger Overflow

        if(arr[mid]==x)
            return mid;

        if(arr[mid]<x) 
            start = mid + 1;

        else 
            end = mid -1;
    }

    return -1;
}

int main(void)
{
    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    int x = 10;
    int N = sizeof(arr)/sizeof(arr[0]);

    int result = binarySearch(arr,0,N-1,x);

    (result==-1) ? cout<<"Element not found" : cout<< "Element is present at index "<<result;
}

//!BS1 => 