#include<bits/stdc++.h>
using namespace std;

class Car{
    int speed;
public : 
    Car(int x){
        speed = x;
    }

    Car operator ++ (){
        speed += 5;
        return 0;
    }
    void show(){
        cout << speed << '\n';
    }
};

int main(void){
    Car f1(10);

    ++f1;
    cout << "Car Speed --> "; f1.show();
}