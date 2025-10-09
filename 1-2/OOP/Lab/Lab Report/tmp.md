# Module 1

### Demonstration of Circle Class
```cpp
#include <bits/stdc++.h>
using namespace std;

class Circle{
    int radius;
    float area;
    double sum = 0;

    public :
        void GetInput(){
            int a;
            cin >> a;
            radius = a;
        }

        void FindArea(){
            float x = 3.1416 * radius * radius;
            area = x;
        }

        void PrintValue(){
            cout << "Radius : " << radius << '\n';
            cout << "Area : " << area << '\n';
        }

        void CalSum(){
            sum += area;
        }

        void PrintSum(){
            cout << '\n' << "Total Sum : " << sum << '\n';
        }
};

int main(void){
    Circle c;

    for (int i = 0; i < 3; i++){
        c.GetInput();
        c.FindArea();
        c.PrintValue();
    }

    c.CalSum();
    c.PrintSum();

}
```

### Demonstration of a Triangle Class
```cpp
#include <bits/stdc++.h>
using namespace std;

class Triangle {
    int edge1, edge2, edge3;
    float area = 0;
    bool isOk = false;

public:
    void GetInput() {
        cin >> edge1 >> edge2 >> edge3;
    }

    void CanForm() {
        if ((edge1 + edge2 > edge3) && (edge2 + edge3 > edge1) && (edge1 + edge3 > edge2))
            isOk = true;
        else
            isOk = false;
        PrintValue("decision");
    }

    void FindArea() {
        if (isOk) {
            float s = (edge1 + edge2 + edge3) / 2.0;
            area = sqrt(s * (s - edge1) * (s - edge2) * (s - edge3));
        } else {
            area = 0;
        }
    }

    void PrintValue(string s) {
        if (s == "area") {
            if (isOk)
                cout << "Area : " << area << '\n';
        } else if (s == "decision") {
            if (isOk)
                cout << "It can form triangle.\n";
            else
                cout << "It can't form triangle.\n";
        }
    }
};

int main() {
    Triangle t;
    t.GetInput();
    t.CanForm();    
    t.FindArea();   
    t.PrintValue("area");
    return 0;
}
```

### Bank Management System
```cpp
#include <bits/stdc++.h>
using namespace std;

class Bank {
    int AccNo;
    float Balance;

public:
    void SetData(int n, float b) {
        AccNo = n;
        Balance = b;
    }

    float GetBalance() {
        return Balance;
    }

    void SetBalance(float b) {
        Balance += b;
    }

    void SetWithdrawal(float b) {
        if (b <= Balance)
            Balance -= b;
        else
            cout << "Insufficient balance!\n";
    }

    int GetAccNo() {
        return AccNo;
    }
};

Bank b[5];
int Total = 0;

void Create() {
    if (Total >= 5) {
        cout << "Max 5 accounts allowed.\n";
        return;
    }

    int acc;
    float bal;
    cout << "Enter Account Number: ";
    cin >> acc;
    cout << "Enter Initial Balance: ";
    cin >> bal;
    b[Total++].SetData(acc, bal);
    cout << "Account created successfully.\n";
}

int FindIndex(int acc) {
    for (int i = 0; i < Total; ++i) {
        if (b[i].GetAccNo() == acc)
            return i;
    }
    return -1;
}

void Deposit() {
    int acc;
    float amount;
    cout << "Enter Account Number: ";
    cin >> acc;
    int index = FindIndex(acc);
    if (index == -1) {
        cout << "Account not found.\n";
        return;
    }
    cout << "Enter Deposit Amount: ";
    cin >> amount;
    b[index].SetBalance(amount);
    cout << "Deposit successful.\n";
}

void Withdrawal() {
    int acc;
    float amount;
    cout << "Enter Account Number: ";
    cin >> acc;
    int index = FindIndex(acc);
    if (index == -1) {
        cout << "Account not found.\n";
        return;
    }
    cout << "Enter Withdrawal Amount: ";
    cin >> amount;
    b[index].SetWithdrawal(amount);
}

void Transfer() {
    int fromAcc, toAcc;
    float amount;
    cout << "Enter From Account Number: ";
    cin >> fromAcc;
    cout << "Enter To Account Number: ";
    cin >> toAcc;

    int fromIndex = FindIndex(fromAcc);
    int toIndex = FindIndex(toAcc);

    if (fromIndex == -1 || toIndex == -1) {
        cout << "Invalid account number(s).\n";
        return;
    }

    cout << "Enter Amount to Transfer: ";
    cin >> amount;

    if (b[fromIndex].GetBalance() >= amount) {
        b[fromIndex].SetWithdrawal(amount);
        b[toIndex].SetBalance(amount);
        cout << "Transfer successful.\n";
    } else {
        cout << "Insufficient balance.\n";
    }
}

void ShowBalance() {
    int acc;
    cout << "Enter Account Number: ";
    cin >> acc;
    int index = FindIndex(acc);
    if (index == -1) {
        cout << "Account not found.\n";
        return;
    }
    cout << "Current Balance: " << b[index].GetBalance() << '\n';
}

int main() {
    int option;
    while (true) {
        cout << "\n<----- MAIN MENU ----->\n";
        cout << "1. New Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdrawal\n";
        cout << "4. Transfer Money\n";
        cout << "5. Show Balance\n";
        cout << "6. Exit\n";
        cout << "Enter Your Option: ";
        cin >> option;

        if (option == 1) Create();
        else if (option == 2) Deposit();
        else if (option == 3) Withdrawal();
        else if (option == 4) Transfer();
        else if (option == 5) ShowBalance();
        else if (option == 6) {
	        cout << "Program exits.\n";
	        break;
        }
        else cout << "Invalid option.\n";
    }

    return 0;
}
```

