#include <bits/stdc++.h>

using namespace std;

/*
Find the HCF of A and B
Input :
12 36
Output :
12

HCF = Highest Common Factor

12 -> 1, 2, 3, 4, 6, 12
36 -> 1, 2, 3, 4, 6, 9, 12, 18
Min = 1
Max = 12
*/

int hcf(int a, int b){
    int min, max;
    if(a > b){
        min = b;
        max = a;
    }
    else{
        max = b;
        min = a;
    }
    
    for(int i=min; i>=1; i--){
        if(a%i==0 and b%i==0){
            return i;
        }
    }
    return 1;
}


int main() {

    int A, B;
    cin >> A >> B;

    cout << hcf(A, B) << endl;
    

}