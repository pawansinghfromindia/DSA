#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

/*
H. Remove Character
remove all occurrences of x  from the string s  and print the resulting string
Print the string obtained after removing all occurrences of x from s
Input :
aaaa
a
Output :
''
*/

int main() {


    string s;
    cin >> s;

    char x;
    cin >> x;

    // s.erase(remove(s.begin(), s.end(), x), s.end());
    // cout << s << endl;
    
    string s2 = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] != x){
            s2 += s[i];
        }
    }
    cout << s2 << endl;

    return 0;

}