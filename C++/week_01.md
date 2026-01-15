## Introduction to C++
- How computers think?
- Why programming languages exist?
- Writing our first C++ code
- Rules of printing
- Data types & operators
- Taking input
- Making decisions (if-else)
- Assignments

<details>
  <summary> <b>What is Programming? </b> </summary>


</details>

<details>
  <summary> <b>Why Programming Languages Exist? </b> </summary>


</details>


<details>
  <summary> <b>IDE & Importance of Syntax </b> </summary>

<br/>Locally Install
- VSCode
- Sublime Text
- Code::Blocks
- Eclips
- CLion by JetBrains IntelliJ IDEA

Online Compilers
- [https://www.codechef.com/ide](https://www.codechef.com/ide)
- [Online GDB](https://www.onlinegdb.com/)

</details>



<details>
  <summary> <b> First C++ Code (Hello World) </b> </summary>

```cpp
#include<iostream>
using namespace std;

int main(){
  cout << "Hello World";
  return 0;
}
```

</details>

<details>
  <summary> <b> Some Important Rules To Remember </b> </summary>

- **Semicolon** : Every statement must end with ;
- **Case Sensitive** : cout will work, but COUt will not.
- **Printing Text** : Text must be inside double quotes.
- **New Line** : For a new line, use endl.
- **Brackets** Come in Pairs

</details>


<details>
  <summary> <b> Arithmetic Operators </b> </summary>

| Operator  | Meaning                  | Example     |
|-----------|--------------------------|-------------|
| ```+```   | Addition/Add             | 10 + 2 = 12 |
| ```-```   | Subtraction/Minus        | 10 - 5 = 5  |
| ```*```   | Multiplication/Production| 10 * 4 = 40 |
| ```/```   | Division                 | 10 / 3 = 3  |
| ```%```   | Modulo/Remainder         | 10 % 3 = 1  |

</details>

<details>
  <summary> <b> Variables </b> </summary>

- A variable is a named box in the computer’s memory where we store some data.

```cpp
#include<iostream>
using namespace std;

int main(){
  int age;
  age = 21;
  cout << "age" <<endl;
  cout << age <<endl;
  return 0;
}
```

</details>

<details>
  <summary> <b> Data Types (Foundation) </b> </summary>

|  Category    | Type            | Use               |
|--------------|-----------------|-------------------|
| Number       | ```int```       | whole number      |
| Number       | ```double```    | decimal number    |
| Number       | ```float```     | decimal number    |
| Number       | ```long long``` | big numbers       |
| character    | ```char```      | Single Character  |
| Boolean      | ```bool```      | true->1 /false->0 |

</details>

<details>
  <summary> <b> Some Important Rules To Remember </b> </summary>

- Variable must be declared before use
- No spaces in variable names
- Case sensitive : marks ≠ Marks
- Name should be meaningful (not x1, a2 everywhere)

</details>

<details>
  <summary> <b> Taking INPUT </b> </summary>

```cpp
#include<iostream>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  cout << a <<endl;
  cout << b <<endl;
  cout << c <<endl;
  return 0;
}
```

</details>

<details>
  <summary> <b>Relational Operators </b> </summary>

| Operator  | Name                    | Example | Result |
|-----------|-------------------------|---------|--------|
| ```>```   | Greater than            | 7 > 5   | true   |
| ```>=```  | Greater than & Equal to | 7 >= 7  | true   |
| ```<```   | Less than               | 5 < 3   | false  |
| ```<=```  | Less than & Equal to    | 2 <= 5  | true   |
| ```==```  | Equal to                | 9 == 9  | true   |
| ```!=```  | Not equal to            | 4 != 4  | false  |


</details>

<details>
  <summary> <b>Logical Operators </b> </summary>

| Operators         | Name   | Example    | Result  |
|-------------------|--------|------------|---------|
| ```&&```/```and```| and    | 3>1 and 1>2| false   |
| ```\\```/```or``` | or     | 3>1 or 1>2 | true    |

</details>

<details>
  <summary> <b> Conditionals </b> <code> if(){ }else{ }</code></summary>

```cpp
#include<iostream>
using namespace std;

int main(){
   int num = 10;
   if(num%2 == 0){
      cout<<"num is divisible by 2";
   }
   else{
      cout<<"num is not divisible by 2";
   }
 return 0;
}
```

</details>

<details>
  <summary> <b> Assignment </b> </summary>

| Num  | Problem                                                             | Topic   | Idea  | What I did Wrong | Status         | Revisit? |
|------|---------------------------------------------------------------------|---------|-------|------------------|----------------|----------|
| A    | [Hello World](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/A)| Printing| cout  | Nothing          | Solved(no help)| No       |
| B    | [Print First 5 Alphabets](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/B)| | | | | |
| C    | [Triangle](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/C)| | | | | |
| D    | [Print Z](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/D)| | | | | |
| E    | [Print Table of 5](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/E)| | | | | |
| F    | [Rectangle](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/F)| | | | | |
| G    | [Print Table of N](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/G)| | | | | |
| H1   | [Calculator](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/H1)| | | | | |
| H2   | [Calculator - II](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/H2)| | | | | |
| I    | [Add Last Digits](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/I)| | | | | |
| J    | [Even or Odd](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/J)| | | | | |
| K    | [Factor](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/K)| | | | | |
| L    | [Multiple](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/L)| | | | | |
| M    | [Pass or Fail](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/M)| | | | | |
| N    | [Max and Min of 2 Numbers](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/N)| | | | | |
| O    | [Max and Min of 3 Numbers](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/O)| | | | | |
| P    | [Student Performance Evaluation](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/P)| | | | | |
| Q    | [Find the location point](https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/Q)| | | | | |



</details>


| [Prev]() | Week-1 | [Next]() |
|----------|--------|----------|
