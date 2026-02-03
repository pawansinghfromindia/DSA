#include <bits/stdc++.h>
using namespace std;

/*
Print Yes if the year is a leap year, otherwise print No.
Input :
2000 2100
Output :
Yes No
*/


void isLeapYear(int year){
  
    if(year%4==0 and (year%100!=0 or year%400==0)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}

int main() {
    
    int year;
    cin >> year;
    
    isLeapYear(year);

}
