#include <bits/stdc++.h>
using namespace std;

/*
Input :
3 7
Output :
3 4 5 6 7
*/
int main() {
    int L, R;
    cin >> L >> R;
    
  
    while(L <= R){
        cout << L << " ";
        L = L + 1;
    }
    
    return 0;
}