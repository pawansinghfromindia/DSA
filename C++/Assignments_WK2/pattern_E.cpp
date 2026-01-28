#include <bits/stdc++.h>
using namespace std;

/*
Input :
5 
Output :
*****
*****
*****
*****
*****

Print an n×n square of stars.

*/
int main() {
    
    int n; 
    cin >> n;
    
  
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << "*";
        }
        cout << endl;
    }
    
   
   
    return 0;
}