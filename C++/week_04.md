# ARRAYS

<details>
  <summary> <b> Why array? </b> </summary>

<br/>

**Storing marks of 5 students** <br/>
We are given 5 numbers in the input, which represent the marks of 5 students. We just need to store them in our program.
```cpp
#include<iostream>
using namespace std;

int main(){
  int m1, m2, m3, m4, m5;
  cin >> m1 >> m2 >> m3 >> m4 >> m5;

  cout << m1 << m2 << m3 << m4 << m5;

}
```

**Storing marks of 10 students** <br/>
We are given 10 numbers in the input, which represent the marks of 10 students. We just need to store them in our program.
```cpp
  int m1, m2, m3, m4, m5, m6, m7, m8, m9, m10;
  cin >> m1 >> m2 >> m3 >> m4 >> m5 >> m6 >> m7 >> m8 >> m9 >> m10;

  cout << m1 << m2 << m3 << m4 << m5 << m6 << m7 << m8 << m9 << m10;
```

**Storing marks of 100 students** <br/>
We are given 100 numbers in the input, which represent the marks of 100 students. We just need to store them in our program.
```cpp
  // Hard to manage, almost impossible 
  int m1, m2, m3, m4, m5, m6, m7, m8, m9, m10,...........,m100;
  cin >> m1 >> m2 >> m3 >> m4 >> m5 >> m6 >> m7 >> m8 >> m9 >> m10 >> .......... >>m100;
```

</details>

<details>
  <summary> <b> What array? </b> </summary>

<br/>

- A collection of **similar kind of data** stored together at **continuous memory locations**.
- It helps us **create multiple variables** of the **same data type** using a **single name**.
- Each element can be accessed using the **array name** along with its **unique index**.
- **Indexing starts from 0**, and the last element is located at **index N − 1**, where N is the total number of elements in the array.

<img width="350" height="150" alt="image" src="https://github.com/user-attachments/assets/a646f759-ca3d-4191-975a-e0a4f3f46549" />


</details>

<details>
  <summary> <b>Creating an array</b> </summary>

<br/>

Syntax : `<DataType> <Array_Name>[NUMBER_OF_ELEMENTS]`
```cpp
int arr[10];
float arr2[20];
long long arr3[30]
char arr3[26];

```
Once you declare an array, all elements can have any random value (often reffered as **garbage value**)

Accessing the array element and assigning the value to array element
```cpp
#include <iostream>
using namespace std;


int main()
{
	int arr[10];
// acessing array element
	cout << arr[0] << endl; // garbage value

// assigning value to array element
	arr[0] = 5;
	arr[1] = 10;
	arr[2] = 15;
	arr[3] = 20;
	arr[4] = 25;
	arr[5] = 30;
	arr[6] = 35;
	arr[7] = 40;
	arr[8] = 45;
	arr[9] = 50;
	cout << arr[0] << endl; // 5
	arr[0]++;
	cout << arr[0] << endl; // 6

	return 0;
}
```
Array indices are from `0 to (N-1)`, if you try to access `a[i]` where i is not a valid index (i.e. `i < 0 or i >= N`), 
it will lead to **undefined behaviour**, could be a **runtime error**, **segmentation fault** or accessing any **garbage value**.

</details>

<details>
  <summary> <b>Input/Output in Array</b> </summary>

<br/>

Taking input and printing in arrray. 
```cpp
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    // taking input
    for(int i = 0; i <= n-1; i++){
         cin >> arr[i];
    }

    // printing output
    for(int i = 0; i <= n-1; i++){
          cout << arr[i] << " ";
    }
    cout << endl;
}
```

</details>

<details>
  <summary> <b> Problems based on Array </b> </summary>

<br/>

**Print an Array in reverse** <br/>
```
Input :
5
7 8 1 2 4
Output :
4 2 1 8 7
```

Find the MAX element of the array. <br/>
```
Input :
6
1 4 8 7 9 3
Output :
9
```

Find the MIN element of the array. <br/>
```
Input :
6
1 4 8 7 9 3
Output :
1
```
Search an element in an array <br/>
```
Input :                  Input : 
6 10                     6 8
7 6 8 9 1 3              7 6 8 9 1 3
Output :                 Output :
NOT FOUND                FOUND
```

Count the occurance of a number in an array
```
Input :
6 7
7 6 7 9 7 3
Output :
3
```

Check if the given array is sorted
```
Input :
6
1 2 2 8 11 31
Output :
YES/NO
```

Sort an array which only contains 0s and 1s.
```
Input :
6
1 1 0 1 1 0
Output :
0 0 1 1 1 1
```

Swap two numbers
```
Input :
A = 2
B = 5
Output :
A = 5
B = 2
```

Swap altername elements of an array
```
Input :
5                6
7 8 1 2 4        7 9 8 1 2 4
Output :
8 7 2 1 4        9 7 1 8 4 2
```
Reverse the array in the same array without using another array( In place).
```
Input :
5           6
7 8 1 2 4   7 9 8 1 2 4
Output :
4 2 1 8 7   4 2 1 8 9 7
```

MISSING NUMBER : Every number in the array is present twice, except for one special element that occurs only once. Find the special element.
```
Input :
7                  7
2 1 9 1 2 3 9      1 2 1 2 3 4 3
Output :
3                  4
```

INTERSECTION OF TWO ARRAYS : Print the elements present in both arrays.
```
Input :
6                         4
2 6 8 5 4 3               2 6 1 2
4                         5
2 3 4 7                   1 2 3 4 2
output :
2 4 3                     2 2
```

PAIR SUM : Count how many pairs in the array satisfies: A[i] + A[j] = target
```
Input :
9
1 3 6 2 5 4 3 2 4
7
Output :
7
```
TRIPLET SUM : Count how many triplets in the array satisfies: A[i] + A[j] + A[k] = target
```
Input :
7
1 2 3 4 5 6 7
12
Output :
5
```
QUADRAPLET SUM : Count how many quadraplets in the array satisfies: A[i] + A[j] + A[k] + A[l] = target


</details>




