#include <bits/stdc++.h>
using namespace std;

class A{
    int a, b;
public :
    void SetData(int x, int y){
        a = x;
        b = y;
    }
    A(){}
    A(const A *ptr){ 
       a = ptr->a; 
       b = ptr->b;
    }
    void ShowData(){
        cout << "a : " << a << '\n';
        cout << "b : " << b << '\n';
    }
};

int main(void){
    A obj1;
    obj1.SetData(10, 20);
    A obj2(&obj1);
    cout << "obj1 data : \n";
    obj1.ShowData();
    cout << "obj2 data : \n";
    obj2.ShowData();
}