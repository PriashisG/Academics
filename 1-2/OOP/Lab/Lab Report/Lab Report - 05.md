**Problem statement:** Write a class A with a method **Print()** and a derived class B with method **Print()** overloaded. Now observe the output when following statements are written in the **main()** function-

**Source Code without Virtual:**
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

**Output:**
```
Case i   : Inside Print() of class A
Case ii. : Inside Print() of class B
Case iii : Inside Print() of class A
Case iv  : Inside Print() of class A
```

**Source Code with Virtual:**
```cpp
class A{
public:
    virtual void Print(){
        cout << "Inside Print() of class A" << endl;
    }
};
```

**Output:**
```
Case i   : Inside Print() of class A
Case ii. : Inside Print() of class B
Case iii : Inside Print() of class A
Case iv  : Inside Print() of class B
```

