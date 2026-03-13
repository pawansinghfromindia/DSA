#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {2, 3, 4, 6, 7, 9, 11};
    int target = 6;
    
    int N = sizeof(arr) / sizeof(arr[0]); // Correct
    bool flag = false;
    int index = -1;
    int counter = 0;
    
    int left = 0;
    int right = N-1;

    while(left<=right){
        // Binary Search
        int mid = (left+right)/2;

        counter++;
        if(arr[mid] == target){
            flag = true;
            index = mid;
            break;
        }
        else if(arr[mid] < target){
            // search in right
            left = mid + 1;
        }
        else{
            // search in left
            right = mid - 1;
        }
    }

    if(flag){
    cout << "loop: " << counter << " Yes, found at position " << index + 1;
   }
   else{
    cout << "loop: " << counter << " Not found";
   }
   cout << endl;
   
    return 0;
}
