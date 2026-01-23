## Loop
<details>
  <summary> <b> Loops </b> </summary>

Print from 1 to 5
```cpp
#include<iostream>
using namespace std;

int main(){
  cout << 1 << endl;
  cout << 2 << endl;
  cout << 3 << endl;
  cout << 4 << endl;
  cout << 5 << endl;
  return 0;
}
```
Print from 1 to 10
```cpp
#include<iostream>
using namespace std;

int main(){
  cout << 1 << endl;
  cout << 2 << endl;
  cout << 3 << endl;
  cout << 4 << endl;
  cout << 5 << endl;
  cout << 6 << endl;
  cout << 7 << endl;
  cout << 8 << endl;
  cout << 9 << endl;
  cout << 10 << endl;
  return 0;
}
```
Print from 1 to 1000 ??

How can we repeat work without writing the same code again and again?
- When you want to repeat an action again and again till a certain condition, we can use loops.

</details>

<details>
  <summary> <b> Type of Loops </b> </summary>

1. **While loop**
2. **do while loop**
3. **For loop**

**While loop**
```cpp
//initialization
while(condition){
//body
//updation
}
```
Print 1 to 10
```cpp
int i = 1;
while(i <= 10){
    cout << i << endl;
    i = i + 1;
}
```
Print 1 to N
```cpp
#include<iostream>
using namespace std;

int main(){
  int N;
  cin >> N;

  int i = 1;
  while(i <= N){
      cout << i << endl;
      i = i + 1;
  }

  return 0;
}
```
Print N to 1
```cpp
#include<iostream>
using namespace std;

int main(){
  int N;
  cin >> N;

  int i = N;
  while(i >= 1){
      cout << i << endl;
      i = i - 1;
  }

  return 0;
}
```
Print Numbers from left to right
```cpp
#include<iostream>
using namespace std;

int main(){
  int left, right;
  cin >> left >> right;

  int i = left;
  while(i <= right){
      cout << i << " ";
      i = i + 1;
  }

  return 0;
}
```
Print all the even numbers between 1 to N
```cpp
#include<iostream>
using namespace std;

int main(){
  int N;
  cin >> N;

  int i = 1;
  while(i <= N){
      if(i%2==0){
         cout << i << " ";
      }
      i = i + 1;
  }

  return 0;
}
```

```cpp
#include<iostream>
using namespace std;

int main(){
  int N;
  cin >> N;

  int i = 2;
  while(i <= N){
      cout << i << " ";
      i = i + 2;
  }

  return 0;
}
```
Print all UPPERCASE alphabets (A - Z)
```cpp
#include<iostream>
using namespace std;

int main(){

  char ch = 'A';
  while(ch <= 'Z'){
      cout << ch << " ";
      ch = ch + 1;
  }
  //ASCII Code 'A' -> 65 'Z' ->90
  return 0;
}
```
Print table Multiplication 
```cpp
#include<iostream>
using namespace std;

int main(){

  int N;
  cin >> N;

  int i = 1;
  while(i <= 10){
     cout << N << " * " << i << " = " << N*i << endl;
  }
  return 0;
}
```
Print a number in reverse
```cpp
#include<iostream>
using namespace std;

int main(){

  int N;
  cin >> N;

  while( N != 0){
      cout << N%10;
      N = N/10
  }

  return 0;
}
```
Sum of Digit
```cpp
#include<iostream>
using namespace std;

int main(){

  int n;
  cin >> n;

  int sum = 0;
  while(n!=0){
      sum = sum + n%10;
      n = n/10;
  }
  return 0;
}
```
Reverse a number
```cpp
#include<iostream>
using namespace std;

int main(){

  int n;
  cin >> n;

  int ans = 0;
  while (n!=0){
     ans = (ans*10) + n%10;
     n = n/10;  
  }
  cout << ans << endl;

  return 0;
}
```
Check whether a number is Palindrome
```cpp
#include<iostream>
using namespace std;

int main(){

  int n;
  cin >> n;

  int temp = n;
  int rev = 0;
  while(n!=0){
      rev = (rev*10) + n%10;
      n = n/10;
  }
  if(rev == temp){
    cout << "Palindrome" <<endl;
  }
  else{
    cout << "Not Palindrome" <<endl;
  }

  return 0;
}
```