### Gym Management System
```cpp
#include <bits/stdc++.h>
using namespace std;

class Member {
    int id;
    float height, weight;
    string pass;

public:
    void SetData(int i, float h, float w, string p) {
        id = i;
        height = h;
        weight = w;
        pass = p;
    }

    bool Auth() {
        string s;
        for (int i = 0; i < 3; ++i) {
            cout << "Enter Password: ";
            cin >> s;
            if (s == pass) return true;
        }
        return false;
    }

    void Update() {
        if (!Auth()) return void(cout << "Authentication failed!\n\n");
        float h_ft;
        cout << "New Height (ft): ";
        while (!(cin >> h_ft)) {
            cin.clear(); cin.ignore(1000, '\n');
            cout << "Invalid input. Try again: ";
        }
        height = h_ft * 0.3048;
        cout << "New Weight: ";
        while (!(cin >> weight)) {
            cin.clear(); cin.ignore(1000, '\n');
            cout << "Invalid input. Try again: ";
        }
        cout << "Updated successfully!\n\n";
    }

    void ShowBMI() {
        if (!Auth()) return void(cout << "Authentication failed!\n\n");
        float bmi = weight / (height * height);
        cout << "BMI = " << fixed << setprecision(2) << bmi << "\nClassification: ";
        if (bmi < 18.5) cout << "Underweight\n\n";
        else if (bmi < 25) cout << "Normal\n\n";
        else if (bmi < 30) cout << "Overweight\n\n";
        else cout << "Obese\n\n";
    }

    float getHeight() const { return height; }
    float getWeight() const { return weight; }
};

Member members[1000];
int total = 1;

void Pause() {
    string s;
    cout << "<---Press any key--->\n";
    cin >> s;
    system("cls");
}

float InputFloat(const string &msg) {
    float val;
    cout << msg;
    while (!(cin >> val)) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Invalid input. Try again: ";
    }
    return val;
}

void AddMember() {
    float h = InputFloat("Height (ft): ") * 0.3048;
    float w = InputFloat("Weight (kg): ");
    string pass;
    cout << "Set Password: ";
    cin >> pass;
    members[total].SetData(total, h, w, pass);
    cout << "Member ID: " << total + 1000 << "\nAdded Successfully\n\n";
    total++;
    Pause();
}

void UpdateMember() {
    int id;
    cout << "Member ID: ";
    if (!(cin >> id)) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Invalid input!\n\n"; return Pause();
    }
    int idx = id - 1000;
    if (idx > 0 && idx < total) members[idx].Update();
    else cout << "Member not found!\n\n";
    Pause();
}

void RemoveMember() {
    int id;
    cout << "Member ID: ";
    if (!(cin >> id)) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Invalid input!\n\n"; return Pause();
    }
    int idx = id - 1000;
    if (idx > 0 && idx < total && members[idx].Auth()) {
        for (int i = idx; i < total - 1; i++) members[i] = members[i + 1];
        total--;
        cout << "Member Removed Successfully!\n\n";
    } else cout << "Authentication failed or Member not found.\n\n";
    Pause();
}

void StatHW(bool max) {
    if (total == 1) return void(cout << "No members yet.\n\n", Pause());
    float h = max ? 0 : 1e9, w = h;
    for (int i = 1; i < total; i++) {
        h = max ? max(h, members[i].getHeight()) : min(h, members[i].getHeight());
        w = max ? max(w, members[i].getWeight()) : min(w, members[i].getWeight());
    }
    cout << (max ? "Max" : "Min") << " Height: " << h << " m\n"
         << (max ? "Max" : "Min") << " Weight: " << w << " kg\n\n";
    Pause();
}

void AvgHW() {
    if (total == 1) return void(cout << "No members yet.\n\n", Pause());
    float th = 0, tw = 0;
    for (int i = 1; i < total; i++) {
        th += members[i].getHeight();
        tw += members[i].getWeight();
    }
    cout << "Average Height: " << th / (total - 1) << " m\n";
    cout << "Average Weight: " << tw / (total - 1) << " kg\n\n";
    Pause();
}

void BMI() {
    int id;
    cout << "Member ID: ";
    if (!(cin >> id)) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Invalid input!\n\n"; return Pause();
    }
    int idx = id - 1000;
    if (idx > 0 && idx < total) members[idx].ShowBMI();
    else cout << "Member not found!\n\n";
    Pause();
}

int main() {
    while (2) {
        cout << "<---Main Menu--->\n\n";
        cout << "1. Add Member\n";
        cout << "2. Update Member\n";
        cout << "3. Remove Member\n";
        cout << "4. Max Height & Weight\n";
        cout << "5. Min Height & Weight\n";
        cout << "6. Average Height & Weight\n";
        cout << "7. BMI Classification\n";
        cout << "0. Exit\n\n";
        cout << "Choose an option: ";
        int choice;
        if (!(cin >> choice)) {
            cin.clear(); cin.ignore(1000, '\n');
            cout << "Invalid input!\n\n"; continue;
        }
        system("cls");
        switch (choice) {
            case 1: AddMember(); break;
            case 2: UpdateMember(); break;
            case 3: RemoveMember(); break;
            case 4: StatHW(true); break;
            case 5: StatHW(false); break;
            case 6: AvgHW(); break;
            case 7: BMI(); break;
            case 0: return 0;
            default: cout << "Invalid option!\n\n";
        }
    }
}
```


