#include <iostream>
using namespace std;

class Counter {
private:
    static int count; 

public:
    void increment(){
        count++;
    }

    void showCount(){
        cout << "Count = " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2;
    c1.increment();
    c2.increment();
    showCount();

    return 0;
}
