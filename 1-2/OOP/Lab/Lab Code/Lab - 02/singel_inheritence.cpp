/*
    Single Inheritance means one base class in a child class..
*/

#include <bits/stdc++.h>
using namespace std;

class Base{
    int x;

    public:
        int y;

        void SetValue(int value){
            x = value;
        }

        void PrintValue(){
            cout << "Value of Base class = " << x << '\n';
        }
};

class Child : public Base{
    public:
        void SetDataToBase(int value){
            SetValue(value);
        }

        void PrintValueOfBase(){
            PrintValue();
        }
};

int main(void){
    Child a;

    int x;
    cout << "Enter a int for Base class value : ";
    cin >> x;
    cout << '\n';

    a.SetDataToBase(100);
    a.PrintValueOfBase();
}