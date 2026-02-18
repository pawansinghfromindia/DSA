#include <bits/stdc++.h>

using namespace std;

/*
E. Brothers
Print YES if they are brothers, otherwise print NO.
Input :
Alice Singh
Bob Singh
Output :
YES
*/

int main() {


    string firstName1, lastName1;
    cin >> firstName1 >> lastName1;

    string firstName2, lastName2;
    cin >> firstName2 >> lastName2;

    if (lastName1 == lastName2) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    cout << endl;

    return 0;

}