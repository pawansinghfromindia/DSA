#include <bits/stdc++.h>
 
using namespace std;
 
/*
Input :
5  
Output :
***** *****
****   ****
***     ***
**       **
*         *
**       **
***     ***
****   ****
***** *****
 
Print a inverted diamond pattern 
*/
int main() {
 
    int n;
    cin >> n;
    
    
    // Inverted
    for(int i=n; i>=1; i--){
        // stars
        for(int j=1; j<=i; j++){
            if(j==i){
                cout << "* ";
            }
            else{
                cout << "*";
            }
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
    
    // normal
    for(int i=2; i<=n; i++){
        // stars
        for(int j=1; j<=i; j++){
            if(j==i){
                cout << "* ";
            }
            else{
                cout << "*";
            }
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