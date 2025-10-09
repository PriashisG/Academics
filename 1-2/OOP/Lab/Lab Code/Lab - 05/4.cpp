#include<bits/stdc++.h>
using namespace std;

class Bank1{
private :
    double money1;
public :
    Bank1(double x){
        money1 = x;
    }
    double GetMoney(){
        return money1;
    }
    friend void Sum(double tk1, double tk2);
};

class Bank2{
private :
    double money2;
public :
    Bank2(double x){
        money2 = x;
    }
    double GetMoney(){
        return money2;
    }
    friend void Sum(double tk1, double tk2);
};
void Sum(double tk1, double tk2){
    cout << "SUM = " << tk1 +tk2 << " BDT.\n";
}

int main(void){
    Bank1 b1(500.43);
    Bank2 b2(3450.32);
    Sum(b1.GetMoney(), b2.GetMoney());
}