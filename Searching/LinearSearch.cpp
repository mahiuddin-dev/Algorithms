#include <iostream>

using namespace std;

// Linear Search function
int LinearSearch(int arr[], int n, int key){
    // Loop through the array
    for (int i = 0; i < n; i++){
        // If the key is found
        if (arr[i] == key){
            // Return the index
            return i;
        }
    }
    // If the key is not found
    return -1;
}

int main(){
    int arr[] = { 2, 3, 4, 10, 40 };
    int key, position;
    key = 2;
    int size = sizeof(arr) / sizeof(arr[0]); 

    position = LinearSearch(arr,size,key);

     (position == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << position;    

    return 0;
}