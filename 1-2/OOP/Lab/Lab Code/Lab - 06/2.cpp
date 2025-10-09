#include <iostream>
using namespace std;

class A {
public:
    virtual void Print() = 0;
};

class B : public A {
public:
    void Print() {
        cout << "Inside Print() of class B" << endl;
    }
};

int main(void){
    B b;
    b.Print();

    A *p;
    p = &b;
    p->Print();
}
