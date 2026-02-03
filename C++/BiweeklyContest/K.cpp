#include <bits/stdc++.h>

using namespace std;

/*
Print an arrow pattern 
Input :
5
Output :
>
 > >
  >   >
   >     >
    >       >
   >     >
  >   >
 > >
>

        space    star with spaces
i = 1     0       1
i = 2     1       2
i = 3     2       3
i = 4     3       4
i = 5     4       5
         i-1      i
*/

void arrowPattern(int n) {
    
    //shiftedPyramid
    for(int i=1; i<=n; i++){
        // space
        for(int j=1; j<=i-1; j++){
            cout << " ";
        }
        
        // star
        for(int j=1; j<=i; j++){
            if(i==1 or j==1 or j==i){
                if(j==i){
                    cout << ">";
                }
                else{
                    cout << "> ";
                }
            }
            else{
                cout << "  ";
            }
        }
        
        cout << endl;
    }
    
    //Inverted shiftedPyramid
    //shiftedPyramid
    for(int i=n-1; i>=1; i--){
        // space
        for(int j=1; j<=i-1; j++){
            cout << " ";
        }
        
        // star
        for(int j=1; j<=i; j++){
            if(i==1 or j==1 or j==i){
               if(j==i){
                    cout << ">";
               }
               else{
                    cout << "> ";
               }
            }
            else{
                cout << "  ";
            }
        }
        
        cout << endl;
    }
}

int main() {

    int N;
    cin >> N;

    arrowPattern(N);

}