#include <bits/stdc++.h>

using namespace std;

/*
Print a shifted pyramid of height N
Each row must be printed on a new line.
Do not print trailing spaces at the end of lines.
Input :
5
Output :
x
 xx
  xxx
   xxxx
    xxxxx

        space    star
i = 1     0       1
i = 2     1       2
i = 3     2       3
i = 4     3       4
i = 5     4       5
         i-1      i
*/

void shiftedPyramid(int n) {
    for(int i=1; i<=n; i++){
        // space
        for(int j=1; j<=i-1; j++){
            cout << " ";
        }
        
        // star
        for(int j=1; j<=i; j++){
            cout << "x";
        }
        
        cout << endl;
    }
}

int main() {

    int N;
    cin >> N;

    shiftedPyramid(N);

}