# Module 2

### Manipulation of Object of a Class
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


# Module 3

### Verification of Range of Access of Child and Grandchild class
```cpp
#include <bits/stdc++.h>

using namespace std;

class Father {
private:
    int money = 10;
protected:
    int gold = 20;
public:
    int land = 30;

    int GetMoney(){
        return money;
    }

    int GetGold(){
        return gold;
    }

    int GetLand(){
        return land;
    }
};

class Son: protected Father {
public:
    void display(){
        cout << "Money = " <<  GetMoney() << "\n";
        cout << "Gold = " << GetGold() << "\n";
        cout << "Land = " << GetLand() << "\n";
    }
};

class GrandSon: public Son {
public:
    void display(){
        cout << "Money = " <<  GetMoney() << "\n";
        cout << "Gold = " << GetGold() << "\n";
        cout << "Land = " << GetLand() << "\n";
    }

    int GetSum(){
        return GetMoney() + GetGold() + GetLand();
    }
};

int main(){
    GrandSon test;
    cout << test.GetSum() << "\n";
    return 0;
}
```


# Module 4

### Method/Function Overloading
```cpp
#include<bits/stdc++.h>
using namespace std;

class Test{
public :
	int Sum (int x){
		return x;
	}
	int Sum (int x, int y){
		return x + y;
	}
	double Sum (double x, int y){
		return x + y;
	}
	double Sum (int x, double y){
		return x + y;
	}
	double Sum (double x, double y){
		return x + y;
	}
};
int main(void){
	Test t;
	cout << t.Sum(10) << '\n';
	cout << t.Sum(10,20) << '\n';
	cout << t.Sum(5.7,20) << '\n';
	cout << t.Sum(10,2.6) << '\n';
	cout << t.Sum(10.5,20.7) << '\n';
}
```

### Operator Overloading
```cpp
#include <bits/stdc++.h>
using namespace std;

class Circuit {
private:
    double real, img;
public:
    Circuit(double x, double y) {
        real = x ,img = y;
    }
    Circuit inverse() const {
        double denom = real * real + img * img;
        return Circuit(real / denom, -img / denom);
    }
    Circuit operator+(const Circuit &other) const {
        return Circuit(real + other.real, img + other.img);
    }
    Circuit operator/(const Circuit &other) const {
        double denom = other.real * other.real + other.img * other.img;
        double r = (real * other.real + img * other.img) / denom;
        double i = (img * other.real - real * other.img) / denom;
        return Circuit(r, i);
    }
    void show(){
        if (img >= 0) cout << real << " + j" << img << '\n';
        else cout << real << " - j" << -img << '\n';
    }
};

int main() {
    Circuit z1(3.0, 4.0), z2(4.0, -3.0), z3(0.0, 6.0), v(100.0, 50.0);
    Circuit z_eq = z1.inverse() + z2.inverse() + z3.inverse();
    Circuit z_total = z_eq.inverse();
    Circuit current = v / z_total;

    cout << "The current is "; current.show();
}
```

### Unary Operator Overloading
```cpp
#include<bits/stdc++.h>
using namespace std;

class remote{
    int sound;
public :
    remote(int x){
        sound = x;
    }
    remote operator ++(){
        sound += 5;
        return 0;
    }
    remote operator --(){
        sound -= 5;
        return 0;
    }
    void Show(){
        cout << "The Current Sound is " << sound << ".\n";
    }
};
int main(void){
    remote r(50);
    ++r; ++r; --r; ++r; --r;
    r.Show();
}```

### Friend Function
```cpp
#include<bits/stdc++.h>
using namespace std;

class Bank1{
private :
    double money1;
public :
    Bank1(double x){
        money1 = x;
    }
    double GetMoney(){
        return money1;
    }
    friend void Sum(double tk1, double tk2);
};
class Bank2{
private :
    double money2;
public :
    Bank2(double x){
        money2 = x;
    }
    double GetMoney(){
        return money2;
    }
    friend void Sum(double tk1, double tk2);
};
void Sum(double tk1, double tk2){
    cout << "SUM = " << tk1 +tk2 << " BDT.\n";
}

int main(void){
    Bank1 b1(500.43);
    Bank2 b2(3450.32);
    Sum(b1.GetMoney(), b2.GetMoney());
}
```


# Module 5

### Runtime Method Overloading
```cpp
#include <bits/stdc++.h>
using namespace std;

class A{
public:
    void Print(){
        cout << "Inside Print() of class A" << endl;
    }
};
class B : public A{
public:
    void Print(){
        cout << "Inside Print() of class B" << endl;
    }
};
int main(void){
    cout << "Case i   : ";
    A a;
    a.Print();

    cout << "Case ii. : ";
    B b;
    b.Print();

    cout << "Case iii : ";
    A a2;
    A *p1 = &a2;
    p1->Print();

    cout << "Case iv  : ";
    B b2;
    A *p2 = &b2;
    p2->Print();
}
```

