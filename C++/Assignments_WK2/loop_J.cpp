#include <bits/stdc++.h>
using namespace std;

/*
Input :
2 5
Output :
32 

2 to the power 5 = 2*2*2*2*2 = 32
x^0 = 1  for any x
The constraints ensure the answer fits in a 64-bit integer.
*/
int main() {
    
    int x, n; 
    cin >> x >> n;
    
    long long power = 1;
    int i = 1;
    while(i <= n){
        power *= x;
        i = i + 1;
    }
    cout << power << endl;
    
    return 0;
}