#include <bits/stdc++.h>
using namespace std;

int main() {
      
/*
*****
   *
  *
 *
*****

Step 1. For row 1 and row n -> print "*"
Step 2. From row 2 to row n-1 -> we have to print spaces, followed by *
        Pattern : number of spaces will be start from 1 to j=n-row spaces then one star.
Step 3. New line after each row.
*/
  
  int n = 5;
  for(int i=1; i<=n; i++){
      // first & last row
      if(i==1 || i==n){
          for(int j=1; j<=n; j++){
              cout<<"*";
          }
      }
      else{
         //row 2 to row n-1
        for(int j=1; j<=n-i; j++){
          cout<<" ";
        }
        cout << "*";
      }
      cout<<endl;
      
  }
  
}

