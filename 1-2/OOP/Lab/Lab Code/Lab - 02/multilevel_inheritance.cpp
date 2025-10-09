/*
    Multilevel Inheritance :
            base ---> child1 ---> child2 ---> child3
*/

#include <bits/stdc++.h>
using namespace std;

class base{
    int x;
    string s = "I am the PG\n";

    public :
        void SetData(int value){
            x = value;
        }

        void PrintMsg(){
            cout << s << '\n';
        }
};

class child1 : public base {
    public :
        void SetDataToMyBase(int value){
            SetData(value);
        }

        void PrintMsgOfMyBase(){
            PrintMsg();
        }
};

class child2 : public child1 {
    public :
        void SetDataToChild1(int value){
            SetDataToMyBase(value);
        }

        void PrintMsgOfChild1(){
            PrintMsgOfMyBase();
        }
};

int main (void){
    child2 a;

    int x;
    cout << "Enter a value for base : ";
    cin >> x;
    a.SetDataToChild1(x);
    cout << '\n';

    char c;
    cout << "Do you want to know the name of base ??? (y/n)\n";
    cin >> c;
    if (c == 'y') a.PrintMsgOfChild1();
    else cout << "It's bad manner dude :')\n";
}