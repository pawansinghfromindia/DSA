#include <bits/stdc++.h>
using namespace std;

/*
Input :
1950
Output :
0591

Reverse of 12349 is 94321

*/
int main() {
    
    long long n; 
    cin >> n;
    
    if(n==0){
        cout << n;
    }
    while(n!=0){
        cout << n%10;
        n = n/10;
    }

    
    // long long reverse = 0;
    // while(n!=0){
    //     reverse = (reverse*10) + n%10;
    //     n = n/10;
    // }
    // cout << reverse << endl;
    
    return 0;
}