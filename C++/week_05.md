<!--------------------- 2D Arrays C++ ---------------------------->
# 2D Arrays
<details>
  <summary> Board Games are based on 2D arrays</summary>

<br/>

***Tic Tok Toe***, ***Chess***, ***Snake ladder***, etc

<img width="500" height="350" alt="image" src="https://github.com/user-attachments/assets/3a0929a8-5db3-4e3c-bad2-a21baf986f88" />

#
</details>

<details>
  <summary> <b> What are 2D Arrays ?</b> </summary>

<br/>

- [x] 2D Array is nothing but **Collections of 1D Arrays**
    - [ ] **Rows** N
    - [ ] **Columns** M

**1D Array** which has only one rows and n columns(elements)
|      |       |       |      |
|------|-------|-------|------|

Indexing of 1D Array starts from 0 and goes to N-1.
```cpp
int arr[4] = {10, 20, 30, 40};

// cout << arr[-1]; // Error
cout << arr[0]; // 10
cout << arr[1]; // 20
cout << arr[2]; // 30
cout << arr[3]; // 40
// cout << arr[4]; // Error
```
|   10   |   20    |  30     |  40    |
|--------|---------|---------|--------|

It stored only homogenous(same data type of) elements.

It is stored in memory contiguous manner.

**2D Array** which has 5 Rows and 3 Columns
|      |       |       |
|------|-------|-------|
|      |       |       |
|      |       |       |
|      |       |       |
|      |       |       |

Indexing of 2D Array start from 0, 0 and goes to N-1, M-1

```cpp
int arr[2][3] = { {10, 20, 30, 40}, {50, 60, 70, 80} };

// cout << arr[-1]; // Error
// cout << arr[-1][0]; // Error
cout << arr[0][0]; // 10
cout << arr[0][1]; // 20
cout << arr[0][2]; // 30
cout << arr[0][3]; // 40
// cout << arr[4]; // Error
// cout << arr[4][0]; // Error
```
|   10   |   20    |  30     |  40    |
|--------|---------|---------|--------|
|   50   |   60    |  70     |  80    |

Similar to 1D Array, It is also stored only homogenous(same data type of) elements.

Similar to 1D Array, It is also stored in memory contiguous manner.


If we have a 2D array of N rows and M columns i.e (rows x cols) then following terms/elemennts could be : 
- [ ] top - left = [0, 0]
- [ ] top - right = [0, M-1]
- [ ] bottom - left = [N-1, 0]
- [ ] bottom - right = [N-1, M-1]
  
#
</details>

<details>
  <summary> 2D Arrays traversal, taking input and printing it </summary>

1D Array
```cpp
int arr[N];
for(int i=0; i<=N-1; i++{
  cin >> arr[i];
}
for(int i=0; i<=N-1; i++{
  cout >> arr[i] << " ";
}
```
2D Array
```cpp
int arr[N][M];
for(int i=0; i<=N-1; i++){
    for(int j=0; j<=M-1; j++){
        cin >> arr[i][j];
    }
}
for(int i=0; i<=N-1; i++){
    for(int j=0; j<=M-1; j++){
        cout << arr[i][j] << " ";
    }
}
cout << endl;
```
</details>

<details>
  <summary> Printing 2D Arrays : Row Wise and Column Wise </summary>

<br/>

**Row wise** means normal like first rows elements then second rows elements and so on.
|      |       |       |      |
|------|-------|-------|------|

**Columns wise** means first column of all rows, then secons column of all rows and so on
|      |
|------|
|      |
|      |
|      |
|      |


Printing a 2D arrays in row-wise
```cpp
#include <iostream>
using namespace std;

int main()
{
    int N = 3, M = 5;
    int arr[N][M];
    for (int i = 0; i <= N - 1; i++)
    {
        for (int j = 0; j <= M - 1; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i <= N - 1; i++){
        
        for (int j = 0; j <= M - 1; j++){
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;

    return 0;
}
```
| 11 | 12 | 13 | 14 | 15 |
|----|----|----|----|----|
| 21 | 22 | 23 | 24 | 25 |
| 31 | 32 | 33 | 34 | 35 |

