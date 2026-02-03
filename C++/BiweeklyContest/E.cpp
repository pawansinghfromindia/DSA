#include <bits/stdc++.h>
using namespace std;

/*
Count how many of these numbers are good.
A number x is said to be good if:
- x is a factor of 18 (i.e., 18 mod x = 0), or
- x is a multiple of 45(i.e., x mod 45 = 0).
Input :
8
1 2 3 4 5 6 9 90
Output :
6
For x=0, it cannot be a factor of 18 (division by zero is undefined), but it is a multiple of 45 because 0 mod 45 = 0
*/

int isGoodNum(int x){
    if( x%45==0 or 18%x == 0){
        return true;
    }
    return false;
}

int main() {
    
    int N;
    cin >> N;
    
    int count = 0;
    for(int i=1; i<=N; i++){
        int value;
        cin >> value;
        if(isGoodNum(value)){
            count+=1;
        }
    }
    cout << count << endl;

}
