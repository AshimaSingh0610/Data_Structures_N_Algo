//!Given a sorted array arr[] with possibly duplicate elements, the task is to
//!find indexes of the first and last occurrences of an element x in the given array. 
//!https://www.geeksforgeeks.org/find-first-and-last-positions-of-an-element-in-a-sorted-array/


//!--------------------------------------------------------------------------------------------------------------
//!Brute Force =>
//! The idea to solve this problem is iterate on the elements of given array and check given elements in an array and keep track of first and last occurrence of the found element’s index.

//!Below are the steps to implement the above idea:

// !Loop Chalana:
// *for i = 0 to n-1: Hum ek loop chalate hain jo 0 se le kar n-1 tak jata hai.
// !Variable Initialization:
// *first = -1 aur last = -1: Yeh do variables ko initialize karte hain -1 se. Yeh indicate karta hai ki ab tak humein element nahi mila.
// !Element Ko Dhundhna:
// *Jab hum element ko pehli baar paate hain, to hum first = i update karte hain.
// *Har baar jab humein element milta hai, hum last = i update karte hain.
// !Print Karna:
// *Loop ke baad, hum first aur last ko print karte hain.


// #include <iostream>
// using namespace std;

// // Function jo pehla aur aakhri occurrence dhoondti hai
// void findFirstAndLast(int arr[], int n, int x)
// {
//     int first = -1, last = -1; // Pehle aur aakhri position ko initialize karte hain -1 se
//     for (int i = 0; i < n; i++) { // Array ke har element pe iterate karte hain
//         if (x != arr[i]) // Agar current element x ke barabar nahi hai, toh continue
//             continue;
//         if (first == -1) // Agar yeh pehli baar x mila, toh first ko update karte hain
//             first = i;
//         last = i; // Har baar jab x milta hai, last ko update karte hain
//     }
//     if (first != -1) // Agar x array mein mila ho, toh first aur last position print karte hain
//         cout << "First Occurrence = " << first
//              << "\nLast Occurrence = " << last;
//     else // Agar x array mein nahi mila, toh "Not Found" print karte hain
//         cout << "Not Found";
// }

// // Driver code jo function ko test karta hai
// int main()
// {
//     int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 }; // Ek sorted array define karte hain
//     int n = sizeof(arr) / sizeof(int); // Array ka size nikalte hain
//     int x = 8; // Element jiska occurrence dhoondna hai
//     findFirstAndLast(arr, n, x); // Function ko call karte hain
//     return 0; // Program successful khatam hota hai
// }

//! ---------------------------------------------------------------------------------

//! Efficient =>  Binary Search

//*First Occurance
#include <iostream>
using namespace std;

int first(int arr[],int start,int end,int x)
{
    int res = -1;
    while(start<=end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid]==x)
        {
            res = mid;
            end = mid-1;
        }
        else if(arr[mid]<x)  
            start = mid+1;
        else 
            end = mid-1;
    }

    return res;

}

//* Last Func
int last(int arr[],int start,int end,int x)
{
    int res = -1;
    while(start<=end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid]==x)
        {
             res = mid;
            start = mid+1;
        }
        else if(arr[mid]<x)  
            start = mid+1;
        else 
            end = mid-1;

    }

    return res;
}

int main(void)
{
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int x = 8;

    int first_occur= first(arr, 0, n - 1, x);
    int last_occur = last(arr, 0, n - 1, x);

    cout<<"First Occurrence is at "<<first_occur<<endl;
    cout<<"Last Occurrence is at "<<last_occur;
}


