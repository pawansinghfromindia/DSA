#include <bits/stdc++.h>
using namespace std;

/*
L. Reverse
You are given a string S  consisting only of lowercase English letters.
Print the reversed string.
Input :
hello
Output :
olleh
*/

int main() {


    string s;
    cin >> s;

    for(int i=s.length()-1; i>=0; i--){
        cout << s[i];
    }
    cout << endl;

    return 0;

}