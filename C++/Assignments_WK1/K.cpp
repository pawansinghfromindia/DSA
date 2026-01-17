#include <bits/stdc++.h>
using namespace std;

/*
Input
36 6
Output
Yes

If N is completely divisible by F then Yes otherwise No
*/

int main() {
      
  int N, F;
  cin >> N >> F;
  
//   if(N%F==0){
//       cout << "Yes";
//   }
//   else{
//       cout << "No";
//   }
   
   N%F==0 ? cout << "Yes" : cout << "No";
  
}