### Pure Virtual Function
```cpp
#include <bits/stdc++.h>

using namespace std;

class A {
public:
    virtual void Print()=0;
};

class B: public A {
public:
    void Print(){
        cout << "Inside Print() of class B\n";
    }
};

int main(){
    B a;
    A *p;
    p = &a;
    p->Print();
    return 0;
}
```

### STL : Array Class
```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    // Declaration
    array<int, 6> ax;

    // Assigning values in one line
    ax = {10, 60, 30, 70, 20};

    // Accessing Third Element using at() function
    cout << "Third Element = " << ax.at(2) << "\n";

    // Print first element using front() function
    cout << "Front = " << ax.front() << "\n";

    // Print last element using back()
    cout << "Back = " << ax.back() << "\n";

    // Filling elements
    ax.fill(100);

    // Checking if array is empty
    cout << (ax.empty() ? "Array is empty" : "Array is not empty") << "\n";

    // Print size of array
    cout << "Size = " << ax.size() << "\n";
    cout << "Maximum Size = " << ax.max_size() << "\n";

    // Addresses
    cout << "Address of first element = " << ax.begin() << "\n";
    cout << "Address of last element = " << ax.end() << "\n";

    return 0;
}
```

### STL : Pair Class
```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    pair<int, string> px = make_pair(10, "Rajshahi");
    cout << "First = " << px.first << "\n";
    cout << "Second = " << px.second << "\n";
    get<0>(px) = 20;
    pair<int, string> bx = make_pair(2, "Dhaka");
    swap(px, bx);
    cout << "px = " << px.first << " " << px.second << "\n";
    cout << "bx = " << bx.first << " " << bx.second << "\n";
    return 0;
}
```

### STL : Tuple Class
```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    tuple<int, string, double> tx = make_tuple(100, "Kamal", 3.5);
    cout << "Int data member = " << get<0>(tx) << "\n";
    cout << "String data member = " << get<1>(tx) << "\n";
    cout << "Double data member = " << get<2>(tx) << "\n";
    get<2>(tx) = 3.7;
    tuple<int, string, double> bx = make_tuple(12, "Orpid", 2.75);
    swap(tx, bx);
    cout << "tx = " << get<0>(tx) << " " << get<1>(tx) << " " << get<2>(tx) << "\n";
    cout << "bx = " << get<0>(bx) << " " << get<1>(bx) << " " << get<2>(bx) << "\n";
    return 0;
}
```


# Module 6

### STL : Stack Class
```cpp
#include<bits/stdc++.h>
using namespace std;

class Menu{
private :
    stack<int> st;
public :
    void Push(){
        int x;
        cout << "Enter a value to push : ";
        cin >> x;
        st.push(x);
        cout << "Value " << x << " push to the stack.\n";
    }
    void Pop(){
        if (!st.empty()){
            st.pop();
            cout << "The last value of the stack is poped.\n";
        }
        else cout << "The stack is already empty.\n";
    }
    void Display(){
        cout << "Stack = ";
        if (st.empty()){
            cout << "Empty.\n";
            return;
        }
        while(!st.empty()){
            cout << st.top() << ' ';
            st.pop();
        }
        cout << '\n';
    }
};

int main(void){
    Menu mu;

    int option;
    while (4){
        cout << "\t*** Stack ***\n";
        cout << "1. Push.\n";
        cout << "2. Pop.\n";
        cout << "3. Display.\n";
        cout << "4. Exit.\n";

        cout << "\nEnter a option = ";
        cin >> option;
        while (option < 1 || option > 4){
            cout << "Invalied option.\n";
            cout << "\nEnter a option = ";
            cin >> option;
        }

        if (option == 1) mu.Push();
        else if (option == 2) mu.Pop();
        else if (option == 3) mu.Display();
        else if (option == 4){
            cout << "\nThe menu is closed.\n";
            break; 
        }
        cout << '\n';
    }
}```


### STL : Queue Class
```cpp
#include<bits/stdc++.h>
using namespace std;

class Menu{
private :
    queue<int> q;
public :
    void Enqueue(){
        int x;
        cout << "Enter a value to push : ";
        cin >> x;
        q.push(x);
        cout << "Value " << x << " is enqueued.\n";
    }
    void Dequeue(){
        if (q.empty()) cout << "The queue is already empty.\n";
        else{
            q.pop();
            cout << "The last element is dequeued.\n";
        }
    }
    void Display_Front(){
        cout << "Front element : " << q.front() << ".\n";
    }
    void Display_Back(){
        cout << "Last element : " << q.back() << ".\n";
    }
};

int main(void){
    Menu mu;

    int option;
    while (4){
        cout << "\t*** Queue ***\n";
        cout << "1. Enqueue.\n";
        cout << "2. Dequeue.\n";
        cout << "3. Display Front.\n";
        cout << "4. Display Rear.\n";
        cout << "5. Exit.\n";

        cout << "\nEnter a option = ";
        cin >> option;
        while (option < 1 || option > 5){
            cout << "Invalied option.\n";
            cout << "\nEnter a option = ";
            cin >> option;
        }

        if (option == 1) mu.Enqueue();
        else if (option == 2) mu.Dequeue();
        else if (option == 3) mu.Display_Front();
        else if (option == 4) mu.Display_Back();
        else if (option == 5){
            cout << "\nThe menu is closed.\n";
            break; 
        }
        cout << '\n';
    }
}
```


