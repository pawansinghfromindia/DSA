#include <bits/stdc++.h>
 
using namespace std;
 
/*
Input :
5 
Output :
* 
* * 
*   * 
*     * 
*       * 
*     * 
*   * 
* * 
* 
 
Print the Hollow inverted vertical triangle of stars
*/
int main() {
 
    int n;
    cin >> n;
 
 
    for (int i = 1; i <= n; i++) {
 
        for (int j = 1; j <= i; j++) {
            if( i==1 or j==1 or j==i ){
                cout << "* ";
            }
            cout << "  ";
        }
        cout << endl;
    }
    
    for (int i = n-1; i >= 1; i--) {
 
        for (int j = 1; j <= i; j++) {
            if( i==1 or j==1 or j==i ){
                cout << "* ";
            }
            cout << "  ";
        }
        cout << endl;
    }
 
 
 
    return 0;
}
