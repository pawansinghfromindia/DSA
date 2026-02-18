#include <bits/stdc++.h>
using namespace std;
 
/*
find the maximum element in the entire matrix.
Input :
3 3
1 2 3
4 5 6
7 8 9
Output :
9
 
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
	
	// max
	int max = arr[0][0];
	for(int i=0; i<=n-1; i++){
	    for(int j=0; j<=m-1; j++){
	        if(arr[i][j] > max){
	            max = arr[i][j];
	        }
	    }
	}
	
	cout << max << endl;
 
}