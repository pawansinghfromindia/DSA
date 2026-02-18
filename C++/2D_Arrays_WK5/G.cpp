#include <bits/stdc++.h>
using namespace std;
 
/*
Print a single integer: the index of the first row with the maximum number of 1s, or −1
 if no such row exists.
Input :
3 3
0 1 1
1 0 0
1 0 1
Output :
0
 
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
	
	// which row has max 1s 
	int index = -1;
	int max = 0;
	for(int i=0; i<=n-1; i++){
	    int count = 0;
	    for(int j=0; j<=m-1; j++){
	        if(arr[i][j] == 1){
	            count++;
	        }
	    }
	    if(count > max){
	        max = count;
	        index = i;
	    }
	}
	
	cout << index << endl;
 
}