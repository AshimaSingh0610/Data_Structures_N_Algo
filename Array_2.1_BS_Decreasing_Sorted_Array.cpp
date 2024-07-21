//!BS1 => Search on Reverse Sorted Array
//* Given an array arr[] sorted in decreasing order, and an integer X, the task is to check if X is present in the given array or not. If X is present in the array, print its index ( 0-based indexing). Otherwise, print -1.
//* GFG => https://www.geeksforgeeks.org/search-an-element-in-a-reverse-sorted-array/

//!Brute Force => Linear Search
//!Efficient => Binary Search

#include<iostream>
using namespace std;
int bS(int arr[],int start,int end,int x)
{ //*By Recursion
    if(start>end)
        return -1;

    int mid = start + (end-start)/2;
    if(arr[mid]==x)
        return mid;
    
    if(arr[mid]<x)
        bS(arr,start,mid-1,x);

    else
        bS(arr,mid+1,end,x);

}

int main(void)
{
    int arr[]={5,4,3,2,1};
    int x = 3;
    int N = sizeof(arr)/sizeof(arr[0]);

    int res = bS(arr,0,N-1,x);

    (res == -1) ? cout<<"Not Found" : cout<<"At index "<<res;
}