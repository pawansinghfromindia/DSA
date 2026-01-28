#include <bits/stdc++.h>
using namespace std;

/*
Input :
10
Output :
2 4 6 8 10
*/
int main() {
    int n;
    cin >> n;
    
    int i = 1;
    while(i <= n){
        if(i%2 == 0){
            cout << i << " ";
        }
        i = i + 1;
    }
    
    return 0;
}