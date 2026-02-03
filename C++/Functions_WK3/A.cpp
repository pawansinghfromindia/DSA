#include <bits/stdc++.h>
using namespace std;

/*
Print the message 'I am learning functions' exactly N times.
Input :
3
Output :
I am learning functions
I am learning functions
I am learning functions

*/

void printMessage(int N){
    for(int i=1; i<=N; i++){
        cout << "I am learning functions"<<endl;
    }
}

int main() {
	
    int N;
    cin >> N;
    
    printMessage(N);

}
