# Function

**Factorial** <br/>
Formula : `n ! = n * (n-1) * (n-2) * ...... * 1`

<details>
  <summary>Factorial Code </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  
  int factorial = 1;
  for(int i=n; i>=1; i--){
      factorial = factorial * i;
  }
  cout << factorial << endl;

  return 0;
}
```

</details>

**Binomial Coefficient** <br/>
Formula : `nCr = n! / (r! * (n-r)!)`

<details>
  <summary> nCr Code </summary>

```c++
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, r;
  cin >> n >>r;

  // n!
  int nFact = 1;
  for(int i=n; i>=1; i--){
      nFact = nFact * i;
  }

  // r!
  int rFact = 1;
  for(int i=r; i>=1; i--){
      rFact = rFact * i;
  }

  // (n-r)!
  int nMinusrFact = 1;
  for(int i=n-r; i>=1; i--){
      nMinusrFact = nMinusrFact * i;
  }

  cout << nFact / (rFact * nMinusrFact) << endl;

  return 0;
}
```
Here, the problem with the above code is we're voilating the DRY(Don't Repeat Yourself) principle of CS. <br/>
We're writing the factorial logic 3 times. <br/>
Wouldn't it be nice if we write the same logic one time and use it as many times as we want. <br/>
For this the concept of **Function** is introduced.

```cpp
#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
  int fact = 1;
  for(int i=n; i>=1; i--){
      fact = fact * i;
  }
  return fact;
}

int main() {

  int n, r;
  cin >> n >>r;

  cout << factorial(n) / (factorial(r) * factorial(n-r)) << endl;

  return 0;
}
```

</details>

**Functions**
- Set of statements
- Code Reusability : Write only once, Reuse multiple times
- Makes code: Cleaner, Shorter, Easier to debug

**Function Syntax**
```cpp
return_type function_name(parameters){
       // function_body
       return statement
}
```
- Function Declaration : `return_type`, `function_name`, `parameter/s`
- Function Definition : `function_body`, `return statement`
- Function Call : `argument/s`

<details>
  <summary>Example</summary>

Find sum of 2 numbers, 3 numbers and factorial of a number through functions. Here, function returns value.
```cpp
#include <bits/stdc++.h>
using namespace std;

// Function for adding 2 numbers
int FindSum2(int num1, int num2){
    int result = num1 + num2;
    return result;
}

// Function for adding 3 numbers
int FindSum3(int num1, int num2, int num3){
    int result = num1 + num2 + num3;
    return result;
}

// Function for calculating factorial
int function factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){

  int result1 = findSum2(3, 5);
  cout << result1 << endl; // 8

  int result2 = findSum3(3, 5, 7);
  cout << result2 << endl; // 15

  int result2 = findSum3(5);
  cout << result2 << endl; // 120

  return 0;
}
```
Print 1 to N. Here, function doesn't return any value rather printing.
```cpp
#include <bits/stdc++.h>
using namespace std;

//Function to print 1 to N
void print1toN(int n){
    for(int i=1; i<=n; i++){
          cout << i << " ";
    }
    cout << endl;
}

int main(){

  int n;
  cin >> n;
  
  print1toN(n);

  return 0;
}
```
Print a square pattern with the char provided. Here, function doesn't return any value rather printing.
```cpp
#include <bits/stdc++.h>
using namespace std;

//Function to print Square with a num and a char
void printSquare(int n, char ch){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << ch;
        }
        cout << endl;
    }

    cout << endl;
}

//Function to print Square with a num and a char
void printHollowSquare(int n, char ch){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 or i==n or j==1 or j==n){
                cout << ch;
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;
}

int main(){

  int n;
  char ch;
  cin >> n >> ch;
  
  printSquare(n, ch);
  printHollowSquare(n, ch);

  return 0;
}
```

</details>

**Function Rules**
- Number of Parameters Must Match
- Return Type Must Match
- Return Ends the Function
- A Function May or May Not Return
- int, double, bool returns value
- void doesn't return any value, It is used when we prints only

> `bool` is boolean value `true` and `false`. Any non-zero number is `true` i.e. `1` and rest everything is `false` i.e. `0`

<details>
  <summary> Example </summary>

```cpp
#include <bits/stdc++.h>
using namespace std;


int findSum(int a, int b){
    int result = a + b;
    return result;
}


void findSum1(int a, int b){
    int result = a + b;
    cout << result;
    return;
}


int main(){
  
 
  //cout << findSum(1, 2, 3); // error bcuz extra arguments passed
 
  //findSum1(5, 10); // No error but does nothing
  //cout << findSum1(5, 10); // error bcuz function doesn't return anything and we're printing it.

  return 0;
}
```

</details>

**Factor** : Factors of a number N, are the numbers from 1 to N, which divides the number N. 
```
12 => 1, 2, 3, 4, 6, 12
15 => 1, 3, 5, 15

Smallest factor of any given number =  1
Largest factor of any given number  = N.
```
<details>
  <summary> Example </summary>

Print the factors of a given number n.
```cpp

```
Print the count of factors of a given number n.
```cpp

```

</details>

**Prime Number** : only 2 Factors `1` and `N` itself.
```
Prime Numbers : 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31
1 -> 1          Not Prime
2 -> 1, 2       Prime
3 -> 1, 3       Prime
4 -> 1, 2, 4    Not Prime
5 -> 1, 5       Prime
6 -> 1, 2, 3, 6 Not Prime
```











