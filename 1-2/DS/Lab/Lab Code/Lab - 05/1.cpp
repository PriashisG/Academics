#include <bits/stdc++.h>
using namespace std;

const int LMT = 10000;
int arr[LMT];
int cur = 0;

void push(){
    if (cur == LMT - 1){
        cout << "Stack is full.\n";
        return;
    }
    cout << "\nEnter the value to push : ";
    int value;
    cin >> value;
    arr[cur] = value;
    cur++;
    cout << "\nPush done!!\n";
}

void pop() {
    if (cur == 0) {
        cout << "Stack is empty.\n";
        return;
    }
    cur--; 
    arr[cur] = -1;
    cout << "Pop done!\n";
}

void show() {
    if (cur == 0) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Stack = [ ";
    for (int i = 0; i < cur; ++i) {
        cout << arr[i] << ((i != cur - 1) ? ", " : " ]\n");
    }
}

int main(void){

    for (int i = 0; i < LMT; i++) arr[i] = -1;

    while (69){
        int type;
        cout << "\t**** Stack ****\n";
        cout << "1. Push.\n";
        cout << "2. Pop.\n";
        cout << "3. Show.\n";
        cout << "4. Exit.\n";

        cout << "\nEnter option : ";
        cin >> type;
        if (type == 4){
            cout << "\nProgram closed.\n";
            break;
        }
        else if (type == 1) push();
        else if (type == 2) pop();
        else if (type == 3) show();
    }

}