#include <bits/stdc++.h>

using namespace std;

/*
Factorial n! = n*(n-1)*(n-2)*....*1.
nCr = n!/r!*(n−r)!
Input :
5 2
Output :
10

*/

long long factorial(int n) {
    long long fact = 1;
    if(n==0){
        return 1;
    }
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    
    return fact;
}


int main() {

    int n, r;
    cin >> n >> r;

    cout << factorial(n) / (factorial(r)*factorial(n-r));


}