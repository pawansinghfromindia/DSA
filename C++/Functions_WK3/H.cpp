#include <bits/stdc++.h>

using namespace std;

/*
Find the number of 0s digits in N 
Input :
102030
Output :
3
*/

int countZeroN(long long n){
    int count = 0;
    if(n==0){
        return 1;
    }
    while(n>0){
        if(n%10==0){
            count++;
        }
        n = n/10;
    }
    
    return count;
}

int main() {

    long long N;
    cin >> N;

    cout << countZeroN(N);
    
    cout << endl;

}