#include <bits/stdc++.h>
using namespace std;

/*
Input :
6 
Output :
******
*    *
*    *
*    *
*    *
******

Print an n×n hollow square of stars.

*/
int main() {
    
    int n; 
    cin >> n;
    
  
    for(int i=1; i<=n; i++){
        //boundary
        for(int j=1; j<=n; j++){
            if(i==1 or i==n or j==1 or j==n){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    
   
   
    return 0;
}