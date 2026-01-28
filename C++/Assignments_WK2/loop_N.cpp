#include <bits/stdc++.h>
using namespace std;

/*
Input :
121
Output :
Palindrome

A number is called a palindrome if it reads the same forwards and backwards.

*/
int main() {
    
    long long n; 
    cin >> n;
    
    long long temp = n;
    
    long long reverse = 0;
    while(n != 0){
        reverse = (reverse*10) + n%10;
        n = n/10;
    }
    
    if(temp == reverse){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}