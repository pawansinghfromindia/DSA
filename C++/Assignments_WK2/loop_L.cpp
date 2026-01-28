#include <bits/stdc++.h>
using namespace std;

/*
Input :
1234
Output :
10

Sum of 1234 is 4+3+2+1 = 10

*/
int main() {
    
    long long n; 
    cin >> n;
    
    long long sum = 0;
    while(n != 0){
        sum += n%10;
        n = n/10;
    }
    cout << sum;
    
    return 0;
}