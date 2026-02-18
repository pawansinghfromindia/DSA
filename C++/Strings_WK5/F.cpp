#include <bits/stdc++.h>

using namespace std;

/*
F. Lexicographical Order
Determine which word appears first in the dictionary.
Print A if A comes before B
Print B if B comes before A
Print Equal if A=B
.
Input :
apple
apricot
Output :
A
*/

int main() {


    string A, B;
    cin >> A >> B;


    if (A == B) {
        cout << "Equal";
    }
    else if(A < B) {
        cout << "A";
    }
    else {
        cout << "B";
    }

    cout << endl;

    return 0;

}