| 11 | 12 | 13 | 14 | 15 | 21 | 22 | 23 | 24 | 25 | 31 | 32 | 33 | 34 | 35 |
|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|

Printing a 2D arrays in column-wise
```cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N = 3, M = 5;
    int arr[N][M];
    for (int i = 0; i <= N - 1; i++)
    {
        for (int j = 0; j <= M - 1; j++){
            cin >> arr[i][j];
        }
    }
    // Printing column-wise
    for (int j = 0; j <= M - 1; j++){
        
        for (int i = 0; i <= N - 1; i++){
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;

    return 0;
}
```
| 11 | 12 | 13 | 14 | 15 |
|----|----|----|----|----|
| 21 | 22 | 23 | 24 | 25 |
| 31 | 32 | 33 | 34 | 35 |

| 11 | 21 | 31 | 12 | 22 | 32 | 13 | 23 | 33 | 14 | 24 | 34 | 15 | 25 | 35 |
|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|

</details>

<details>
  <summary> Print 2D array in Wave (row-wise) and Wave(column-wise) </summary>

<br/>

**Wave Print(Row-wise)** 
- [x] Even Rows -> Left to Right
- [x] Odd Rows  -> Right to Left
```cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N = 3, M = 5;
    int arr[N][M];
    for (int i = 0; i <= N - 1; i++)
    {
        for (int j = 0; j <= M - 1; j++){
            cin >> arr[i][j];
        }
    }
    // Wave Print row-wise
    for (int i = 0; i <= N - 1; i++){
        if(i % 2 == 0){
            for (int j = 0; j <= M - 1; j++){
                cout << arr[i][j] << " ";
            }
        }
        else{
            for (int j = M - 1; j >= 0; j--){
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;

    return 0;
}
```
| 11 | 12 | 13 | 14 | 15 |
|----|----|-----|---|----|
| 21 | 22 | 23 | 24 | 25 |
| 31 | 32 | 33 | 34 | 35 |

| 11 | 12 | 13 | 14 | 15 | 25 | 24 | 23 | 22 | 21 | 31 | 32 | 33 | 34 | 35 |
|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|

**Wave Print(Column-wise)**
- [x] Even columns -> top to down
- [x] Odd columns  -> down to top
```cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N = 3, M = 5;
    int arr[N][M];
    for (int i = 0; i <= N - 1; i++)
    {
        for (int j = 0; j <= M - 1; j++){
            cin >> arr[i][j];
        }
    }
    // Wave Print column-wise
    for (int j = 0; j <= M - 1; j++){
        if(j % 2 == 0){
            for (int i = 0; i <= N - 1; i++){
                cout << arr[i][j] << " ";
            }
        }
        else{
            for (int i = N - 1; i >= 0; i--){
                cout << arr[i][j] << " ";
            }
        }
        
    }
    cout << endl;

    return 0;
}
```
| 11 | 12 | 13 | 14 | 15 |
|----|----|----|----|----|
| 21 | 22 | 23 | 24 | 25 |
| 31 | 32 | 33 | 34 | 35 |

| 11 | 21 | 31 | 32 | 22 | 12 | 13 | 23 | 33 | 34 | 24 | 14 | 15 | 25 | 35 |
|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|

</details>

<details>
  <summary> Print Boundary of 2D Array  </summary>

<br/>

Boundaries of 2D arrays
- [x] row-0 Left to right
- [x] Col-M-1 top to bottom
- [x] row-N-1 right to left
- [x] col-0 bottom to top

```cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N = 5, M = 4;
    int arr[N][M];
    for (int i = 0; i <= N - 1; i++)
    {
        for (int j = 0; j <= M - 1; j++){
            cin >> arr[i][j];
        }
    }
    // Boundary
   
    // first row => row-0 Left to right
    for(int i=0; i<1; i++){
        for(int j=0; j<=M-1; j++){
            cout << arr[i][j] << " ";
        }
    }
    // Col-M-1 top to bottom
    for(int j=M-1; j <= M-1; j++){
        for(int i=1; i<= N-2; i++){
            cout << arr[i][j] << " ";
        }
    }
    // Last row => col-0 bottom to top
    for(int i=N-1; i>=N-1; i--){
        for(int j=M-1; j>=0; j--){
            cout << arr[i][j] << " ";
        }
    }
    // col-N-1 right to left
    for(int j=0; j<1; j++){
        for(int i=N-2; i>0; i--){
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;

    return 0;
}
```
|  `1` |  `2` |  `3` |  `4` |
|------|------|------|------|
|  `5` |  6   |  7   |  `8` |
|  `9` | 10   | 11   | `12` | 
| `13` | 14   | 15   | `15` | 
| `17` | `18` | `19` | `20` | 

| 1 | 2 | 3 | 4 | 8 | 12 | 16 | 20 | 19 | 18 | 17 | 13 | 9 | 5 |
|---|---|---|---|---|----|----|----|----|----|----|----|---|---|

> Note : It is not like we're printing pattern, don't be confused bcuz here we're not printing pattern, here we're printing elements.

|  `1` |  `2` |  `3` |  `4` |
|------|------|------|------|
|  `5` |  6   |  7   |  `8` |
|  `9` | 10   | 11   | `12` | 
| `13` | 14   | 15   | `15` | 
| `17` | `18` | `19` | `20` |

| 1 | 2 | 3 | 4 | 5 | 8  | 9  | 12 | 23 | 15 | 17 | 18 | 19 | 20 |
|---|---|---|---|---|----|----|----|----|----|----|----|----|----|

</details>


<!--------------------- Strings in C++ ---------------------------->
# String

<details>
  <summary> Char Array in C++ </summary>

<br/>

We don't have so called string data type in C.

We have char and for more than one char we have something called char array.

> '\0' null character terminate the char[]/string.

Char and Char array in C
```c
char ch = 'A';
cout << ch;

char name[] = {'M', 'o', 'h', 'a', 'n', '\0'}
```
Char and Char Array in C++
```cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch = 'a';
    cout << ch << endl; // a

    char name[] = {'R', 'a', 'm'}; //Not termimated automatically
    cout << name << endl; // Ram ?@ garbage values
    cout << sizeof(name)/sizeof(char) << endl; // 3 

    char name1[] = {'R', 'a', 'm', '\0'};
    cout << name1 << endl; // Ram
    cout << sizeof(name1)/sizeof(char) << endl; // 4
 
    //char name2[] = 'Shiva'; // Error
    char name2[] = "Shiva"; // {'S','h','i','v','a','\0'}
    cout << name2 << endl; // Shiva
    cout << sizeof(name2)/sizeof(char) << endl; // 6

    char name3[10] = "Bhim";
    cout << name3 << endl; // Bhim
    cout << sizeof(name3)/sizeof(char) << endl; // 10
    for(int i=0; i<10; i++){
        cout << i << "-" << name3[i];
    }
    cout << endl;
    


    return 0;
}
```

#
</details>

<details>
  <summary> ASCII Value </summary>

<br/>

**Check Same** <br/>
Given two characters in the input, check whether they are same or not.
```
Input :
a b             a a
Output :
No              Yes
```
```cpp
#include<iostream>
using namespace std;

int main(){

    char ch1, ch2;
    cin >> ch1 >> ch2;

    if(ch1 == ch2){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    cout << endl;

    return 0;
}
```

We know numbers are stored in BINARY NUMBER but haven't to wonder How these characters are converted in BINARY?
```cpp
int x = 20;

int binary = 10100
```


**ASCII Values**
> **Every basic character on the keyboard is assigned a unique numeric value by the computer, called its ASCII value.**

<img width="302" height="114" alt="image" src="https://github.com/user-attachments/assets/ce0ce28d-7972-4361-ac4e-4547125207f4" />
<br/>
<img width="500" height="350" alt="image" src="https://github.com/user-attachments/assets/5d9d0fcb-dcf6-47d3-8ab1-4cf93b065145" />
<br/>

