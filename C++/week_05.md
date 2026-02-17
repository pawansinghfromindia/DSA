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
  <summary> String in C++ </summary>

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