**do While loop**
```cpp
do {
  //body
} while(condition)
```

**For loop**
```cpp
for(initialization; condition; updation){
    // body 
}
```

</details>

## Pattern Printing

<details>
  <summary> <b> Pattern Printing </b> </summary>

1. **Print 1 to n**

```cpp
#include <bits/stdc++.h>
using namespace std;

/*
Given n (number of rows), print the following pattern:
n = 5
1
2
3
4
5
*/

int main() {

 int n;
 cin >> n;
  
 for(int i=1; i<=n; i++){
    cout << i << endl;
 }
    
 return 0;
}
```
2. **2 stars**
```cpp
#include <bits/stdc++.h>
using namespace std;

/*

Given n (number of rows), print the following pattern:
n = 5
**
**
**
**
**

*/

int main() {

 int n;
 cin >> n;
  
 for(int i=1; i<=n; i++){
    cout << "**" << endl;
 }
    
 return 0;
}
```
3. **4 stars**
```cpp
#include <bits/stdc++.h>
using namespace std;

/*

Given n (number of rows), print the following pattern:
n = 5
****
****
****
****
****

*/

int main() {

 int n;
 cin >> n;
  
 for(int i=1; i<=n; i++){
    cout << "****" << endl;
 }
    
 return 0;
}
```
4. **m stars (Rectangle)**
```cpp
#include <bits/stdc++.h>
using namespace std;

/*

Given n (no. of rows) and m (no. of cols) , print the following pattern:
n = 5
m = 4
****
****
****
****
****

*/

int main() {

 int n, m;
 cin >> n >> m;
  
 for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
       cout << "*";
    }
    cout << endl;
 }
    
 return 0;
}
```
5. **Square**
```cpp
#include <bits/stdc++.h>
using namespace std;

/*

Given n (no. of rows and cols), print the following pattern:
n = 5
*****
*****
*****
*****
*****

*/

int main() {

 int n;
 cin >> n;
  
 for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
       cout << "*";
    }
    cout << endl;
 }
    
 return 0;
}
```
6. **Pyramid**
```cpp
#include <bits/stdc++.h>
using namespace std;

/*

Given n (no. of rows), print the following pattern:
n = 5
*
**
***
****
*****

*/

int main() {

 int n;
 cin >> n;
  
 for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
       cout << "*";
    }
    cout << endl;
 }
    
 return 0;
}
```
7. **Inverted Pyramid**
```cpp
#include <bits/stdc++.h>
using namespace std;

/*

Given n (no. of rows), print the following pattern:
n = 5
*****
****
***
**
*

*/

int main() {

 int n;
 cin >> n;
  
 for(int i=n; i>=1; i--){
    for(int j=1; j<=i; j++){
       cout << "*";
    }
    cout << endl;
 }
    
 return 0;
}
```
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

 int n;
 cin >> n;

 int invert = n;
 for(int i=1; i<=n; i++){
    for(int j=invert; j>=1; j--){
       cout << "*";
    }
    invert--;
    cout << endl;
 }
    
 return 0;
}
```
8. **Hollow Square** : Boundary will exist
```cpp
#include <bits/stdc++.h>
using namespace std;

/*

Given n (no. of rows), print the following pattern:
n = 5
*****
*   *
*   *
*   *
*****

*/

int main() {

 int n;
 cin >> n;
  
 for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
       //boundary of hollow square.
       if(i==1 or i==n or j==1 or j==n){
          cout << "*";
       }
       else{
           cout << " ";
       }
    }
    cout << endl;
 }
    
 return 0;
}
```
9. **Hollow Pyramid**
```cpp
#include <bits/stdc++.h>
using namespace std;

/*

Given n (no. of rows), print the following pattern:
n = 5
*
**
* *
*  *
*****

*/

int main() {

 int n;
 cin >> n;
  
 for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
       //boundary of hollow rectangle.
      if(i==1 or i==n or j==1 or j==i){
          cout << "*";
      }
      else{
          cout << " ";
      }
  
    }
    cout << endl;
 }
    
 return 0;
}
```
10. **Numbered Rectangle**
```cpp
#include <bits/stdc++.h>
using namespace std;

