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
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
   
   
    return 0;
}