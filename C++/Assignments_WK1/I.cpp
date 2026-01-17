#include <bits/stdc++.h>
using namespace std;
 
/*
Input
169 125
Output
14
 
169%10 = 9 
125%10 = 5 
sum = 9 + 5 => 14
*/
 
int main() {
      
  int n,m;
  cin >> n >> m;
  
  cout << (n%10) + (m%10) << endl; 
  
}