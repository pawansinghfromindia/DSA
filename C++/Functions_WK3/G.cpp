#include <bits/stdc++.h>

using namespace std;

/*
Print all prime numbers from 1 to N in increasing order
by writing a function that takes N as a parameter and prints the require primes.
Input :
10
Output :
2 3 5 7

*/
int countFactors(int n){
    int count = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    return count;
}

bool isPrime(int n){
    return countFactors(n)==2;
}


int main() {

    int N;
    cin >> N;

    int count = 0;
    for(int i=1; i<=N; i++){
        if(isPrime(i)){
            count++;
            cout << i << " ";
        }
    }
    
    cout << endl;

}