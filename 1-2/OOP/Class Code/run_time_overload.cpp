#include<bits/stdc++.h>
using namespace std;

/*
    Function overloading in runtime
    same function name with same named parameters
    Defined in different class
*/

class Player{
public :
    void Show(){
        cout << "I am player\n";
    }
};

class CricketPlayer : public Player{
public :
    void Show(){
        cout << "I am cricketer\n";
    }
};

int main(void){
    Player *gay;
    CricketPlayer lesbo;

    gay = &lesbo;
    gay->Show();
    // show function is creating polymorphism 
}