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

Given two integers n and m. Print a hollow rectangle of dimensions n×m.
*/
int main() {
    
    int n, m; 
    cin >> n >> m;
    
  
    for(int i=1; i<=n; i++){
        //boundary
        for(int j=1; j<=m; j++){
            if(i==1 or i==n or j==1 or j==m){
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