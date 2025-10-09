#include <bits/stdc++.h>
using namespace std;

const int LMT = 1e5 + 10;
int arr[LMT];
int f = 0, b = 0;

void push(int x){
    if (b == LMT){
        cout << "Queue is full.\n";
        return;
    }
    arr[b++] = x;
}
void pop(){
    if (f == b){
        cout << "Queue is empty.\n";
        return;
    }
    f++;
}
int front(){
    if (f == b){
        cout << "Queue is empty.\n";
        return -1;
    }
    return arr[f];
}
int back(){
    if (f == b){
        cout << "Queue is empty.\n";
        return -1;
    }
    return arr[b - 1];
}

bool empty(){
    return f == b;
}

int main(void){
    push(10);
    push(20);
    push(30);

    cout << "Front = " << front() << "\n";
    cout << "Back = " << back() << "\n";   
    
    pop();
    cout << "\nAfter pop : \nFront = " << front() << "\n"; 
    cout << "Back = " << back() << "\n";   
    
    pop();
    cout << "\nAfter pop again : \nFront = " << front() << "\n"; 
    cout << "Back: " << back() << "\n";  
    pop();
    
    if (empty()) cout << "\nQueue is now empty.\n";
}