/*

Given n (no. of rows) and m (no. of cols) , print the following pattern:
n = 5 m = 7
1111111
2222222
3333333
4444444
5555555

*/

int main() {

 int n, m;
 cin >> n >> m;
  
 for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
       //number
       cout << i ;
    }
    cout << endl;
 }
    
 return 0;
}
```
11. **Numbered Rectangle - II**
```cpp
#include <bits/stdc++.h>
using namespace std;

/*

Given n (no. of rows) and m (no. of cols) , print the following pattern:
n = 5 m = 7
1234567
1234567
1234567
1234567
1234567

*/

int main() {

 int n, m;
 cin >> n >> m;
  
 for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
       //number
       cout << j ;
    }
    cout << endl;
 }
    
 return 0;
}
```
12. **Numbered Rectangle - III**
```cpp
#include <bits/stdc++.h>
using namespace std;

/*

Given n (no. of rows) and m (no. of cols) , print the following pattern:
n = 5 m = 7
AAAAAAA
BBBBBBB
CCCCCCC
DDDDDDD
EEEEEEE

*/

int main() {

 int n, m;
 cin >> n >> m;

 char ch = 'A';  
 for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
       //number
       cout << ch ;
    }
    ch++;
    cout << endl;
 }
    
 return 0;
}
```
13. **Numbered Rectangle - IV**
```cpp
#include <bits/stdc++.h>
using namespace std;

/*

Given n (no. of rows) and m (no. of cols) , print the following pattern:
n = 5 m = 7
ABCDEFG
ABCDEFG
ABCDEFG
ABCDEFG
ABCDEFG

*/

int main() {

 int n, m;
 cin >> n >> m;

 
 for(int i=1; i<=n; i++){
    char ch = 'A';  
    for(int j=1; j<=m; j++){
       //number
       cout << ch ;
       ch++;
    }
    cout << endl;
 }
    
 return 0;
}
```
14. **Numbered Pyramid**
```cpp
#include <bits/stdc++.h>
using namespace std;

/*

Given n (no. of rows), print the following pattern:
n = 5
1
22
333
4444
55555

*/

int main() {

 int n;
 cin >> n;
  
 for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout << i ;
    }
    cout << endl;
 }
    
 return 0;
}
```

15. **Binary Pyramid**
```cpp
#include <bits/stdc++.h>
using namespace std;

/*

Given n (no. of rows), print the following pattern:
n = 5
0
10
010
1010
01010

*/

int main() {

 int n;
 cin >> n;
  
 int binary;
 for(int i=1; i<=n; i++){
    binary = i%2==0 ?  1 : 0;
    for(int j=1; j<=i; j++){
       //binary 0 1
       cout << binary ;
       if(binary==0){
           binary = 1;
       }
       else{
           binary = 0;
       }
    }
    cout << endl;
 }
    
 return 0;
}
```

</details>

## Assignments Loops and Printing pattern

<details>
  <summary> <b> Assignment Loops and Pattern Printing </b> </summary>

| Num  | Problem                                                             | Topic   | Idea  | What I did Wrong | Status         | Revisit? |
|------|---------------------------------------------------------------------|---------|-------|------------------|----------------|----------|
| A    | [Print 1 to N](https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/A)| Printing| cout  | Nothing          | Solved(no help)| No       |
| B    | [Print N to 1](https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/B)| | | | | |
| C    | [ Print All Even Numbers from 1 to N](https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/C)| | | | | |
| D    | [Print from L to R](https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/D)| | | | | |
| E    | [Print All Uppercase Alphabets](https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/E)| | | | | |
| F    | [Print Table of N](https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/F)| | | | | |
| G    | [Count Numbers](https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/G)| | | | | |
| H   | [Sum of First N Natural Numbers](https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/H1)| | | | | |
| I    | [Factorial](https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/I)| | | | | |
| J    | [power of xn](https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/J)| | | | | |
| K    | [Print Number in Reverse](https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/K)| | | | | |
| L    | [Sum Of Digits](https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/L)| | | | | |
| M    | [Reverse Number and Store in a Variable](https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/M)| | | | | |
| N    | [Palindrome](https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/N)| | | | | |


</details>


| [Prev]() | Week-2 | [Next]() |
|----------|--------|----------|
