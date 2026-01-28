#include <bits/stdc++.h>
using namespace std;

/*
Input :
5
Output :
120

Factorial of 5 is 1*2*3*4*5 = 120
*/
int main() {
    
    int n; 
    cin >> n;
    
    long long factorial = 1;
    int i = 1;
    while(i <= n){
        factorial *= i;
        i = i + 1;
    }
    cout << factorial << endl;
    
    return 0;
}