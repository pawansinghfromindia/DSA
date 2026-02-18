#include <bits/stdc++.h>

using namespace std;

/*
 print the boundary traversal of the matrix in clockwise order, starting from the top-left corner.
Input :
4 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Output :
1 2 3 4 8 12 16 15 14 13 9 5 
 
*/

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    // Input
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j <= m - 1; j++) {
            cin >> arr[i][j];
        }
    }

    if (n == 1 or m == 1) {
        for (int i = 0; i <= n - 1; i++) {
            for (int j = 0; j <= m - 1; j++) {
                cout << arr[i][j] << " ";
            }
        }


    }
    else {

        // boundary traversal 

        // first row left to right
        for (int i = 0; i <= 0; i++) {
            for (int j = 0; j <= m - 1; j++) {
                cout << arr[i][j] << " ";
            }
        }

        // last column top to bottom
        for (int j = m - 1; j <= m - 1; j++) {

            for (int i = 1; i <= n - 1; i++) {
                cout << arr[i][j] << " ";
            }
        }

        // last row right to left
        for (int i = n - 1; i <= n - 1; i++) {

            for (int j = m - 2; j >= 0; j--) {
                cout << arr[i][j] << " ";
            }
        }

        // first column bottom to top
        for (int j = 0; j <= 0; j++) {

            for (int i = n - 2; i >= 1; i--) {
                cout << arr[i][j] << " ";
            }
        }


    }
    cout << endl;

    return 0;

}