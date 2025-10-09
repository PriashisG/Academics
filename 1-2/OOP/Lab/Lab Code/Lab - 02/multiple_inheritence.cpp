/*
    Multiple Inheritance means multiple base class in a single child class.
*/


#include <bits/stdc++.h>
using namespace std;

class base1{
    int x;

    public :
        void SetData(int value){
            x = value;
        }
};

class base2{
    public :
        void PrintBaseName(){
            cout << "It's Franklin base2 mann!!!\n";
        }
};

class child : public base1 , public base2 {
    public :
        void SetValueOfBase1 (int value){
            SetData(value);
        }

        void PrintMsgOfBase2(){
            PrintBaseName();
        }
};

int main(void){
    child a;

    int x;
    cout << "Enter a value of Base-01 : ";
    cin >> x;
    cout << '\n';
    a.SetValueOfBase1(x);

    char c;
    cout << "Do you want to know the name of base - 02 ??? (y/n)\n";
    cin >> c;
    if (c == 'y') a.PrintMsgOfBase2();
    else cout << "It's bad manner dude :')\n";
}