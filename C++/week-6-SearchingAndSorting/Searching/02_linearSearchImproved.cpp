#include <iostream>
using namespace std;
 
int main(){

   int arr[] = {2, 3, 4, 6, 7, 9, 11};
   int target = 5;
   
   int N = sizeof(arr) / sizeof(arr[0]); // Correct
   bool flag = false;
   int index = -1;
   int counter = 0;

   // If arr is sorted we can improve by early breaking
   for(int i=0; i<=N-1; i++){
    // Linear Search
    counter++;
    if(arr[i] == target){
        flag = true;
        index = i;
        break;
    }
    if(arr[i] > target){
        flag = false;
        break;
    }

   }
   if(flag){
    cout << counter << " Yes, found at position " << index + 1;
   }
   else{
    cout << counter << " Not found";
   }
   cout << endl;
   
   
   return 0;
}