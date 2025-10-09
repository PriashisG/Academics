#include<bits/stdc++.h>
using namespace std;

class Test{
public :
    int Sum (int x){
        return x;
    }
    int Sum (int x, int y){
        return x + y;
    }
    double Sum (double x, int y){
        return x + y;
    }
    double Sum (int x, double y){
        return x + y;
    }
    double Sum (double x, double y){
        return x + y;
    }
};

int main(void){
    Test t;
    cout << t.Sum(10) << '\n';         
    cout << t.Sum(10,20) << '\n';
    cout << t.Sum(5.7,20) << '\n';
    cout << t.Sum(10,2.6) << '\n';
    cout << t.Sum(10.5,20.7) << '\n';
}