#include <bits/stdc++.h>

using namespace std;

/*
C. Lowercase, Uppercase, Digit or Special
Print exactly one of the following: Lowercase | Uppercase | Digit | Special
Input :
a
Output :
Lowercase 
*/

int main() {

    char ch;
    cin >> ch;

    if (ch >= 'a' and ch <= 'z') {
        cout << "Lowercase";
    }
    else if (ch >= 'A' and ch <= 'Z') {
        cout << "Uppercase";
    }
    else if (ch >= '0' and ch <= '9') {
        cout << "Digit";
    }
    else {
        cout << "Special";
    }

    cout << endl;

    return 0;

}