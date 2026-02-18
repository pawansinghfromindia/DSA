#include <bits/stdc++.h>
using namespace std;
 
/*
find the minimum element of each row in order..
Input :
3 3
1 2 3
4 5 6
7 8 9
Output :
1 4 7
 
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
	
	
	for(int i=0; i<=n-1; i++){
	    // min in each row
	    int min = arr[i][0];
	    for(int j=0; j<=m-1; j++){
	        if(arr[i][j] < min){
	            min = arr[i][j];
	        }
	    }
	    cout << min << " ";
	}
	
	cout << endl;
 
}