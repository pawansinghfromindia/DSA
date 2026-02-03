# Variable 

**What is a Variable?** 
- A **variable** is a named memory location used to store data.
Syntax of a variable in C++ : 
```cpp
int x = 10;
```
`int` -> data_type, <br/> `x`-> variable_name, <br/> `10` -> value  <br/> `=` assignment operator.

<details>
  <summary> Rules for Variables  </summary>

**Variable Naming Rules**
- We can name variables using Letters (`a to z, A to Z`), Digits (`0 to 9`), Underscore `_`
- We can't put digit at the first character of variable name `int 1name = 10`
- No Special characters is allowed in the variable name `int @age = 10`
- We can't name variable with the name already reserved by C++ language which is known as `Keywords` like int, main,, for, while, etc
  [keywords](https://en.cppreference.com/w/cpp/keywords.html)

```cpp
int totalMarks; // correct
int total_marks; // correct
int _count; // correct
int marks2; //correct


int 2marks; // error
int total-marks; // error
int total@marks; // error
int int; // error
```
</details>

**Types of Variables** based on Scope

<details>
  <summary> <b>1. Local Variables </b> </summary>

> **Local Variables** : Accessible only inside the block, Declared inside a block/function
```cpp
#include <bits/stdc++.h>
using namespace std;

void fun1(){
    int x = 2; // local variable
    int y = 100; // local variable
    cout << "in fun1 x = " << x << endl; // 2
}

void fun2(){
    int x = 3; // local variable
    int z = 50; // local variable
    cout << "in fun2 x = " << x << endl; // 3
}

int main() {

    int x = 1; // local variable
    cout << x << endl; // 1
    fun1();
    fun2();
    //cout << y << endl; // we can't access y here
    //cout << z << endl; // we can't access z here
    
    return 0;
}
```
</details>
  
<details>
  <summary> <b>2. Global Variables  </b> <code> :: Scope Resolution Operator</code></summary>

> **Global Variables** : Accessible throughout the program, Declared outside all block/functions
```cpp
#include <bits/stdc++.h>
using namespace std;

int x = 10; // global var

void fun1(){
    cout << "in fun1 x = " << x << endl; // 10
}

void fun2(){
    cout << "in fun2 x = " << x << endl; // 10
}

int main() {

    cout << "in main, x = " << x << endl;
    fun1();
    fun2();
    
    return 0;
}
```

We can have local variable with the same name of global variable. And when we access it, first control look for local variable,
if local variable is available it will print it and local variable is not available it will look for global then it will print it.
```cpp
#include <bits/stdc++.h>
using namespace std;

int x = 10;


int main() {

    int x = 1; // local variable
    cout << x << endl; // 1 - local variable
 
    
    return 0;
}
```
when the conflict arises and we want't to access the global variable of the same name in that with a local varibale is exists in that
case we have **Scope resolution operator** `::` to access the global variable.
```cpp
#include <bits/stdc++.h>
using namespace std;

int x = 10;

void fun1(){
    int x = 2; // local variable
    cout << "in fun1 local x = " << x << endl; // 2 local variable
    cout << "in fun1 global x = " << ::x << endl; // 10 global variable
    cout << "in fun1 global y = " << "We can't access it"<< endl;
    //cout << "in fun1 global y = " << ::y << endl; // error
}

int y = 20; // global variable, It is accessible after declaration and before

void fun2(){
    int x = 3; // local variable
    cout << "in fun2 local x = " << x << endl; //  3 local variable
    cout << "in fun1 global x = " << ::x << endl; // 10 global variable
    cout << "in fun1 global y = " << ::y << endl; // 20 global variable
}

int main() {

    int x = 1; // local variable
    cout << x << endl; // 1 - local variable
    cout << ::x << endl; // 10 - global variable
    cout << ::y << endl; // 10 - global variable
    fun1();
    fun2();
 
    
    return 0;
}
```
</details>

<details>
  <summary> Static Variables  </summary>

> **Static Variables** `static ` : Value is preserved between function calls
```cpp
void count() {
    static int x = 0;
    x++;
    cout << x << endl;
}
```
</details>

<details>
  <summary> Constant Variables  </summary>

> **Constant Variables** `const` : Value cannot be changed
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    const float PI = 3.14159;
    cout << PI << endl; // correct
    
    const int side;
    side = 4;
    cout << side << endl; //error
       
    return 0;
}
```
</details>

<details>
  <summary> Auto Keyword  </summary>

**Auto Keyword (Modern C++)** `auto` : Compiler automatically decides type.
It is useful in large programs.
```cpp
#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;