**4 Things to be remembered only**
- [x] From 'A' to 'Z' 65 to 90
- [x] From 'a' to 'z' 97 to 122
- [x] From '0' to '9' 48 to 57
- [x] Upper to Lower +32, Lower to Upper -32


**CHARACTER TO ASCII**

Given a character, print its ASCII Value
```cpp
#include<iostream>
using namespace std;
// Char to ASCII
// a -> 97
int main(){

    char ch;
    cin >> ch;
    
    cout << (int)ch << endl;

    return 0;
}
```

**ASCII TO CHARACTER**

Given an ASCII Value, print the corresponing character
```cpp
#include<iostream>
using namespace std;
// ASCII to Char
// 97 -> a
int main(){

    int num;
    cin >> num;
    
    cout << (char)num << endl;

    return 0;
}
```

**CONVERT TO LOWERCASE**

Given an alphabet (lowercase/uppercase), convert into lowercase.
```cpp
#include<iostream>
using namespace std;
// Upper Case to Lower Case and vice versa
// A -> a
int main(){

    char ch;
    cin >> ch;
    
    // Lower to Uppercase
    if(ch >= 'a' and ch <='z'){
        cout << (char)(ch - 32) << endl;
    }
    
    // Upper to Lowercase
    else if(ch >= 'A' and ch <= 'Z'){
        cout << (char)(ch + 32) << endl;
    }
    else{
        cout << "Special Char can't be converted to Upper/Lower Case" << endl;
    }

    return 0;
}
```

#
</details>

<details>
  <summary> Check whether a char is Lower Case, Upper Case, digit or special char</summary>

<br/>

Code :
```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){

    char ch;
    cin >> ch;

    if(ch >= 'A' and ch <= 'Z'){
        cout << "Upper Case";
    }
    else if(ch >='a' and ch <= 'z'){
        cout << "Lower Case";
    }
    else if(ch >= '0' and ch <= '9'){
        cout << "Digit";
    }
    else{
        cout << "Special Character";
    }
    cout << endl;
    
    // we can even put the ASCII code in place for char  
    // like 65 to 90, 97 to 122, 48 to 57

    return 0;
}
```


#
</details>

<details>
  <summary>  <b> String in C++ </b> </summary>

<br/>

> **String** : Collection / Sequence of characters stored at continuous memory locations.

In C++, there are 2 ways to implement it:

1. **Char Array** (C style)
- [ ] `char s[100]`;
- [ ] Ends with `'\0'`
- [ ] ***Manual memory handling***
- [ ] ***More error-prone***

C++ provide us a built-in data type i.e. `string` which has built-in functions to smoothly work with strings.

2. **String** (STL)
- [ ] `string s = "Deva";`
- [ ] Easier
- [ ] ***Automatic Memory Management***
- [ ] ***Less Error prone***
- [ ] ***More in-built functions available***

<details>
  <summary> Play with in-built functions </summary>

