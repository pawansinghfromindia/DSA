#include <bits/stdc++.h>
using namespace std;

/*
print all the elements of the matrix col by col.
Input :
3 3
1 2 3
4 5 6
7 8 9
Output :
1 4 7 2 5 8 3 6 9 

*/

int main() {
	int n, m;
	cin >> n >> m;
	
	int arr[n][m];
	// Input
	for(int i=0; i<=n-1; i++){
	    for(int j=0; j<=m-1; j++){
	        cin >> arr[i][j];
	    }
	}
	
	// Output col wise
	for(int j=0; j<=m-1; j++){
	    for(int i=0; i<=n-1; i++){
	        cout << arr[i][j] << " ";
	    }
	}
	cout << endl;

}
