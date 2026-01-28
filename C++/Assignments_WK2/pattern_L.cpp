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
 
Print a triangle pattern consisting of n rows.
*/
int main() {
 
    int n;
    cin >> n;
 
 
    for (int i = 1; i <= n; i++) {
 
        // spaces n-i
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        // i start with spaces
        for(int j = 1; j <= i; j++){
            if(j == i){
                cout << "*";
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }
    
 
 
    return 0;
}