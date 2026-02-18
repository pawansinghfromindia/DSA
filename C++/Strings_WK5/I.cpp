#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

/*
I. Trim Spaces
Print the string S after removing all spaces.
Input :
abc def g hi
Output :
abcdefghi
*/

int main() {


    string s;
    getline(cin, s);

   
    // int x = ' ';
    // s.erase(remove(s.begin(), s.end(), x), s.end());
    // cout << s << endl;
    // - remove() shifts non-matching chars left and returns a new end.
    // - erase() removes the leftover part
    
    string s2 = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' '){
            s2 += s[i];
        }
    }
    cout << s2 << endl;

    return 0;

}