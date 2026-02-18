#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

/*
K. Strong Password
A password is considered strong if all of the following conditions satisfied:
It consists of exactly 10 characters.
- It contains at least one lowercase English letter.
- It contains at least one uppercase English letter.
- It contains at least one digit.
- It contains at least one special character.
Print Strong if the password is strong. Otherwise, print Weak.
Input :
Abcdef1@23
Output :
strong
*/

int main() {


    string password;
    cin >> password;

    int lowercase_cnt = 0;
    int uppercase_cnt = 0;
    int digit_cnt = 0;
    int special_cnt = 0;
    int length = password.length();
    for(int i=0; i<length; i++){
        if(password[i] >= 'a' and password[i] <= 'z'){
            lowercase_cnt++;
        }
        else if(password[i] >= 'A' and password[i] <= 'Z'){
            uppercase_cnt++;
        }
        else if(password[i] >= '0' and password[i] <= '9'){
            digit_cnt++;
        }
        else{
            special_cnt++;
        }
    }
    
    if( lowercase_cnt >= 1 and uppercase_cnt >= 1 and digit_cnt >= 1 and special_cnt >= 1 and length == 10){
        cout << "Strong";
    }
    else{
        cout << "Weak";
    }
    cout << endl;

    return 0;

}