int main() {

    auto x = 10;      // int
    auto y = 3.14;    // double
    auto z = 'a';     // char

    cout << x << " " << typeid(x).name() << endl; //10 i
    cout << y << " " << typeid(y).name() << endl; //3.13 d
    cout << z << " " << typeid(z).name() << endl; // a c
    
    return 0;
}
```
</details>

<details>
  <summary> Lifetime of a Variable </summary>

| Variable Type | Lifetime         |
| ------------- | ---------------- |
| Local         | Until block ends |
| Global        | Entire program   |
| Static        | Entire program   |

</details>

<details>
  <summary>Scope vs Lifetime </summary>

| Term	    | Meaning |
|-----------|---------------------------------|
| Scope	    | Where a variable can be accessed|
| Lifetime  | How long it exists in memory    |

Example :
```cpp
void fun()
{
    int x = 10;
}
// Scope of x is : inside fun() only
// Lifetime of x is : only while fun() executes

int main(){
  cout << x << endl;
}
```
</details>

<!------------------------------------------------------------------------------>

# Scope

**What is a Scope?** 
- Scope defines as ***Where a variable is accessible in the program.***

**Where a variable can be used is decided by its scope.**
  
<details>
  <summary> <b>Variable and its Scope</b> </summary>

If a variable is accessed outside its scope, it does not exist for the compiler.

**Why Do We Need Scope?**
1. Avoid name conflicts
2. Reduce memory usage
3. Improve code readability
4. Control variable lifetime

**Types of Scope in C++**
1. Local Scope
2. Block Scope (if / loops)
3. Function Scope
4. Global Scope
5. Local vs Global Variable (with Same Name)
6. Nested Block Scope
7. Variable Shadowing
 
<details>
  <summary> See each of them one by one </summary>

**1. Local Scope** : A variable declared inside a function is **local** to that function.
```cpp
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    cout << x << endl;
}

//x is accessible only inside main.
```
Outside the Function
```cpp
int main()
{
    int x = 10;
}

cout << x;   // Error
// variable x does not exist outside main.
```
**2. Block Scope (if / loops)** : Any variable declared inside `{}` belongs only to that block.
- `if(){ }` block
```cpp
int main()
{
    if (true)
    {
        int a = 5;
        cout << a << endl;
    }
    cout << a;   // Error
}
// a exists only inside the if.
```
- `for(){ }` block
```cpp
for(int i = 1; i <= 5; i++)
{
    cout << i << " ";
}
cout << i;  // Error
// i exists only inside the loop.
```

**3. Function Scope** : Variables declared inside a function cannot be accessed outside it.
```cpp
void fun()
{
    int x = 100;
    cout << x << endl;
}

int main()
{
    fun();
    cout << x;   // Error
}
```
**4. Global Scope** : A variable declared outside all functions is a **global variable**.
```cpp
#include <iostream>
using namespace std;

int x = 50;

void fun()
{
    cout << x << endl;
}

int main()
{
    cout << x << endl; // 50
    fun(); // 50
}
```
> **Global variables are accessible everywhere in the program.**
> Take **Caution with Global Variables** bcuz
> - Can be modified from anywhere
> - Makes debugging harder

**5. Local vs Global Variable (with Same Name)** 
```cpp
int x = 10;
int main()
{
    int x = 20;
    cout << x << endl; // 20 why?
// bcuz Local variable takes precedence over the global variable.
// But if we want to Access the  Global Variable Explicitly, here we have a special operator
}
```
Accessing the  Global Variable Explicitly using `::` scope resolution operator
```cpp
int x = 10;
int main()
{
    int x = 20;
    cout << ::x << endl; // 10 accessing global variable using ::
}
```
**6. Nested Block Scope**
- Inner blocks can access outer variables
- Outer blocks cannot access inner variables
```cpp
int main()
{
    int x = 10;

    {
        int y = 20;
        cout << x << " " << y << endl; // 20
    }

    cout << x << endl; // 10
    cout << y;   // Error
}
```
**7. Variable Shadowing** : When a variable in an inner scope has the same name as one in an outer scope.
```cpp
int main()
{
    int x = 5;

    if(true)
    {
        int x = 10;
        cout << x << endl;  // 10
    }

    cout << x << endl; // 5
}
```
</details>

</details>
<!------------------------------------------------------------------------------>


<details>
  <summary>Common Mistakes with variables and its scope </summary>
  
Using uninitialized variables gives you **Garbage value** 
```cpp
int x;
cout << x;  // garbage value
```
Declaring Wrong data type might cause data loss instead of error sometime
```cpp
int pi = 3.14;  // data loss
cout << pi; // 3
```

Using Variable Before Declaration
```cpp
cout << x;
int x = 10; // error
```
Assuming Loop Variable Exists Outside
```cpp
for(int i = 0; i < 5; i++) {}
cout << i;   // Error
```
Accidentally Modifying Global Variables : Hard to track changes in large programs.
```cpp
int x = 10;

void fun()
{
    int x = 20;
    cout << x << endl;
}

int main()
{
    cout << x << endl;  // 10
    fun(); // 20
    cout << x << endl; // 10
}
```
</details>

**Best Practices**

1. Prefer local variables over global
2. Keep variable scope as small as possible
3. Avoid reusing variable names
4. Use meaningful names
5. Avoid unnecessary globals


