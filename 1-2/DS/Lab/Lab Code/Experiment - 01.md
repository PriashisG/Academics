# Problem - 01

**Name of the Problem :** Find the Complexity of a Loop.

**Tools :** Visual Stdio Code, GNU G++ Compiler, C++.

**Algorithm1.1:** 
1. Repeat for K = 1 to n by 1.
2. Write: K  (End of Step 1 loop).
3. Exit.

**Source Code :**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	cout << "Size of the loop : ";
	cin >> n;
	
	auto start = chrono::high_resolution_clock::now();
	
	for (int K = 1; K <= n; K++){
		cout << K << ' ';
	}
	cout << "\n\n";
	
	auto end = chrono::high_resolution_clock::now();
	chrono::duration<double> duration = end - start;
	cout << "Execution time: " << duration.count() << " seconds\n";
}
```

**Table :**

| n   | f(n) (from Program, Count Statement) | cg(n)(Theoretical) |
| --- | ------------------------------------ | ------------------ |
| 100 | 100                                  | 100                |
| 200 | 200                                  | 200                |
| 300 | 300                                  | 300                |
| 400 | 400                                  | 400                |

**Graph :**

**Comments :**


# Problem - 02

**Name of the Problem :** Find the Complexity of the following Program.

**Tools :** Visual Stdio Code, GNU G++ Compiler, C++.

**Algorithm1.2:** 
1. Repeat for K = 1 to n by 1.
2. Repeat for L = 1 to n by 1. 
3. Write: L (End of Step 2 loop).
4. Write: K (End of Step 1 loop).
5. Exit.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	cout << "Size of the loop : ";
	cin >> n;
	
	auto start = chrono::high_resolution_clock::now();
	
	for (int K = 1; K <= n; K++){
		for (int L = 1; L <= n; L++){
			cout << L << ' ';
		}
		cout << "\nK = " << K << '\n';
	}
	cout << "\n\n";
	
	auto end = chrono::high_resolution_clock::now();
	chrono::duration<double> duration = end - start;
	cout << "Execution time: " << duration.count() << " seconds\n";
}
```

**Table :**

| n   | f(n) (from Program, Count Statement) | cg(n)(Theoretical) |
| --- | ------------------------------------ | ------------------ |
| 10  | 100 + 10 = 110                       | 200                |
| 20  | 400 + 20 = 420                       | 800                |
| 30  | 900 + 30 = 930                       | 1800               |
| 40  | 1600 + 40 = 1640                     | 3200               |

**Graph :**

**Comments :**

# Problem - 03

**Name of the Problem :** Find the Complexity of the elementary Sort algorithm.

**Tools :** Visual Stdio Code, GNU G++ Compiler, C++.

**Algorithm1.3:** 
Given a nonempty array A with n numerical values. This algorithm sorts the values.
1. Repeat for i = 2 to n by 1.
2. Repeat for k = i to 1 by -1.
3. If A[k]<A[k-1] then: 
	- Swap (A[k], A[k-1]) 
	- [End of If Structure] 
	- [End of Step 2 loop] 
	- [End of Step 1 loop] 
4. Exit.

**Source Code :**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cout << "Size of the array : ";
	cin >> n;
	
	int arr[n];
	cout << "Enter " << n << " elements:\n";
	for (int i = 0; i < n; i++) cin >> arr[i];

	auto start = chrono::high_resolution_clock::now();

	for (int i = 1; i < n; i++) {
		for (int k = i; k >= 1; k--) {
			if (arr[k] < arr[k - 1]) swap(arr[k], arr[k - 1]);
			else break;
		}
	}

	auto end = chrono::high_resolution_clock::now();
	chrono::duration<double> duration = end - start;
	
	cout << "Sorted array:\n";
	for (int i = 0; i < n; i++) cout << arr[i] << ' ';
	cout << "\nExecution time: " << duration.count() << " seconds\n";
}
```

**Table :**

| n   | f(n) $(\approx n^2)$ | cg(n) $(\approx 2n^2)$ |
| --- | -------------------- | ---------------------- |
| 10  | 100                  | 200                    |
| 20  | 400                  | 800                    |
| 30  | 900                  | 1800                   |
| 40  | 1600                 | 3200                   |

**Graph :**

**Comments :**


# Problem - 04 

**Name of the Problem :** Find the largest element in Array.

**Tools :** Visual Stdio Code, GNU G++ Compiler, C++.

**Algorithm1.4:** 
Given a nonempty array A with n numerical values. This algorithm finds the location LOC and the value MAX of the largest element of A.
1. Set K:=1, LOC:=1 and MAX:=A[1].
2. Repeat steps 3 and 4 while K≤n .
3. IF MAX < A[K] then: 
	- Set LOC:=K and MAX:=A[K].
	- [End of If structure] 
4. K:=K+1. 
	- [End of step 2 loop] 
5. Write: LOC, MAX. 
6. Exit.

**Source Code :**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cout << "Size of the array : ";
	cin >> n;
	
	int arr[n];
	cout << "Enter " << n << " elements:\n";
	for (int i = 0; i < n; i++) cin >> arr[i];
	
	auto start = chrono::high_resolution_clock::now();
	
	int loc = 0, max_val = arr[0];
	for (int k = 0; k < n; k++) {
		if (arr[k] > max_val) {
			max_val = arr[k];
			loc = k;
		}
	}
	
	auto end = chrono::high_resolution_clock::now();
	chrono::duration<double> duration = end - start;
	cout << "Maximum value: " << max_val << '\n';
	cout << "Location (0-based index): " << loc << '\n';
	cout << "Execution time: " << duration.count() << " seconds\n";
}
```

**Table :**

| n   | f(n) $(\approx n)$ | cg(n) $(\approx n)$ |
| --- | ------------------ | ------------------- |
| 11  | 100                | 200                 |
| 20  | 400                | 800                 |
| 30  | 900                | 1800                |
| 40  | 1600               | 3200                |
