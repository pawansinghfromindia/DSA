#include <bits/stdc++.h>
using namespace std;

/*
Input :
5 
Output :
*
**
***
****
*****

Print a pyramid pattern consisting of n rows.

*/
int main() {
    
    int n; 
    cin >> n;
    
    // one way
    // int invert = n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=invert; j++){
    //         cout << "*";
    //     }
    //     invert--;
    //     cout << endl;
    // }
    
    // another way
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
   
   
    return 0;
}