/*
    Aggregation
*/

#include<bits/stdc++.h>
using namespace std;

class Employee{
    string ename;
public :
    Employee (string s){
        ename = s;
        cout << "Employee : " << ename << " constructor.\n";
    }
    string GetName(){
        return ename;
    }
    ~Employee(){
        cout << "Employee : " << ename << " distroyed.\n";
    }
};

class Company{
    string cname;
    Employee *emp;
public :
    Company(string s, Employee *p){
        cname = s;
        emp = p;
        cout << "Company : " << cname << " constructor.\n";
    }
    void Display(){
        cout << "Company : " << cname << "\n\t -> Employee name : " << emp->GetName() << '\n';
    }
    ~Company(){
        cout << "Company : " << cname << " distroyed.\n";
    }
};

int main(void){
    Employee e("Kamal");

    cout << "1. " << e.GetName() << '\n';
    {
        Company c("HP", &e);
        c.Display();
    }

    cout << "2 . " << e.GetName() << '\n';
}