#include <bits/stdc++.h>

using namespace std;

/*
Write a function that prints all factors of N in increasing order.
Input :
12
Output :
12 6 4 3 2 1

*/

void printFactors(int N) {
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            cout << i << " ";
        }
    }
}

int main() {

    int N;
    cin >> N;

    printFactors(N);

}