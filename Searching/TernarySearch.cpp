#include <iostream>

using namespace std;

// Ternary Search algorithm
int ternarySearch(int arr[], int l, int r, int x){
    if (r >= l){
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (arr[mid1] == x) return mid1;
        if (arr[mid2] == x) return mid2;   
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
    int result = ternarySearch(arr, 0, n-1, x);
    if (result != -1)
        cout << "Element is present at index " << result;
    else
        cout << "Element is not present in array";
    return 0;
}