### STL : Vector Class
```cpp
#include<bits/stdc++.h>
using namespace std;

class Menu{
private :
    vector<int> v;
public :
    void Insert(){
        int x;
        cout << "Enter a value to push : ";
        cin >> x;
        v.push_back(x);
    }
    void Delete(){
        int ind;
        cout << "Enter the index of the value : ";
        cin >> ind;
        if (ind < 0 || ind >= v.size()) cout << "Invaild Index.\n";
        else{
            v.erase(v.begin() + ind);
            cout << "The value of " << ind << "-th index is deleted.\n";
        }
    }
    void Update(){
        int ind, value;
        cout << "Enter the index and the value : ";
        cin >> ind >> value;
        if (ind < 0 || ind >= v.size()) cout << "Invaild Index.\n";
        else v[ind] = value;
    }
    void Search(){
        int value;
        cout << "Enter the value : ";
        cin >> value;
        auto it = find(v.begin(), v.end(), value);
        if (it != v.end()) cout << "The index of the " << value << " is " << it - v.begin() + 1 << ".\n";
        else cout << "The value is not found.\n";
    }
};

int main(void){
    Menu mu;
    
    int option;
    while (4){
        cout << "\t*** Vector ***\n";
        cout << "1. Insert.\n";
        cout << "2. Delete.\n";
        cout << "3. Update.\n";
        cout << "4. Search.\n";
        cout << "5. Exit.\n";

        cout << "\nEnter a option = ";
        cin >> option;
        while (option < 1 || option > 5){
            cout << "Invalied option.\n";
            cout << "\nEnter a option = ";
            cin >> option;
        }

        if (option == 1) mu.Insert();
        else if (option == 2) mu.Delete();
        else if (option == 3) mu.Update();
        else if (option == 4) mu.Search();
        else if (option == 5){ 
            cout << "\nThe menu is closed.\n";
            break; 
        }
        cout << '\n';
    }
}
```


# Module 7

### UML
```cpp
#include <bits/stdc++.h>

using namespace std;

class Test {
    private: int x;
    protected: int y;
    public: int z;
    public:
        void SetData(int a, int b, int c){
            x = a, y = b, z = c;
        }
        float GetAverage(){
            return (x + y + z) / 3.0;
        }
};

int main(){

    Test t;

    return 0;
}
```


### UML : Aggregation
```cpp
#include <bits/stdc++.h>

using namespace std;

class Doctor {
    string dname;
public:
    Doctor(string s){
        dname = s;
        cout << "Doctor object created\n";
    }
    string GetName(){
        return dname;
    }
    ~Doctor(){
        cout << "Doctor object destroyed\n";
    }
};

class Patient {
    string pname;
    Doctor* doc;
public:
    Patient(string s, Doctor *d){
        pname = s;
        doc = d;
        cout << "Patient object created\n";
    }
    void GetData(){
        cout << "Patient Name: " << pname << "\n";
        cout << "Doctor Name: " <<  doc->GetName() << "\n";
    }
    ~Patient(){
        cout << "Patient object destroyed\n";
    }
};

int main(){
    Doctor d("Raihan");
    cout << "Doctor name " << d.GetName() << "\n";
    {
        Patient p("Anisul", &d);
        p.GetData();
    }
    cout << "Patient Object destroyed, but Doctor object is still intact\n";

    return 0;
}
```


### UML : Composition
```cpp
#include <bits/stdc++.h>

using namespace std;


class Patient {
    string pname;
public:
    void SetName(string s){
        pname = s;
    }
    string GetName(){
        return pname;
    }
    ~Patient(){
        cout << "Patient Object Destroyed\n";
    }
};

class Doctor {
    string dname;
    Patient p;
public:
    Doctor(string s, string t){
        dname = s;
        p.SetName(t);
    }
    void ShowData(){
        cout << "Doctor Name: " << dname << "\n";
        cout << "Patient Name: " << p.GetName() << "\n";
    }
    ~Doctor(){
        cout << "Doctor Object Destroyed\n";
    }
};

int main(){
    {
        Doctor doc("Raihan", "Anisul");
        doc.ShowData();
    }
    cout << "Patient object is destroyed while destroying Doctor object\n";

    return 0;
}
```


### Java Programming Basic
```java
import java.util.Arrays;
import java.util.Scanner;

public class code1 {
    public static void main(String[] args) {
        // i.
        System.out.println("Name : Priashis Ghosh.");
        System.out.println("Address : Munnafer Mor, Rajshahi.");
        System.out.println();

        // ii.
        Scanner input = new Scanner(System.in);
        System.out.print("Enter two integer : ");
        int a = input.nextInt();
        int b = input.nextInt();
        System.out.println("a = " + a + " & b = " + b);
        System.out.println();

        // iii.
        int[] arr = new int[10];
        int sum = 0;
        System.out.print("Enter 10 integer : ");
        for (int i = 0; i < 10; i++) {
            arr[i] = input.nextInt();
            sum += arr[i];
        }
        System.out.print("Enter a value to search = ");
        int tar = input.nextInt();
        System.out.println();

        int ind = -1;
        for (int i = 0; i < 10; i++){
            if (arr[i] == tar){
                ind = i + 1;
                break;
            }
        }
        Arrays.sort(arr);

        System.out.println("Largest Number = " + arr[9]);
        System.out.println("Smallest Number = " + arr[0]);
        System.out.println("Avaerage  = " + sum / 10.0);
        if (ind != -1) System.out.println("The value " + tar + " is at position " + ind + ".");
        else System.out.println("The value " + tar + " is not found.");
        System.out.print("The sorted array = ");
        for (int i = 0; i < 10; i++) System.out.print(arr[i] + " ");
        System.out.println();
    }
}



```

