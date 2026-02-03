#include <bits/stdc++.h>

using namespace std;

/*
Triangle
Dots in the same line must be separated by a single space.
Do not print trailing spaces at the end of lines.
Input :
5
Output :
. . . . .
 . . . .
  . . .
   . .
    .
   . .
  . . .
 . . . .
. . . . .


        space    star with spaces
i = 1     4       1
i = 2     3       2
i = 3     2       3
i = 4     1       4
i = 5     0       5
         n-i      i
*/

void shiftedPyramid(int n) {
    
    //inverted Triangle
    for(int i=n; i>=1; i--){
        // space
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        
        // star
        for(int j=1; j<=i; j++){
            if(j==i){
                cout << ".";
            }
            else{
                cout << ". ";
            }
        }
        
        cout << endl;
    }
    
    //without inverted Triangle
    for(int i=2; i<=n; i++){
        // space
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        
        // star
        for(int j=1; j<=i; j++){
            if(j==i){
                cout << ".";
            }
            else{
                cout << ". ";
            }
        }
        
        cout << endl;
    }
}

int main() {

    int N;
    cin >> N;

    shiftedPyramid(N);

}