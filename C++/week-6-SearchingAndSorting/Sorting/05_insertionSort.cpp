#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++) {
        int key = arr[i];      // element to insert
        int j = i - 1;

        // Move elements greater than key one position ahead
        while (j >= 0 and arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;      // place key in correct position
    }
}

int main(){

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted Array" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}