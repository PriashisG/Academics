/*
    Composition
*/

#include <bits/stdc++.h>
using namespace std;

class Birthdate
{
    int day, month, year;

public:
    Birthdate(int x = 0, int y = 0, int z = 0)
    {
        cout << "Birthday called.\n";
        day = x;
        month = y;
        year = z;
    }
    void SetData(int x, int y, int z)
    {
        day = x;
        month = y;
        year = z;
    }
    void Display()
    {
        cout << "Birthday : " << day << "/" << month << "/" << year << "\n";
    }
    ~Birthdate()
    {
        cout << "Birthday is distoryed.\n";
    }
};

class Person
{
    string name;
    Birthdate dt;

public:
    Person(string s, int d, int m, int y)
    {
        cout << "Person consturctor called.\n";
        name = s;
        dt.SetData(d, m, y);
    }
    void Display()
    {
        cout << name << ".\n";
        dt.Display();
    }
    ~Person()
    {
        cout << "Person is dead.\n";
    }
};

int main(void)
{
    Person p("Kamal", 12, 5, 2006);
    p.Display();
}