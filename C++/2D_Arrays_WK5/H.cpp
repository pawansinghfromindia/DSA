#include <bits/stdc++.h>
using namespace std;
 
/*
print all the elements of the matrix row by row in wave form:
Input :
3 3
1 2 3
4 5 6
7 8 9
Output :
1 2 3 6 5 4 7 8 9
 
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
	
	// Wave pattern row-wise 
	// even rows right to left
	// odd rows left to right
	for(int i=0; i<=n-1; i++){
	    if(i%2==0){
	        for(int j=0; j<=m-1; j++){
	            cout << arr[i][j] << " ";
	        }
	    }
	    else{
	        for(int j=m-1; j>=0; j--){
	            cout << arr[i][j] << " ";
	        }
	    }
	}
	
	cout << endl;
 
}