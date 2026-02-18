#include <bits/stdc++.h>

using namespace std;

/*
G. Replace Character
replace every occurrence of c1  in the string s with c2 and print the resulting string.
Input :
abacaba
a b
Output :
bbbcbbb
*/

int main() {


    string s;
    cin >> s;

    char c1, c2;
    cin >> c1 >> c2;


    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c1) {
            s[i] = c2;
        }
    }
    cout << s << endl;

    return 0;

}