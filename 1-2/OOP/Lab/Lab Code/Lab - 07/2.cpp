#include<bits/stdc++.h>
using namespace std;

class Menu{
private :
    queue<int> q;
public :
    void Enqueue(){
        int x;
        cout << "Enter a value to push : ";
        cin >> x;
        q.push(x);
        cout << "Value " << x << " is enqueued.\n";
    }
    void Dequeue(){
        if (q.empty()) cout << "The queue is already empty.\n";
        else{
            q.pop();
            cout << "The last element is dequeued.\n";
        }
    }
    void Display_Front(){
        cout << "Front element : " << q.front() << ".\n";
    }
    void Display_Back(){
        cout << "Last element : " << q.back() << ".\n";
    }
};

int main(void){
    Menu mu;

    int option;
    while (4){
        cout << "\t*** Queue ***\n";
        cout << "1. Enqueue.\n";
        cout << "2. Dequeue.\n";
        cout << "3. Display Front.\n";
        cout << "4. Display Rear.\n";
        cout << "5. Exit.\n";

        cout << "\nEnter a option = ";
        cin >> option;
        while (option < 1 || option > 5){
            cout << "Invalied option.\n";
            cout << "\nEnter a option = ";
            cin >> option;
        }

        if (option == 1) mu.Enqueue();
        else if (option == 2) mu.Dequeue();
        else if (option == 3) mu.Display_Front();
        else if (option == 4) mu.Display_Back();
        else if (option == 5){
            cout << "\nThe menu is closed.\n";
            break; 
        }
        cout << '\n';
    }
}