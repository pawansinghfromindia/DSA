#include <bits/stdc++.h>
using namespace std;

/*
Origin — if X=0  and Y=0
X axis — if Y=0  and X≠0
Y axis — if X=0  and Y≠0
1st Quadrant — if X>0  and Y>0
2nd Quadrant — if X<0  and Y>0
3rd Quadrant — if X<0  and Y<0
4th Quadrant — if X>0  and Y<0
*/

int main() {
      
  int X, Y;
  cin >> X >> Y;
  
//   if(X==0 and Y==0){
//       cout << "Origin";
//   }
//   else if(Y==0 and X!=0){
//       cout << "X axis"; 
//   }
//   else if(X==0 and Y!=0){
//       cout << "Y axis"; 
//   }
//   else if(X>0 and Y>0){
//       cout << "1st Quadrant";
//   }
//   else if(X<0 and Y>0){
//       cout << "2nd Quadrant";
//   }
//   else if(X<0 and Y<0){
//       cout << "3rd Quadrant";
//   }
//   else if(X>0 and Y<0){
//       cout << "4th Quadrant";
//   }
  
//   cout << endl;
  
  cout << (X==0 and Y==0 ? "Origin" : Y==0 and X!=0 ? "X axis" :  X==0 and Y!=0 ? "Y axis" : X>0 and Y>0 ? "1st Quadrant" : X<0 and Y>0 ? "2nd Quadrant" : X<0 and Y<0 ? "3rd Quadrant" : "4th Quadrant");

}


