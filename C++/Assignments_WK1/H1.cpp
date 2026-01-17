#include <bits/stdc++.h>
using namespace std;

/*
InputCopy
6 4
OutputCopy
6 + 4 = 10
6 - 4 = 2
6 * 4 = 24
6 / 4 = 1
6 % 4 = 2

*/

int main() {
      
  int m,n;
  cin >> m >> n;
  
  cout << to_string(m) + " + " + to_string(n) + " = " + to_string(m+n) << endl;
  cout << to_string(m) + " - " + to_string(n) + " = " + to_string(m-n) << endl;
  cout << to_string(m) + " * " + to_string(n) + " = " + to_string(m*n) << endl;
  cout << to_string(m) + " / " + to_string(n) + " = " + to_string(m/n) << endl;
  cout << to_string(m) + " % " + to_string(n) + " = " + to_string(m%n) << endl;
  
}


