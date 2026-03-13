#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    // Compare adjacent elements and swap if they are in the wrong order.
    // After each pass, the largest element bubbles to the end.
    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
            
    }
}

int main(){

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted Array" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}