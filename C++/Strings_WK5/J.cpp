#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

/*
J. Toggle Case
For every character in the word:
- if it is lowercase, convert it to uppercase;
- if it is uppercase, convert it to lowercase.
Input :
AbCdE
Output :
aBcDe
*/

int main() {


    string s;
    cin >> s;

  
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' and s[i] <= 'z'){
            s[i] = char(s[i] - 32);
        }
        else if(s[i] >= 'A' and s[i] <= 'Z'){
            s[i] = char(s[i] + 32);
        }
        else{
            // do nothing
        }
    }
    cout << s << endl;

    return 0;

}