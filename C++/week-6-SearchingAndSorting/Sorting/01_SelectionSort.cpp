#include<bits/stdc++.h>
using namespace std;


int main(){

    // SELECTION SORT
    // 1. PICK the MIN ELEMENT FROM THE UNSORTED PART 
    // 2. SWAP it to first element of unsorted array
    // 3. Update the boundary
    // 4. Repeat it until array length

    int N;
    cin >> N;

    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    for(int i=0; i<N; i++){
        // find the min in unsorted part
        int min = arr[i];
        int loc = i;
        for(int j=i+1; j<N; j++){
            if(arr[j] < min ){
                min = arr[j];
                loc = j;
            }
        }
        //swap(arr[i], arr[loc]);
        int temp = arr[i];
        arr[i] = arr[loc];
        arr[loc] = temp;
       
        for(int k=0; k<N; k++){
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    
    // Print the sorted array
    for(int k=0; k<N; k++){
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}