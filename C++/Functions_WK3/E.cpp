#include <bits/stdc++.h>

using namespace std;

/*
Factorial n! = n*(n-1)*(n-2)*....*1.
Input :
5
Output :
120

*/

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    
    return fact;
}


int main() {

    int N;
    cin >> N;

    cout << factorial(N);


}