### Private Method in Java
```java
public class code2 {
    private void msg1(){
        System.out.println("Private Message is working.");
    }
    public void msg2(){
        System.out.println("Private Message is working.");
    }
}
```

# Module 8

### ArrayList Class
```java
import java.util.ArrayList;
import java.util.Scanner;

public class code1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ArrayList<Integer> number = new ArrayList<Integer>();

        // add() method
        System.out.print("Enter 5 integer to add : ");
        for (int i = 0; i < 5; i++){
            number.add(input.nextInt());
        }

        // get() method
        System.out.print("Enter a vaild index : ");
        int ind = input.nextInt();
        System.out.println("The value of " + ind + "th index = " + number.get(ind - 1));

        // set method
        System.out.print("Enter to set the value & index : ");
        ind = input.nextInt();
        int value = input.nextInt();
        int old_value = number.get(ind - 1);
        number.set(ind - 1, value);
        System.out.println("The old value of " + ind + "th position : " + old_value);
        System.out.println("The new value of " + ind + "th position : " + number.get(ind - 1));

        // remove() method
        System.out.print("Enter the index to remove : ");
        ind = input.nextInt();
        number.remove(ind - 1);
        System.out.println("The value of " + ind + "th is removed.");

        // size() method
        System.out.println("The size of the ArrayList (number) = " + number.size());

        // toString() method
        String s = number.toString();
        System.out.println(s);

        // System.out.println("Number : " + number.toString());

        // sort() method
        number.sort(null);
        System.out.println("After sort() : " + number);

        // clear() method
        number.clear();
        System.out.println("After clear() : " + number);
        
    }
}
```

### Anonymous Object
```java
class Point {
    private double x;
    private double y;

    // Constructor
    public Point(double x, double y){
        this.x = x;
        this.y = y;
    }

    // Getters
    public double getX() {return x;}
    public double getY() {return y;}

    public static Point MidPoint(Point p1, Point p2){
        double midX = (p1.getX() + p2.getX()) / 2;
        double midY = (p1.getY() + p2.getY()) / 2;

        return new Point(midX, midY);
    }
}

public class Code2 {
    public static void main(String[] args) {
        Point p1 = new Point(2, 4);
        Point p2 = new Point(1, 10);

        Point midPoint = Point.MidPoint(p1, p2);

        System.err.println("Point 1 = (" + p1.getX() + ", " + p1.getY() + ")");
        System.err.println("Point 2 = (" + p2.getX() + ", " + p2.getY() + ")");

        System.err.println("Mid Point = (" + midPoint.getX() + ", " + midPoint.getY() + ")");

    }
}
```


### Inner Class
```java
class A {
    private int ax;

    public A(int x){
        ax = x;
    }

    class B {
        private int bx;

        public B(int x){
            bx = x;
        }

        public int GetSum(){
            return ax + bx;
        }

    }
}

public class Code3 {
    public static void main(String[] args) {
        A outerObj = new A(10);
        A.B innerObj = outerObj.new B(20);

        System.out.println("Sum = " + innerObj.GetSum());
    }
}
```

### Use of Super Keyword
```java
class A{
    protected int x;
    public A(){
        x=0;
    }
    public A(int x){
        this.x=x;
    }
    public int getX(){
        return(x);
    }
}

class B extends A {
    int x;
    public int getX(){
        return(x);
    }
    public B(){
        super.x = 10;
        x = 20;
    }
    public B(int b, int a){
        x = b;
        super.x = a;
    }

    public void display()
    {
        System.out.println("x of A is " + super.getX());
        System.out.println("x of B is " + getX());
    }
}

public class Main {
    public static void main(String[] args) {
        B b = new B();
        b.display();
        b = new B(30, 40);
        b.display();
    }
}
```

# Module 9

### Relation Between Classes and Interfaces
```java
// 1. Class Extends Class
class Parent {
    void showParent(){
        System.out.println("Parent Class Method");
    }
}

class Child extends Parent {
    void showChild(){
        System.out.println("Child Class Method");
    }
}

// 2. Class implements interface
interface Interface {
    void interfaceMethod();
}

class InterfaceImpl implements Interface {
    public void interfaceMethod(){
        System.out.println("Implemented Interface Method in a class");
    }
}

// 3. Interface extends interface
interface BaseInterface {
    void baseMethod();
}

interface ExtendedInterface extends BaseInterface {
    void extendedMethod();
}

class ExtendedInterfaceImpl implements ExtendedInterface {
    public void baseMethod(){
        System.out.println("Base Interface Method");
    }
    public void extendedMethod(){
        System.out.println("Extended Interface Method");
    }
}

// 4. Multiple Inheritences with Interfaces
interface InterfaceA {
    void methodA();
}

interface InterfaceB {
    void methodB();
}

class MultipleImpl implements InterfaceA, InterfaceB {
    public void methodA(){
        System.out.println("methodA from InterfaceA");
    }
    public void methodB(){
        System.out.println("methodB from InterfaceB");
    }
}

// 5. Interface extends multiple Interfaces
interface InterfaceC extends InterfaceA, InterfaceB {
    void methodC();
}

class MultiExtendedImpl implements InterfaceC {
    public void methodA(){
        System.out.println("methodA from InterfaceA (via InterfaceC)");
    }
    public void methodB(){
        System.out.println("methodB from InterfaceB (via InterfaceC)");
    }
    public void methodC(){
        System.out.println("methodC from InterfaceC");
    }
}

public class Code1 {
    public static void main(String[] args) {
        // class extends class
        Child child = new Child();
        child.showParent();
        child.showChild();

        // class implements interface
        InterfaceImpl impl = new InterfaceImpl();
        impl.interfaceMethod();

        // interface extends interface
        ExtendedInterfaceImpl ei = new ExtendedInterfaceImpl();
        ei.baseMethod();
        ei.extendedMethod();

        // Multiple inheritances with interfaces
        MultipleImpl multi = new MultipleImpl();
        multi.methodA();
        multi.methodB();

        // Interface extends multiple interfaces
        MultiExtendedImpl multiExt = new MultiExtendedImpl();
        multiExt.methodA();
        multiExt.methodB();
        multiExt.methodC();
    }
}
```


