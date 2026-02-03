#include <bits/stdc++.h>

using namespace std;

/*
If the number is divisible by 3, print Fizz.
If the number is divisible by 5, print Buzz.
If the number is divisible by both 3 and 5, print FizzBuzz.
Otherwise, print the number itself.
Input :
15
Output :
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
*/

void printFizzBuzz(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 and i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        }
        else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        }
        else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        }
        else {
            cout << i << endl;
        }
    }
    
}

int main() {

    int N;
    cin >> N;

    printFizzBuzz(N);

}