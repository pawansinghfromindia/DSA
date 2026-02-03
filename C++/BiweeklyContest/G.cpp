#include <bits/stdc++.h>

using namespace std;

/*
find the number of digits equal to 0 in the decimal representation of N
Print a single integer — the count of zeros in N

Input :
102030
Output :
3
*/

int countZeroInN(long long n) {
    int zeroCount = 0;
    if(n==0){
        return 1;
    }
    while(n>0){
        if(n%10==0){
            zeroCount += 1;
        }
        n = n/10;
    }
    
    return zeroCount;
}

int main() {

    long long N;
    cin >> N;

    cout << countZeroInN(N) << endl;

}