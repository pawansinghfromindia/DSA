#include <iostream>
using namespace std;
 
int main(){

   int arr[] = {10, 7, 6, 4, 3, 2, 11, 9};
   int target = 9;
   
   int N = sizeof(arr) / sizeof(arr[0]); // Correct
   bool flag = false;
   int index = -1;
   for(int i=0; i<=N-1; i++){
    // Linear Search
    if(arr[i] == target){
        flag = true;
        index = i;
        break;
    }

   }
   if(flag){
    cout << "Yes, found at position " << index + 1;
   }
   else{
    cout << "Not found";
   }
   cout << endl;
   
   
   return 0;
}