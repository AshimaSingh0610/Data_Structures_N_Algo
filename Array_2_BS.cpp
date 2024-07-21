#include<iostream>
using namespace std;

//!Binary Search
//! Iterative
// int binarySearch(int arr[],int start,int end,int x)
// {
//     while(start<=end)
//     {
//         int mid = start + ((end-start)/2);          //To avoid Interger Overflow

//         if(arr[mid]==x)
//             return mid;

//         if(arr[mid]<x) 
//             start = mid + 1;

//         else 
//             end = mid -1;
//     }

//     return -1;
// }

// int main(void)
// {
//     int arr[] ={1,2,3,4,5,6,7,8,9,10};
//     int x = 10;
//     int N = sizeof(arr)/sizeof(arr[0]);

//     int result = binarySearch(arr,0,N-1,x);

//     (result==-1) ? cout<<"Element not found" : cout<< "Element is present at index "<<result;
// }

//! Recursion 
//! Iterative Approach: Uses a while loop with start <= end to continuously narrow the search space until the element is found or the search space is exhausted.
//! Recursive Approach: Relies on recursive function calls and a base case to manage the search space. Recursion depth handles narrowing of the search space without a loop.
//* NOt use while(start<=end) in Recursion

int binarySearch(int arr[],int start,int end, int x)
{
    //!Use this instead while ----------------------------
    if (start > end) {
        return -1;  // Base case: element not found
    }
    //!------------------------------------------------

    int mid = start + ((end-start)/2);

        if(arr[mid]==x)
            return mid;

        if(arr[mid]<x)
            binarySearch(arr,mid+1,end,x);
        else
            binarySearch(arr,start,mid-1,x);
}

int main(void)
{
    int arr[]={1,2,3,4,5,16,18,19,20};
    int x = 19;
    int N = sizeof(arr)/sizeof(arr[0]);

    int result = binarySearch(arr,0,N-1,x);

    (result == -1) ? cout<<"Element not Found" : cout<<"Element at index "<<result;

}

//* GFG => Given a sorted array arr and an integer k, find the position(0-based indexing) at which k is present in the array using binary search.
// https://www.geeksforgeeks.org/problems/binary-search-1587115620/1

//!BS1 => 