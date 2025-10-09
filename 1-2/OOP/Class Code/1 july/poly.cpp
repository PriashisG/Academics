#include<bits/stdc++.h>
using namespace std;

/*
    Dynamic Poly
    a class has at least one pure virtual class is called abstract class.
*/

class student{ 
public:
    virtual void Show() = 0; // pure virtual function 
};

class CSE : public student{
public: 
    void Show(){
        cout << "I'm a CSE student\n";
    }
};

class EEE : public student{
public :
    void Show(){
        cout << "I'm a EEE student\n";
    }
};

int main (void){
    student *ps;
    CSE c;
    EEE e;
    ps = &c;
    ps->Show();
    ps = &e;
    ps->Show();
}