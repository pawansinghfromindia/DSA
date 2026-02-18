#include <bits/stdc++.h>

using namespace std;

/*
N. Count Words
count the number of words in S
Print one integer — the number of words in S.
Input :
hello world this is CP
Output :
5
*/

int main() {


    string s;
    getline(cin, s);

    int count = 0;
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == ' ') {
            count++;
        }
    }

    cout << count + 1 << endl;

    return 0;

}