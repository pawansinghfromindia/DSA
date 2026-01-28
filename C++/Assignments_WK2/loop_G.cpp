#include <bits/stdc++.h>
using namespace std;

/*
Input :
5
-2 0 3 7 -5
Output :
Number of positive integers -> 2
Number of negative integers -> 2
Number of even integers     -> 2
Number of odd integers      -> 3

Zero is neither positive nor negative.
Zero is considered an even number.
*/
int main() {
    
    int n; 
    cin >> n;
    
    int positive = 0;
    int negative = 0;
    int even = 0;
    int odd = 0;
    
    int i = 1;
    while(i <= n){
        long long val; 
        cin >> val;
        // +ve or -ve
        if(val < 0){
            negative++;
        }
        else if(val > 0){
            positive++;
        }
        // even or odd
        if(val%2==0){
            even++;
        }
        else{
            odd++;
        }
        
        i = i + 1;
    }
    cout << positive << endl;
    cout << negative << endl;
    cout << even << endl;
    cout << odd << endl;
    
    return 0;
}