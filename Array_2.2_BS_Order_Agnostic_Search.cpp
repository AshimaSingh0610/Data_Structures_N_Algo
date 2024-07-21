//!https://www.geeksforgeeks.org/order-agnostic-binary-search/
//!Given an array, arr[ ] of size N and an element X and the array is sorted in any 
//!order(ascending descending), the task is to find whether the element x is present in the array or not. If yes,
//! then print its index, else print -1.

//! Order Not known => Asending hai ki Descending order mein pata nahi hai

#include<iostream>
using namespace std;

//! Iterative
//Binary Search func

int binarySearch(int arr[],int start,int end,int x)
{
    bool isAsc = arr[start]<arr[end];           //Ascending Order

        while(start<=end)
        {
            int mid = start + (end-start)/2;

            if(arr[mid]==x)
                return mid;


            //!Doing BS for ascending order
            if(isAsc==true)
            {
                if(arr[mid]<x)  start=mid+1;

                else end = mid-1;
            }

            //!Doing BS for descending Order

            else
            {
                if(arr[mid]<x) end = mid-1;

                else start = mid+1;
            }
        }

    return -1;
}


//Main func

int main(void)
{
    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    int x = 10;
    int N = sizeof(arr)/sizeof(arr[0]);

    int result = binarySearch(arr,0,N-1,x);

    (result==-1) ? cout<<"Element not found" : cout<< "Element is present at index "<<result;
}
