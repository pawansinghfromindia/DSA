#include <bits/stdc++.h>
using namespace std;

/*
Input :
1950
Output :
591

Sum of 1234 is 4+3+2+1 = 10

*/
int main() {
    
    long long n; 
    cin >> n;
    
    long long reverse = 0;
    while(n != 0){
        reverse = (reverse*10) + n%10;
        n = n/10;
    }
    cout << reverse;
    
    return 0;
}