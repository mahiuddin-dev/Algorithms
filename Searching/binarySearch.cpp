#include <iostream>

using namespace std; 

 // Binary search function. It returns location of x in given array arr[l..r] is present, 
// otherwise -1  

int binarySearch(int arr[], int first, int last, int x);

int main() { 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int key = 3;
    
    int n = sizeof(arr) / sizeof(arr[0]); 

    int result = binarySearch(arr,0,n - 1, key); 

    (result == -1) ? cout << "Element is not present in array"
    : cout << "Element is present at position " << result+1; 
    return 0; 
} 

int binarySearch(int arr[], int first, int last, int key) { 

    if (last >= first) { 
        int mid = (last + first) / 2; 

        if (arr[mid] == key) return mid; 

        if (arr[mid] > key) 
            return binarySearch(arr, first, mid - 1, key);  
        return binarySearch(arr, mid + 1,last, key); 
    } 
    return -1; 
} 