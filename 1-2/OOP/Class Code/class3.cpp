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

    A(int x){
        ax = x;
        cout << "Inside parameterize Constructor of class A\n";
    }
};

class B : public A { // public A means inheritance
protected :
    int bx;
    
public: 
    // Constructor
    B(){
        cout << "Inside Constructor of class B\n";
    }

    B(int x, int y) : A(x) {
        bx = y;
        cout << "Inside parameterize Constructor of class B\n";
    }
};

class C : public B { // public B means inheritance
protected :
    int cx;

public: 
    // Constructor
    C(){
        cout << "Inside Constructor of class C\n";
    }

    C(int x, int y, int z) : B(x, y) {
        cx = z;
        cout << "Inside parameterize Constructor of class C\n";
    }

    void Display(){
        cout << "Volume = " << ax * bx * cx << '\n';
    }
};

int main (void){
    // C c; // if there is no parameter in constructor, don't use ()
    C c(10, 20, 30);

    c.Display();
}