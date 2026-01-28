#include <bits/stdc++.h>
using namespace std;

/*
Input:
5
Output:
5 4 3 2 1
*/
int main() {
    int n;
    cin >> n;
    
    int i = n;
    while(i >= 1){
        cout << i << " ";
        i = i - 1;
    }
    
    return 0;
}