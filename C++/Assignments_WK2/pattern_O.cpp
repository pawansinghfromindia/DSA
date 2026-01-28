#include <bits/stdc++.h>
 
using namespace std;
 
/*
Input :
5  
Output :
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
 
Print a diamond pattern 
*/
int main() {
 
    int n;
    cin >> n;
 
    for(int i = 1; i <= n; i++){
        // n-i spaces
        for(int j = 1; j <= n - i; j++ ){
            cout << " ";
        }
        // i stars with spaces
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        
        cout << endl;
    }
 
 
    for(int i = n - 1; i >= 1; i--){
        // n-i spaces
        for(int j = 1; j <= n - i; j++ ){
            cout << " ";
        }
        // i stars with spaces
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        
        cout << endl;
    }
    
    return 0;
}