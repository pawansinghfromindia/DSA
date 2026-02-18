#include <bits/stdc++.h>

using namespace std;

/*
D. Convert to Lowercase
Print the lowercase version of the given character
Input :
Z
Output :
z
*/

int main() {

    char ch;
    cin >> ch;

    if(ch >= 'A' and ch <= 'Z'){
        cout << char(ch + 32);
    }
    else if(ch >= 'a' and ch <= 'z'){
        cout << ch;
    }
    else{
        cout << "can't be converted to Lowercase";
    }

    cout << endl;

    return 0;

}