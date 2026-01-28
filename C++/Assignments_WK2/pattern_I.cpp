#include <bits/stdc++.h>
 
using namespace std;
 
/*
Input :
5 
Output :
0
10
010
1010
01010
101010
 
Print a pyramid of n rows. 
The first row contains a single '0'.
From the second row onward, the digits alternate between '1' and '0'.
*/
int main() {
 
    int n;
    cin >> n;
 
 
    // for (int i = 1; i <= n; i++) {
    //     int num;
    //     num = i % 2 != 0 ? 0 : 1;
    //     for (int j = 1; j <= i; j++) {
    //         cout << num;
    //         num = num==1 ? 0 : 1;
    //     }
    //     cout << endl;
    // }
    
    
    for (int i = 1; i <= n; i++) {
        int num = i % 2 == 0 ? 1 : 0;
        for (int j = 1; j <= i; j++) {
            cout << num % 2;
            num++;
        }
        cout << endl;
    }
 
 
 
    return 0;
}
