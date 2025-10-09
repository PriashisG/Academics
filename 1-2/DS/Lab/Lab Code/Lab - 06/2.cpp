#include <bits/stdc++.h>
using namespace std;

const int LMT = 1e5 + 10;
int dq[LMT];
int f = -1, b = -1;

bool empty(){
    return f == -1;
}
bool full(){
    return (f == 0 && b == LMT - 1) || (f == b + 1);
}
void push_right(int x){
    if (full()){
        cout << "Deque is full.\n";
        return;
    }
    if (empty()) f = b = 0;
    else if (b == LMT - 1) b = 0; 
    else b++;
    dq[b] = x;
}
void push_left(int x){
    if (full()){
        cout << "Deque is full.\n";
        return;
    }
    if (empty()) f = b = 0;
    else if (f == 0) f = LMT - 1;
    else f--;
    dq[f] = x;
}
void pop_right(){
    if (empty()){
        cout << "Deque is empty.\n";
        return;
    }
    if (f == b) f = b = -1;
    else if (b == 0) b = LMT - 1;
    else b--;
}
void pop_left(){
    if (empty()){
        cout << "Deque is empty.\n";
        return;
    }
    if (f == b) f = b = -1;
    else if (f == LMT - 1) f = 0; 
    else f++;
}
int front(){
    if (empty()){
        cout << "Deque is empty.\n";
        return -1;
    }
    return dq[f];
}
int back(){
    if (empty()){
        cout << "Deque is empty.\n";
        return -1;
    }
    return dq[b];
}

int main(void){
    push_right(10);
    push_right(20);
    push_left(5);
    push_right(30);

    cout << "Front = " << front() << "\n";
    cout << "Back = " << back() << "\n";  

    pop_left();
    cout << "\nAfter pop_left:\nFront = " << front() << "\n"; 
    cout << "Back = " << back() << "\n";  

    pop_right();
    cout << "\nAfter pop_right:\nFront = " << front() << "\n";
    cout << "Back = " << back() << "\n";  

    pop_left();
    pop_right();

    if (empty()) cout << "\nDeque is now empty.\n";
}
