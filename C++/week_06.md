# Week-06 Searching Basics and Sorting

## Searching

To look for something, to find something.

```A = [10, 7, 6, 4, 3, 2, 11, 9, 15, 17, 28]; target = 9;```

<details>
  <summary> <b> Linear Search (Sequential Search) </b> </summary>

- Check each element one by one until the target is found.

**Steps**
```
1. Start from first element
2. Compare with target
3. If match → return index
4. Else move to next
5. If end reached → not found
```
**Time Complexity**
```
Best: O(1)
Worst: O(n)
Works on unsorted data
```
  
```cpp
A = [10, 7, 6, 4, 3, 2, 11, 9, 15, 17, 28]
target = 9;

int N = A.size();
bool flag = false;
for(int i=0; i<N; i++)
{
   if(A[i] == target)
   {
       flag = true;
       break;
   }
}
if(flag){
   cout << "YES";
}
else{
   cout << "NO";
}
```

This is **Linear Search**, We're searching element by traversing each element.

If we know that data is sorted, We can search faster.

```cpp
A = [2, 3, 4, 6, 7, 9, 10, 11, 14, 15, 17, 18];
target = 14;
// If data is sorted, we can break early

int N = A.size();
bool flag = false;
for(int i=0; i<N; i++)
{
   if(A[i] == target)
   {
       flag = true;
       break;
   }
   if(A[i] > target)
   {
       break;
   }

}
if(flag){
   cout << "YES";
}
else{
   cout << "NO";
}
```
This is faster, but still in worst case scenario. like target = 29
Here, Early break strategy Not Work, bcuz we are going linear one by one.

> **We can exploit the fact that data is sorted in array and find/search the element little bit faster**.
> - This brings the **Concept of Binary Search**
> - **Binary Search** works onlyl on sorted data


</details>


<details>
  <summary> <b> Binary Search </b> </summary>

- Divide the sorted array into halves repeatedly.
- Works only on sorted arrays

**How it works**
```
1. Find middle element
2. If target == middle → found
3. If target < middle → search left
4. If target > middle → search right
5. Repeat
```
**Time Complexity**
```
Best: O(1)
Worst: O(log n)
Requires sorted data
```

```cpp
A = [2, 3, 4, 6, 7, 9, 10, 11, 15, 17, 28, 35, 40, 60, 65, 69, 70];
target = 52;
int N = A.size();

left = 0;
right = N;
mid = (left + right ) / 2;

if(A[mid] == target)
{
  flag = true;
  break;
}
else if(A[mid] < target)
{
  // Search in right
  left = mid+1;
}
else
{
  // Search in left
  right = mid - 1
}
```
Example : Dictionary searching a word since it is lexicographically sorted.


</details>

<details>
  <summary> <b> Other Seaching Techniques </b> </summary>

- **Jump Search**
> Instead of checking every element, jump ahead by fixed steps.
> - Best for sorted arrays.
> - Worst: O(√n)
  
- **Interpolation Search**
> Estimates where the element might be (like searching in a phone book).
> - Works best when data is uniformly distributed and sorted.
> - Best: O(log log n) and Worst: O(n)

- **Exponential Search**
> Quickly find the range, then apply binary search.
> - Best for: Very large sorted arrays | Unknown size arrays
> - Worst: O(log n)

- **Depth First Search (DFS)** - graphs
> Go as deep as possible before backtracking.
> - Uses stack (or recursion).
> - O(V + E)

- **Breadth First Search (BFS)** - graphs
> Visit neighbors level by level.
> - Uses queue.
> - O(V + E)


</details>

<details>
  <summary> <b> Summary of Searching </b> </summary>

|     **When to use what**              |
|---------------------------------------|
| Small unsorted → Linear Search        |
| Sorted large → Binary Search          |
| Uniform sorted → Interpolation Search |
| Huge sorted → Exponential Search      |
| Graph deep search → DFS               |
| Shortest path → BFS                   |

</details>

## Sorting

To re-arrange the data in a specific order (Ascending or Descending)

```A = [1, 2, 4, 8, 10, 20, 30, 40]; // Sorted in ASCENDING order```

```B = [100, 50, 30, 20, 10]; // // Sorted in DESCENDING order```

We have in-built function to sort, but we're not allowed while learning.

### Types of Sorting Algorithms

<details>
  <summary> <b> 1. Selection Sort </b> </summary>


**Steps**
1. Find the minimum element in the unsorted part
2. Swap it with the first unsorted position
3. Move the boundary forward
4. Repeat until sorted

**Complexity : Always O(n²)**

