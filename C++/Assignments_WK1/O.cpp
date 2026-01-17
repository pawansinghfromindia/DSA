#include <bits/stdc++.h>
using namespace std;

/*
InputCopy
12 9 15
OutputCopy
Min = 9
Max = 15


*/

int main() {
      
  int A, B, C;
  cin >> A >> B >> C;
  
  int min, max;
  
//   //Min
//   if(A<=B && A<=C){
//      min = A;
//   }
//   else if(B<=A && B<=C){
//       min = B;
//   }
//   else{
//       min = C;
//   }
//   cout << "Min = " << min << endl;
  
//   //Max
//   if(A>=B && A>=C){
//      max = A;
//   }
//   else if(B>=A && B>=C){
//       max = B;
//   }
//   else{
//       max = C;
//   }
//   cout << "Max = " << max << endl;
   
  max = A>=B and A>=C ? A : B>=C ? B : C;
  min = A<=B and A<=C ? A : B<=C ? B : C;
  cout << "Min = " << min << endl;
  cout << "Max = " << max << endl;
  
}


