#include <bits/stdc++.h>
using namespace std;

class A{
protected : // protected variable can be used in child class
    int ax;

public: 
    // Constructor
    A(){
        cout << "Inside Constructor of class A\n";
    }
};

class B : virtual public A {
protected :
    int bx;
    
public: 
    // Constructor
    B(){
        ax = 1;
        cout << "Inside Constructor of class B\n";
    }
};

class C : public B, virtual public A {
protected :
    int cx;

public: 
    // Constructor
    C(){
        ax = 2;
        cout << "Inside Constructor of class C\n";
    }
};

class D : public C, public B { // in the case of virtual, it takes the value found from 1st inheritance
public: 
    // Constructor
    D(){
        cout << "Inside Constructor of class D\n";
    }

    void display(){
        cout << "ax = " << ax << '\n';
    }
};

int main (void){
    D d; // if there is no parameter in constructor, don't use ()

    d.display();
}