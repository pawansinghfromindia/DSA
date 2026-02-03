#include <bits/stdc++.h>

using namespace std;

/*
Print a rectangle of N rows and M columns using the character ^ such that:
- The border of the rectangle consists of ^ characters.
- The inside of the rectangle consists of spaces.
Each of the N lines must contain exactly M characters.
Input :
4 5
Output :
^^^^^
^   ^
^   ^
^^^^^
*/

void printHollowRectangle(int n, int m) {
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i==1 or i==n or j==1 or j==m){
                cout << "^";
            }
            else{
                cout << " ";
            }
            
        }
        cout << endl;
    }
}

int main() {

    int N, M;
    cin >> N >> M;

    printHollowRectangle(N, M);

}