```
[ 11, 2, 14, 18, 20, 27, 3, 40 ]
boundary start = 0 to N-1, min = 2 swap(arr[0], min) start+=1
[ 2, 11, 14, 18, 20, 27, 3, 40 ]
boundary start = 1 to N-1, min = 3 swap(arr[0], min) start+=1
[ 2, 3, 11, 14, 18, 20, 27, 40 ]
boundary start = 2 to N-1, min = 11 swap(arr[0], min) start+=1
[ 2, 3, 11, 14, 18, 20, 27, 40 ]
boundary start = 3 to N-1, min = 14 swap(arr[0], min) start+=1
[ 2, 3, 11, 14, 18, 20, 27, 40 ]
boundary start = 4 to N-1, min = 18 swap(arr[0], min) start+=1
[ 2, 3, 11, 14, 18, 20, 27, 40 ]
boundary start = 5 to N-1, min = 20 swap(arr[0], min) start+=1
[ 2, 3, 11, 14, 18, 20, 27, 40 ]
boundary start = 6 to N-1, min = 27 swap(arr[0], min) start+=1
[ 2, 3, 11, 14, 18, 20, 27, 40 ]
boundary start = 6 to N-1, min = 40 swap(arr[0], min) start+=1
[ 2, 3, 11, 14, 18, 20, 27, 40 ]
```

code Implementation
```cpp
void selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int min = arr[i];
        int index = i;
        // find the min element in unsorted part
        for(int j=i+1; j<n; j++){
            if(arr[j] < min){
                min = arr[j];
                index = j;
            }
        }
        // Swap the min with first element
        if(index != i){
            swap(arr[i], arr[index]);
        }

    }
}
```

#
</details>


<details>
  <summary> <b> 2. Bubble Sort </b> </summary>

**Steps**
1. Compare adjacent elements and swap if they are in the wrong order.
2. After each pass, the largest element bubbles to the end.

**Time Complexity**
- Best: O(n) 
- Average: O(n²)
- Worst: O(n²)
- Space: O(1)

```cpp
void bubbleSort(int arr[], int n){
    // Compare adjacent elements and swap if they are in the wrong order.
    // After each pass, the largest element bubbles to the end.
    for (int i = n-1; i >= 1; i--) {
        // after every pass, the largest element of unsorted part will reach at the end
        bool flag = false;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                flag = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if(flag==false){
            break;
        }
            
    }
}
```

We can optimize it by using a flag and break early if no swap happen
```cpp
void bubbleSort(int arr[], int n){
    // Compare adjacent elements and swap if they are in the wrong order.
    // After each pass, the largest element bubbles to the end.
    for (int i = 0; i < n - 1; i++) {
        // Flag to optimize (detect already sorted)
        bool flag = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        // If no swaps happened, array is sorted
        if (!flag){
            break;
        }
            
    }
}
```

#
</details>


<details>
  <summary> <b> 3. Insertion Sort </b> </summary>

<br/>

Name itself says Inserting something

**Steps**
1. Build the sorted array one element at a time by inserting each element into its correct position.

> Think of it like sorting playing cards in your hand.

**Time Complexity**
- Best: O(n) 
- Average: O(n²)
- Worst: O(n²)
- Space: O(1)

```
A = [23, 1, 10, 5, 2, 4]
sorted   unsorted
[23,  1, 10, 5, 2, 4]
[1, 23,   10, 5, 2, 4]
[1, 10, 23,  5, 2, 4]
[1, 5, 10, 23,   2, 4]
[1, 2, 5, 10, 23,  4]
[1, 2, 4, 5, 10, 23]
```
How can we place element at correct position
```cpp
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];      // element to insert
        int j = i - 1;

        // Move elements greater than key one position ahead
        while (j >= 0 and arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;      // place key in correct position
    }
}
```

#
</details>


<details>
  <summary> <b> 4. Merge Sort </b> </summary>

### Merge two sorted array

```
A = [1, 7, 8, 150, 160]; //  N
B = [2, 5, 6, 9, 18, 19, 59]; // M

int C[N+M];

C = [1, 7, 8, 150, 160, 2, 5, 6, 9, 18, 19, 59];

C = [1, 2, 5, 6, 7, 8, 9, 18, 19, 59, 150, 160];
```

```cpp
#include<iostream>
using namespace std;

int main(){

A = {1, 7, 8, 150, 160};
B = {2, 5, 6, 9, 18, 19, 519};
// C = {1, 2, 5, 6, 7, 9, 18, 19, 150, 160, 519};
int N = 5;
int M = 7;
int A[N];
// input A
int B[M]
// input B

int C[N+M];
int i=0, j=0, k=0;
while(i<N and j<M){
    if(A[i] < B[i]){
        C[k] = A[i];
        i++;
    }
    else{
        C[k] = B[j];
        j++;
    }
    k++;
}

while(i<N){
    C[k] = A[i];
    i++;
    k++;
}
while(j<M){
    C[k] = B[j];
    j++;
    k++;
}

}

```

### Merge Sort

Merge Sort uses the **Divide and Conquer** technique.

**Steps**:
1. Divide the array into two halves
2. Recursively sort both halves
3. Merge the sorted halves

**Time Complexity: O(n log n)**

```cpp
#include <iostream>
using namespace std;

// Function to merge two subarrays
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    // Merge the temp arrays back
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort function
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

#
</details>


<details>
  <summary> <b> 5. Quick Sort </b> </summary>

#
</details>


<details>
  <summary> <b> 6. Heap Sortt </b> </summary>

#
</details>
