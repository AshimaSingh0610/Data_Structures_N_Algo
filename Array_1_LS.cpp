#include<iostream>
using namespace std;

//Linear Search //TC => O(n)
int linearSearch(int arr[],int N,int x)
{
    for(int i=0;i<N;i++)
    {
    if(arr[i]==x) 
       return i;
    }
     return -1;
}
    int main()
    {
        int arr[] ={1,6,8,9,19};
        int x = 19;                                       //Key to find
        int N = sizeof(arr)/sizeof(arr[0]);              //Num of elements  of array 
        //Function Call
        int result = linearSearch(arr,N,x);

        (result == -1)? cout<<"Element not present in array" : cout<<"Element is at index  " << result; 
        return 0;
    }





