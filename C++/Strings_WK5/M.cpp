#include <bits/stdc++.h>
using namespace std;

/*
M. Palindrome
A string is called a palindrome if it reads the same from left to right and from right to left.
Print YES if S is a palindrome, otherwise print NO
Input :
racecar
Output :
YES
*/

int main() {


    string s;
    cin >> s;

    int len = s.length();
    
    int start = 0;
    int end = len-1;
    int flag = 1;
    while(start < len){
        if(s[start] == s[end]){
            start++;
            end--;
        }
        else{
            flag = 0;
            break;
        }
    }
    if(flag == 0){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
    cout << endl;

    return 0;

}