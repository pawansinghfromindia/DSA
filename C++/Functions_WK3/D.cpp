#include <bits/stdc++.h>

using namespace std;

/*
Print Prime or Not Prime.
Input :
17
Output :
Prime

*/

int countFactors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

void isPrime(int N) {
    if (countFactors(N) == 2) {
        cout << "Prime" << endl;
    }
    else {
        cout << "Not Prime" << endl;
    }
}

void printPrime(int N) {
    int count = 0;

    if (N == 1) {
        cout << "Not Prime" << endl;
        return;
    }

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            count++;
        }
        if (count > 2) {
            cout << "Not Prime" << endl;
            return;
        }
    }
    cout << "Prime" << endl;
}

int main() {

    int N;
    cin >> N;

    //isPrime(N);
    printPrime(N);



}