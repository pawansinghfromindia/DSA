#include <bits/stdc++.h>
using namespace std;

/*
Input
12 9
Output
Min = 9
Max = 12
*/

int main() {
      
  int A, B;
  cin >> A >> B;
  
//   if(A>=B){
//       cout << "Min = " << B << endl;
//       cout << "Max = " << A << endl; 
//   }
//   else{
//       cout << "Min = " << A << endl;
//       cout << "Max = " << B << endl; 
//   }
   
   A>=B ? cout << "Min = " << B << endl << "Max = " << A : cout << "Min = " << A << endl << "Max = " << B;
  
}


