#include<bits/stdc++.h>
using namespace std;

/*
    if both child and parent class have same named function then the child function will be called.
    but if the child class doesn't have the function it goes to the parent class to find the function.
*/

class student{
public:
    void Show(){
        cout << "I'm a student\n";
    }
};

class CSE : public student{
public: 
    void Show(){
        cout << "I'm a CSE student\n";
    }
};

int main (void){
    CSE s;
    s.Show();
}