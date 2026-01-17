#include <bits/stdc++.h>
using namespace std;

/*
If marks are greater than 90
, print Excellent
Else if marks are greater than 80
 and less than or equal to 90
, print Good
Else if marks are greater than 70
 and less than or equal to 80
, print Fair
Else if marks are greater than 60
 and less than or equal to 70
, print Meets Expectations
Else (marks less than or equal to 60
), print Below Par
*/

int main() {
      
  int marks;
  cin >> marks;
  
//   if(marks > 90){
//       cout << "Excellent" << endl;
//   }
//   else if (marks > 80) {
//       cout << "Good" << endl;
//   }
//   else if (marks > 70) {
//       cout << "Fair" << endl;
//   }
//   else if (marks > 60) {
//       cout << "Meets Expectations" << endl;
//   }
//   else{
//       cout << "Below Par" << endl;
//   }
  
  
 
//   cout << (marks>90 ? "Excellent" : marks>80 ? "Good" :  marks>70 ? "Fair" : marks>60 ?  "Meets Expectations" : "Below Par") << endl;
 
 marks>90 ? cout << "Excellent" : marks>80 ? cout << "Good" :  marks>70 ? cout << "Fair" : marks>60 ? cout << "Meets Expectations" : cout << "Below Par"; 
}


