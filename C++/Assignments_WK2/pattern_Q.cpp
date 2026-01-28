#include <bits/stdc++.h>
 
using namespace std;
 
/*
Input :
7  
Output :
*            *
**          **
***        ***
****      ****
*****    *****
******  ******
**************
 
Print a crown pattern consisting of n rows.
    " "  "*" " "
i=1  1   12   1
i=1  2   10   2
i=1  3    8   3
i=1  4    6   4
i=1  5    4   5
i=1  6    2   6
i=1  7    0   7

stars = i  
space = 2n - 2i
stars = i
*/
int main() {
 
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        // stars
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        // spaces
        for(int j=1; j<=2*n-2*i; j++){
            cout << " ";
        }
        
        // stars
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}