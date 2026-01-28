#include <bits/stdc++.h>
using namespace std;

/*
Input :
5
Output :
15

The first 5 natural numbers are 1,2,3,4 and 5 and their sum is 15
.
*/
int main() {
    
    int n; 
    cin >> n;
    
    long long sum = 0;
    int i = 1;
    while(i <= n){
        sum += i;
        i = i + 1;
    }
    cout << sum << endl;
    
    return 0;
}