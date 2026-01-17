#include <bits/stdc++.h>
using namespace std;

int main() {
      
/*
Print the following pattern exactly as shown:
*****
****
***
**
*
*/
//   cout << "*****" << endl;
//   cout << "****" << endl;
//   cout << "***" << endl;
//   cout << "**" << endl;
//   cout << "*" << endl;
  
//   cout << "----------" << endl;
  
  for(int row=5; row>=1; row--){
      //rows
      for(int col=row; col>=1; col--){
          cout << "*";
      } 
      //new line
      cout << endl;
  }

}