### Singleton Class
```java
class Singleton {
    private static Singleton singleInstance = null;

    public String message;

    private Singleton(){
        message = "Hello from singleton";
    }

    public static Singleton getInstance(){
        if (singleInstance == null){
            singleInstance = new Singleton();
        }
        return singleInstance;
    }

    public void displayMessage(){
        System.out.println(message);
    }
}

public class Code2 {
    public static void main(String[] args) {
        Singleton obj1 = Singleton.getInstance();
        Singleton obj2 = Singleton.getInstance();

        obj1.displayMessage();
        obj1.message = "New Message updates";
        obj2.displayMessage();

        if (obj1 == obj2){
            System.out.println("Both obj1 and obj2 refers to the same instances");
        }
    }
}
```

### Java Multithreading
```java
// Word Processor Thread
class WordProcessor extends Thread {
    public void run(){
        for (int i = 1; i <= 5; i++){
            System.out.println("Word Processor: Typing document... (" + i + ")");
            try {
                Thread.sleep(1000);
            }
            catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

// Music Player Thread
class MusicPlayer extends Thread {
    public void run(){
        for (int i = 1; i <= 5; i++){
            System.out.println("Music Player: Playing Song... (" + i + ")");
            try {
                Thread.sleep(1000);
            }
            catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

// Real-time Clock Thread
class RealTimeClock extends Thread {
    public void run(){
        for (int i = 1; i <= 5; i++){
            java.time.LocalTime time = java.time.LocalTime.now();
            System.out.println("Clock: Current Time - " + time);
            try {
                Thread.sleep(1000);
            }
            catch (InterruptedException e){
                e.printStackTrace();
            }
        }
    }
}

public class Code3 {
    public static void main(String[] args) {
        WordProcessor wp = new WordProcessor();
        MusicPlayer mp = new MusicPlayer();
        RealTimeClock rtc = new RealTimeClock();
    
        wp.start();
        mp.start();
        rtc.start();
    }
}
```


# Module 10

