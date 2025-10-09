#include<bits/stdc++.h>
using namespace std;

int main(void){
    int a, b, c;
    a = 10, b = 0;

    try{
        // throws to catch(int x)
        if (b == 0) throw(0);

        // throws to catch(double x)
        if (b == 0) throw(.04);

        // throws to catch(...)
        if (b == 0) throw('c');
        c = a / b;
        cout << c << '\n';
    }
    catch(int x){
        cout << "int : Divide by zero exception\n";
    }
    catch(double x){
        cout << "double : Divide by zero exception\n";
    }
    catch(...){
        cout << "default : Divide by zero execption\n";
    }
}