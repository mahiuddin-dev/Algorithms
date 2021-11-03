#include <iostream>

using namespace std;

// Hashing search algorithm
int HashingSearch(int *arr, int size, int key);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int index = HashingSearch(arr, size, key);
    if (index == -1) {
        cout << "Key not found" << endl;
    } else {
        cout << "Key found at index " << index << endl;
    }  
    return 0;
}

// Hashing search algorithm
int HashingSearch(int *arr, int size, int key) {
    int hash_size = size / 2;
    int hash_index = key % hash_size;
    int i = 0;
    while (arr[hash_index] != key && i < hash_size) {
        hash_index = (hash_index + 1) % hash_size;
        i++;
    }
    if (i == hash_size) {
        return -1;
    }
    return hash_index;
}