### Use of Java Swing
```java
import javax.swing.ButtonGroup;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JPasswordField;
import javax.swing.JRadioButton;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JTextArea;
import javax.swing.JTable;
import javax.swing.JScrollPane;
import javax.swing.JList;
import javax.swing.JComboBox;
import java.awt.Cursor;
import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;


public class Code1 {

    private static JFrame CreateFrame(){
        JFrame frame = new JFrame("CSE 1204");
        // frame.setVisible(true);
        frame.setBounds(0, 0, 1000, 600);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        // frame.setResizable(false);
        return frame;
    }

    private static void setIcon(JFrame frame, String link){
        ImageIcon icon = new ImageIcon(link);
        frame.setIconImage(icon.getImage());
    }
    public static void main(String[] args) {
        // Creating Frame
        JFrame frame = CreateFrame();

        // Creating Icon
        setIcon(frame, "D:\\Academics\\2nd Semester\\CSE - 1204 (Object Oriented Programming Sessional)\\Week 10\\img.jpg");
        String imageLink = "D:\\Academics\\2nd Semester\\CSE - 1204 (Object Oriented Programming Sessional)\\Week 10\\lowpoly.png";

        // Setting up Container (background)
        Container c = frame.getContentPane();
        c.setBackground(Color.GRAY);
        c.setLayout(null);

        // Setting Label using JLabel
        JLabel label = new JLabel("Username:");
        label.setBounds(0, 0, 70, 20);
        label.setOpaque(true);

        // Setting fonts of Label
        Font font = new Font("Roboto", Font.PLAIN, 12);
        label.setFont(font);

        // Adding label after setting up label and setting it's font;
        c.add(label);

        // Using image as JLabel
        ImageIcon icon = new ImageIcon(imageLink);
        label = new JLabel("Rokon Vai", icon, JLabel.LEFT);
        label.setBounds(0, 20, icon.getIconWidth(), icon.getIconHeight());
        c.add(label);

        // Setting up JTextField
        JTextField text = new JTextField();
        text.setText("Type Here: ");
        text.setBounds(0, 100, 200, 100);
        text.setForeground(Color.BLUE);
        text.setBackground(Color.CYAN);
        text.setEditable(true);
        c.add(text);

        // Setting up JPasswordField
        JPasswordField pass = new JPasswordField();
        pass.setBounds(0, 200, 200, 100);
        pass.setForeground(Color.BLUE);
        pass.setBackground(Color.CYAN);
        pass.setEchoChar('*');
        pass.setEditable(true);
        c.add(pass);

        //setting up JButton and Cursor
        JButton btn = new JButton("Submit");
        btn.setBounds(0, 300, 200, 20);
        Cursor cursor = new Cursor(Cursor.HAND_CURSOR);
        btn.setCursor(cursor);
        btn.setEnabled(true);
        btn.addActionListener(new ActionListener() {
            public void ActionPeformed(ActionEvent e){
                System.out.println("Submit is pressed");
            }
        });
        c.add(btn);

        // setting up JRadioButton 
        JRadioButton rb1 = new JRadioButton();
        JRadioButton rb2 = new JRadioButton();
        ButtonGroup bg = new ButtonGroup();

        rb1.setBounds(100, 20, 100, 20);
        rb1.setText("Male");
        rb1.setBackground(Color.BLUE);
        c.add(rb1);

        rb2.setBounds(100, 40, 100, 20);
        rb2.setText("Female");
        rb2.setBackground(Color.PINK);
        c.add(rb2);

        bg.add(rb1);
        bg.add(rb2);

        // Setting up JCheckBox
        JCheckBox cb = new JCheckBox();
        cb.setBounds(100, 80, 100, 20);
        cb.setText("Agree");
        cb.setBackground(Color.CYAN);
        c.add(cb);

        // Setting up JTextArea
        JTextArea txt = new JTextArea();
        txt.setBounds(300, 20, 100, 100);
        c.add(txt);

        // Setting up JTable
        JTable jt;
        String data[][] = {
            {"002", "Ahnaf", "9"},
            {"007", "Maleha", "20"},
            {"012", "Orpid", "17.5"},
            {"056", "Priashis", "8"},
            {"066", "Pranshu", "A"}
        };
        String columns[] = {"-Roll-", "-Name-", "-Mark-"};
        jt = new JTable(data, columns);
        jt.setBounds(300, 200, 200, 70);
        c.add(jt);

        // Setting up JScrollPane
        jt = new JTable(data, columns);
        JScrollPane sp = new JScrollPane(jt);
        sp.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_ALWAYS);
        sp.setBounds(300, 300, 200, 100);
        c.add(sp);

        // Setting up JList
        String days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        JList<String> jl = new JList<String>(days);
        sp = new JScrollPane(jl);
        sp.setBounds(300, 400, 150, 50);
        c.add(sp);

        // Setting up JComboBox
        JComboBox<String> jcb = new JComboBox<String>(days);
        jcb.setBounds(500, 100, 100, 20);
        jcb.setSelectedIndex(3);
        jcb.setEditable(true);
        c.add(jcb);

        // Start Frame
        frame.setVisible(true);
    }
}
```

### Login Page Using Java Swing
```java
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JPasswordField;
import javax.swing.JButton;
import java.awt.Container;
import java.awt.Color;
import java.awt.Font;
import java.awt.Desktop.Action;
import java.awt.Cursor;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Code2 {

    public static void main(String[] args) {
        // Creating JFrame
        JFrame frame = new JFrame("CSE 1204");
        frame.setBounds(0, 0, 1000, 600);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        // Getting Container and setting background color
        Container c = frame.getContentPane();
        c.setBackground(Color.CYAN);
        c.setLayout(null);

        // Creating Roboto Font for later use
        Font font = new Font("Roboto", Font.PLAIN, 12);

        // Creating labels
        JLabel label = new JLabel();
        label.setText("Login Menu");
        label.setBounds(300, 150, 300, 200);
        label.setBackground(Color.WHITE);
        // label.setOpaque(true);
        label.setFont(font);
        label.setLayout(null);
        label.setVerticalAlignment(JLabel.TOP);
        label.setHorizontalAlignment(JLabel.CENTER);
        c.add(label);
        
        // Creating Username label
        label = new JLabel();
        label.setText("Student Name:");
        label.setBounds(300, 200, 300, 10);
        c.add(label);
        
        // Creating ID Label
        label = new JLabel();
        label.setText("Student ID:");
        label.setBounds(300, 220, 300, 10);
        c.add(label);

        // Creating Password Label
        label = new JLabel();
        label.setText("Password:");
        label.setBounds(300, 240, 300, 10);
        c.add(label);
        
        // Creating JTextField
        JTextField text = new JTextField();
        text.setBounds(400, 197, 300, 17);
        text.setEditable(true);
        c.add(text);

        text = new JTextField();
        text.setBounds(400, 217, 300, 17);
        text.setEditable(true);
        c.add(text);
        
        // Creating JPasswordField
        JPasswordField pass = new JPasswordField();
        pass.setBounds(400, 237, 300, 17);
        pass.setEditable(true);
        pass.setEchoChar('*');
        c.add(pass);
        
        // Creating Buttons and Cursor
        JButton btn = new JButton();
        btn.setText("Submit");
        btn.setBounds(400, 257, 300, 17);
        Cursor cursor = new Cursor(Cursor.HAND_CURSOR);
        btn.setCursor(cursor);
        btn.setEnabled(true);

        c.add(btn);

        // Start Frame
        frame.setVisible(true);

    }
}
```