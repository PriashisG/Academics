# Problem - 01 :

**Problem Statement :** Use the following class Test with the data members. Now write and necessary codes in class and main() do the following
1. Initialize private data members x and y to 0 when empty constructor is called
2. Initialize private data members x and y using parameterized constructor is called
3. Initialize private data members x and y from another object using copy constructor
4. The data member z keeps track of total objects created
5. Write a method to initialize x and y
6. Write a method to display data member z only
7. Write a method to display x,y and z where their values can’t be changed
8. Create five objects
9. Find the sum of x
10. Find the object number whose y value is maximum
11. Write destructor

**Source Code :**
```cpp
#include <bits/stdc++.h>
using namespace std;

class Bank{
	int acn;
	int balance;
	static int total;
	static int sum;
	static int mx;

public :
	Bank(){ // Default Constructor
		acn = 0;
		balance = 0;
		total++;
	}
	Bank(int x, int y){ // Parameter Constructor
		acn = x;
		balance = y;
		total++;
	}
	Bank(const Bank *ptr){ // Copy Constructor
		acn = ptr->acn;
		balance = ptr->balance;
		total++;
	}
	void SetData(int x, int y){ // Data Set Function
		acn = x;
		balance = y;
	}
	void GetSum(){ // Sum Function
		sum += balance;
	}
	void GetMax(){ // Max finding function
		mx = max(mx, balance);
	}
	void Show(){ // Display all value without changing any value
		cout << "acc = " << acn << '\n';
		cout << "balance = " << balance << '\n';
		cout << "No = " << total << '\n';
	}
	void ShowTotal(){ // Display total balance
		cout << "Total Balance : " << sum << '\n';
	}
	void ShowMax(){ // Display max balance
		cout << "Max Balance : " << mx << '\n';
	}
	void ShowMemberCnt(){ // Display member cnt
		cout << "Member Count = " << total << '\n';
	}
	~Bank(){ // Destructor
		cout << "One account is closing\n";
	}
};

// Static member
int Bank::total = 0;
int Bank::sum = 0;
int Bank::mx = 0;

int main(void){
	int n;
	cout << "Enter Number of Account : ";
	cin >> n;
	Bank b[n];
	for (int i = 0; i < n; i++){
		int x, y;
		cout << "Acc No : ";
		cin >> x;
		cout << "Enter Balance : ";
		cin >> y;
		b[i].SetData(x, y);
	}
	for (int i = 0; i < n; i++){
		b[i].GetSum();
		b[i].GetMax();
	}
	cout << '\n';
	b->ShowTotal();
	b->ShowMax();
	b->ShowMemberCnt();
}
```

**Input & Output :**
```
Enter Number of Account : 5
Acc No : 1
Enter Balance : 100
Acc No : 2
Enter Balance : 200
Acc No : 3
Enter Balance : 300
Acc No : 4
Enter Balance : 400
Acc No : 5
Enter Balance : 500

Total Balance : 1500
Max Balance : 500
Member Count = 5
One account is closing
One account is closing
One account is closing
One account is closing
One account is closing
```

# Problem - 02

**Problem Statement :** Write a class A with two data member a and b. Now set the values of a and b of an object obj1 by a setter method SetData() and copy the values of a and b of obj1 to another object obj2 by using copy constructor.

**Source Code :**
```cpp
#include <bits/stdc++.h>
using namespace std;

class A{
	int a, b;
public :
	void SetData(int x, int y){
	a = x;
	b = y;
	}
	A(){}
	A(const A *ptr){
		a = ptr->a;
		b = ptr->b;
	}
	void ShowData(){
		cout << "a : " << a << '\n';
		cout << "b : " << b << '\n';
	}
};

int main(void){
	A obj1;
	obj1.SetData(10, 20);
	A obj2(&obj1);
	cout << "obj1 data : \n";
	obj1.ShowData();
	cout << "obj2 data : \n";
	obj2.ShowData();
}
```

**Input & Output :**
```
obj1 data : 
a : 10
b : 20
obj2 data : 
a : 10
b : 20
```
