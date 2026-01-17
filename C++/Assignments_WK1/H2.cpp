#include <bits/stdc++.h>
using namespace std;

/*
Input
1000000000
1000000000
Output
1000000000 + 1000000000 = 2000000000

1000000000 - 1000000000 = 0

1000000000 * 1000000000 = 1000000000000000000

1000000000 / 1000000000 = 1

1000000000 % 1000000000 = 0

Important points : Story of long long

long vs int -> long (-10¹⁸ to +10¹⁸) is int only which stores the values outside the range of  integer( range -10⁹ to +10⁹)

long vs long long -> long long (-10¹⁸ to +10¹⁸) is across the plaform 64 bit while long depends on system.

long and  long int are same similarly we can also write long long as long long int 

*/

int main() {
      
  long long  m,n;
  cin >> m >> n;
  
  cout << to_string(m) + " + " + to_string(n) + " = " + to_string(m+n) << endl;
  cout << to_string(m) + " - " + to_string(n) + " = " + to_string(m-n) << endl;
 
  
//   long  result = m * n;
//   cout << to_string(m) + " * " + to_string(n) + " = " + to_string(result) << endl;
// Even though both m,n ranges in int range(10⁹) their multiplication will be long but before assigning it the multiplication overflows So we can't do by taking m,n as int that's why we have to take it as long.
  
  cout << to_string(m) + " * " + to_string(n) + " = " + to_string(m*n) << endl;
  cout << to_string(m) + " / " + to_string(n) + " = " + to_string(m/n) << endl;
  cout << to_string(m) + " % " + to_string(n) + " = " + to_string(m%n) << endl;
  
}


