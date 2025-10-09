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

    cout << "Case iv  : ";
    B b2;
    A *p2 = &b2;
    p2->Print();
}
