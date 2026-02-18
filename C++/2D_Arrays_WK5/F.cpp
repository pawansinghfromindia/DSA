#include <bits/stdc++.h>
using namespace std;
 
/*
Your task is to compute the sum of each column.
Input :
3 3
1 2 3
4 5 6
7 8 9
Output :
12 15 18
 
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
	
	
	for(int j=0; j<=m-1; j++){
	    // sum of each col
	    int sum = 0;
	    for(int i=0; i<=n-1; i++){
	        sum += arr[i][j];
	    }
	    cout << sum << " ";
	}
	
	cout << endl;
 
}