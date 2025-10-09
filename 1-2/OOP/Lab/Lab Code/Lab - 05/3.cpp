#include<bits/stdc++.h>
using namespace std;

class remote{
    int sound;
public :
    remote(int x){
        sound = x;
    }
    remote operator ++(){
        sound += 5;
        return 0;
    }
    remote operator --(){
        sound -= 5;
        return 0;
    }
    void Show(){
        cout << "The Current Sound is " << sound << ".\n";
    }
};
int main(void){
    remote r(50);
    ++r; ++r; --r; ++r; --r;
    r.Show();
}