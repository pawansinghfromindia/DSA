#include <bits/stdc++.h>
using namespace std;

/*
Print the message Hello Codeforces exactly N times.
Input :
3
Output :
Hello Codeforces 1
Hello Codeforces 2
Hello Codeforces 3
*/

void printMessage(int N){
    for(int i=1; i<=N; i++){
        cout << "Hello Codeforces " << i << endl;
    }
}

int main() {
	
    int N;
    cin >> N;
    
    printMessage(N);

}
