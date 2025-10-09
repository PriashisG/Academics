#include <bits/stdc++.h>
using namespace std;

class Father {
private:
    int money;

protected:
    int gold;

public:
    int land;

    Father(int m, int g, int l) {
        money = m;
        gold = g;
        land = l;
    }

    int getMoney(){
        return money;
    } 
};

class Son : protected Father {
public:
    void show() {
        money, gold, land;
    }
};

class GrandSon : public Son {
public:
    void show() {
        money, gold, land;
    }
};


int main() {
    Father g(100, 50, 20);

    return 0;
}

