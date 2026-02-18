#include <bits/stdc++.h>
using namespace std;

/*
Print true if x exists in the matrix, otherwise print false.
Input :
3 4 7
1 2 3 4
5 6 7 8
9 10 11 12
Output :
true

*/

int main() {
	int n, m, element;
	cin >> n >> m >> element;
	
	int arr[n][m];
	// Input
	for(int i=0; i<=n-1; i++){
	    for(int j=0; j<=m-1; j++){
	        cin >> arr[i][j];
	    }
	}
	
	// search
	int flag = 0;
	for(int i=0; i<=n-1; i++){
	    for(int j=0; j<=m-1; j++){
	        if( element == arr[i][j] ){
	            flag = 1;
	            break;
	        }
	    }
	}
	if(flag){
	    cout << "true";
	}
    else{
        cout << "false";
    }
	cout << endl;

}
