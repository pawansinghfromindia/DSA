# C++ (Important things to know)
1. Pre-Increment `++x` and Post-Increment `x++`
2. Ternary Operator `?:`
3. `int` vs `long long`
4. Short-Circuit Evaluation (Logical Operators) `and` -> `&&`, `or` -> `||` 

**Summary**
- `++x` and `x++` behave differently
- Ternary operator `?:` replaces simple if–else
- `int` has limits
- `long long` prevents overflow

<details>
  <summary> <b>1. Pre-Increment <code>++x</code> and Post-Increment <code>x++</code></b> </summary>

<br/>

**What is Increment?**

Increment means **increase the value of a variable by 1**.
```cpp
x = x + 1;
```
C++ provides shortcuts to increase the value by using an operator called `++`.

There are 2 ways to do this :
- **Pre-Increment `++x`** : First increase the value, Then use the value
```cpp
int x = 5;
int y = ++x;

cout << x << endl; // 6
cout << y << endl; // 6

/*
Dry run Step-by-step
1. x becomes 6
2. y gets 6
*/
```
- **Post-Increment `x++`** : First use the value, Then increase the value
```cpp
int x = 5;
int y = x++;

cout << x << endl; // 6
cout << y << endl; // 5

/*
Dry run Step-by-step
1. y gets 5 
2. x becomes 6
*/
```
Example : What will it print
```cpp
int x = 10;
cout << x++ << endl; // 10
cout << ++x << endl; // 12

/*
Dry run step by step
- First line prints 10, x becomes 11
- Second line increments x to 12, prints 12
*/
```
Avoid using `++` multiple times in one statement otherwise you will get confused.
```cpp
int x = 5;
int y = x++ + ++x;   // Confusing 5 + 7 = 12
```

</details>
<!-------------- Pre-Increment Post-Increment    --------------->
<details>
  <summary> <b>2. Ternary Operator <code>?:</code> </b> </summary>

<br/>

**What is Ternary Operator?**

A **short form of if–else** that works in a single line.
```cpp
condition ? value_if_true : value_if_false;
```
**`if(){} else{}`**
```cpp
int a = 10;
int b = 20;

int max;
if (a > b)
{
    max = a;
}
else
{
    max = b;
}
cout << max; // 20
```
**`if(){} else{}`** replace it by **` ? : `**
```cpp
int a = 10;
int b = 20;
int max = (a > b) ? a : b;
cout << max; // 20
```
> Ternary Operator is Shorter, cleaner, same logic like if-else.

Check if a number is even or odd.
```cpp
int n = 7;

cout << ((n % 2 == 0) ? "Even" : "Odd");
```

When to Use Ternary Operator
- Simple conditions
- Single decision
- Avoid nested ternary operators

</details>
<!-------------- Ternary Operator  --------------->
<details>
  <summary> <b>3. <code>int</code> vs <code>long long</code></b> </summary>

<br/>

**Why Do We Need Different Data Types?** if we have already int
- Because each datatype has limits to how much bigger number it can store.

What Happens if int Overflows?
```cpp
int x = 2000000000; // 2 * 10^9
x = x + 1000000000;

cout << x << endl; // wrong due to overflow.
```

| `int`                                                    |  `long long`                     |
|----------------------------------------------------------|----------------------------------|
| Size: 4 bytes                                            | Size: 8 bytes                    |
| Range: `-2,147,483,648` to  `2,147,483,647` (`≈ 2 × 10⁹`)| Range: up to `≈ 9 × 10¹⁸`        |
| `int x = 1000000000;`                                    | `long long x = 1000000000000;`   |


**Use `long long` When:**
- Multiplying large numbers
- Constraints mention `10^9`, `10^12`, `10^18`
- Competitive programming problems


**`#define int long long` Hack**
- What Is This?
- A **preprocessor trick** used in competitive programming.
```cpp
#define int long long
```
- After this line: Every `int` becomes `long long`, but this will lead to one problem which you need to handle it the return type
  of `int main(){ return 0;}` also replaced with `long long main(){ return 0;}` which compiler will not accept. This will solved by
  just make `int main(){ return 0;}` to `signed main(){ return 0;}` bcuz `signed` avoids replacement.

<img width="500" height="322" alt="image" src="https://github.com/user-attachments/assets/4d7618b9-48a5-4046-b92a-f11f2284af04" />

```cpp
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {

    int n = 1000000000000000;
    cout << n ;

    return 0;
}
```
Bad Practice for beginner, but good for competitive programming bcuz It hides overflow bugs

</details>
<!--------------  int long long --------------->
<details>
  <summary> <b>4. Short-Circuit Evaluation (Logical Operators) <code>and && </code> <code>or || </code> </b> </summary>

<br/>

**What is Short-Circuiting?**

In C++, **logical operators**:
- `&&` (`and`) : both of the conditions must true then only gives true
- `||` (`or`)  : either of the condition is true then gives true


| condition 1 | condition 2 | `&&`   |
|-------------|-------------|--------|
| `true`      | `true`      | `true` |
| `true`      | `false`     | `false`|
| `false`     | `true`      | `false`|
| `false`     | `false`     | `false`|


| condition 1 | condition 2 | `or`   |
|-------------|-------------|--------|
| `true`      | `true`      | `true` |
| `true`      | `false`     | `true` |
| `false`     | `true`      | `true` |
| `false`     | `false`     | `false`|


> `&&` : If the **first condition is false**, The second condition is not evaluated.

> `||` :If the **first condition is true**, The second condition is not evaluated

This behavior is called **short-circuit evaluation**.

**Why Short-Circuiting Exists**
1. Improves performance
2. Prevents runtime errors
3. Enables safe condition checks

Very Important Practical Example (Division by Zero)
```cpp
int a = 10;
int b = 0;

if (a / b > 1)
{
    cout << "Valid" << endl; // Runtime error Dangerous
}
```
We can make it safe using logical `&&`
```cpp
int a = 10;
int b = 0;

if (b != 0 && a / b > 1)
{
    cout << "Valid" << endl;
}
```

</details>
<!-------------- 4. Short-Circuit Evaluation (Logical Operators)  --------------->

<details>
  <summary> <b>MCQs</b> </summary>

```cpp
int x = 5;
cout << x++ << endl; // 5
```
```cpp
int x = 5;
cout << ++x << endl; // 6
```
```cpp
int a = 3, b = 7;
cout << (a > b ? a : b); // 7
```
Which type should be used for storing `10^18`? : `long long`
```cpp
int x = 0;
if (x != 0 && ++x > 1)
{
}
cout << x << endl; // 0
```
```cpp
int x = 0;
if (x == 0 || ++x > 1)
{
}
cout << x << endl; // 0
```
```cpp
int x = 0;
if (x == 1 && ++x)
{
}
cout << x << endl; // 0
```

</details>