<br/>

  ```cpp
#include<iostream>
#include<string>
using namespace std;

int main(){

    //string name = 'Ram'; // Error, String must be in " " not ''
    string name = "Vishnu";
    cout << name[0] << endl; // 'V'
    cout << name[5] << endl; // 'u'
    cout << name[6] << endl; //  ' ' bcuz '\0'
    cout << name[7] << endl; // Not error but garbage bcuz no bound checking
    
    cout << name.at(0) << endl; // 'V'
    
    name[0] = 'v'; // not "v" bcuz it can take only char not string
    cout <<  name[0] << endl; // 'v'

    cout << "-------Functions-------" << endl;
    // built-in functions
    cout << name.size() << endl; // 6
    cout << name.length() << endl; // 6
    
    cout << "----append/concatinate-----" << endl;

    name = "Ram";
    cout << name.append(" is maryadapushutam") << endl; // Ram is maryadapushutam
    
    name = "Ram";
    cout << "Hey " + name << endl; // Hey Ram
    
    cout << "----push_back, pop_back, insert----" << endl;

    name = "Lord ";
    name.push_back('B'); // 'B'
    cout << name << endl; // "Lord B"
    name.pop_back();  // 'B'
    cout << name << endl; // "Lord "

    name = "";
    name.insert(0,"Dev");
    cout << name << endl; // "Dev"
    
    cout << "----erase/clean----" << endl;

    name = "HelloWorld";
    name.erase(); // Remove all charaters
    cout << name << endl; // "" Empty string

    name = "Hello";
    name.clear(); // Remove all characters
    cout << name << endl; // "" Empty string

    name = "HelloWorld";
    cout << name.erase(5, 3) << endl; // Remove 3 char from index 5 "Hellold"
 
    name = "HelloWorld";
    cout << name.erase(5) << endl; // Remove all char from index 5 onwards "Hello"
    
    // Note : No bound checking so it might be undefined behavior if you access out of bound
    
    cout << "----substring----" << endl;
   
    name = "HelloWorld";
    cout << name.substr(0, 5) << endl; // "Hello"

    cout << "----Search-----" << endl;
    name = "Hello World";
    cout << name.find("Hello") << endl; // 0 (if found return start index)
    cout << name.find("world") << endl; // -1 (if not found return garbage value)

    cout << "-----comapare------" << endl;
    string name1 = "Hello";
    string name2 = "World";
    cout << name1.compare(name2) << endl; // -1
    name1 = "ram", name2 = "ram";
    cout << name1.compare(name2) << endl; // 0
    
    name1 = "Hello", name2 = "World";
    cout << (name1 == name2) << endl; // 0
    cout << (name1 > name2) << endl; // 0
    cout << (name1 < name2) << endl; // 1

    return 0;
}
```
</details>

#
</details>

<details>
  <summary> <b> Taking inputs string </b> </summary>

<br/>

**Take input a word**
```cpp
#include<iostream>
using namespace std;

int main(){

    // char ch1, ch2, ch3, ch4, ch5;
    // cin >> ch1 >> ch2 >> ch3 >> ch4 >> ch5; // spaces will be ignored while taking i/p

    // cout << ch1 << ch2 << ch3 << ch4 << ch5 << endl;

    // // move this from char array
    // char arr[10];
    // cin >> arr; // takes only a word as i/p

    // cout << arr << endl;

    
    // 1. For Single Character : cin / get()
    char ch;
    cin >> ch;         // Skips whitespace
    cout << ch << endl;
    cin.get(ch);       // take whitespace as well
    cout << ch << endl;

    // 2. For a Word (no spaces)
    char word[20];
    cin >> word; // stops at whitespace
    cout << word << endl;
    string str;
    cin >> str; // stops at whitespace
    cout << str << endl;


    // 3. For a Sentence (with spaces)
    string line;
    getline(cin, line); // Reads entire line
    cout << line << endl;

   char buffer[100];
   cin.getline(buffer, 100); // Reads up to 99 chars + null
   cout << buffer << endl;
   
    return 0;
}
```

**Take input a sentence**
```cpp
#include<iostream>
using namespace std;

int main(){

    string sentence;
    // cin >> sentence;
    // cout << sentence << endl; // only take first word  which is not right
   
    getline(cin, sentence);
    cout << sentence << endl;
   
    return 0;
}
```

> `cin >>` stops at whitespace (space, tab, newline). 

> `getline()` stops at newline `(\n)` by default.

> When mixing `cin >>` and `getline()`, use `cin.ignore()` to skip leftover newline:
```cpp
#include<iostream>
using namespace std;

int main(){

    int age;
    string name;

    // Doesn't work due to \n char
    // cin >> age;
    // getline(cin, name); // Now works correctly   
    // cout << age << endl;
    // cout << name << endl;
    
    // Works perfectly
    cin >> age;
    cin.ignore(); // Skips the next character (usually '\n')
    getline(cin, name); // Now works correctly
    cout << age << endl;
    cout << name << endl;

    return 0;
}
```

#
</details>
