#include <bits/stdc++.h>
using namespace std;

/*
Print a single digit — the second last digit of N
Input :
42
Output :
4
*/


int print2DigitFromLast(int N){
    N = N/10;
    return N%10;
}

int main() {
    
    int N;
    cin >> N;
    
    cout << print2DigitFromLast(N);

}
