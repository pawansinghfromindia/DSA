#include <bits/stdc++.h>
using namespace std;

/*
Print YES if the character is a vowel, otherwise print NO.
Input :
a
Output :
YES
*/


void isVowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main() {
    
    char ch;
    cin >> ch;
    
    isVowel(ch);

}
