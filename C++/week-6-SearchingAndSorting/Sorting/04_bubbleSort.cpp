#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    // Compare adjacent elements and swap if they are in the wrong order.
    // After each pass, the largest element bubbles to the end.
    for (int i = n-1; i >= 1; i--) {
        // after every pass, the largest element of unsorted part will reach at the end
        bool flag = false;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                flag = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if(flag==false){
            break;
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