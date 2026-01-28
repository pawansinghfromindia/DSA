#include <bits/stdc++.h>
using namespace std;

/*
Input :
5 6
Output :
******
******
******
******
******


Print n lines. Each line must contain exactly two stars ('**').

*/
int main() {
    
    int n, m; 
    cin >> n >> m;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout << "*";
        }
        cout << endl;
    }
   
   
    return 0;
}