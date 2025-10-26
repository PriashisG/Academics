#include <iostream>
using namespace std;

class Animal{
public:
    virtual void eat() = 0;
};

class Dog : public Animal{
public:
    void eat(){
        cout << "Dog food" << '\n';
    }
};

class Cat : public Animal{
public:
    void eat(){
        cout << "Cat food" << '\n';
    }
};

void Show(Animal *a){
    a->eat();
}

int main(){
    Animal *pb;
    Dog d;
    pb = &d;
    Show(pb);
    Cat c;
    pb = &c;
    Show(pb);
}