#include <bits/stdc++.h>
 
using namespace std;
 
/*
Input :
7  
Output :
* * * * * * * 
 *         * 
  *       * 
   *     * 
    *   * 
     * * 
      * 
 
Print a inverted hollow triangle pattern consisting of n rows
*/
int main() {
 
    int n;
    cin >> n;
 
 
    for(int i = n; i >= 1; i--){
        // n-i spaces
        for(int j = 1; j <= n - i; j++ ){
            cout << " ";
        }
        // i stars with spaces
        for(int j = 1; j <= i; j++){
            //for hollow, boundary
            if(i==1 or i==n or j==1 or j==i){
                if(j==i){
                    cout << "*";
                }
                else{
                    cout << "* ";
                }
            }
            else{
                cout << "  ";
            }
            
        }
        
        cout << endl;
    }
    
    return 0;
}