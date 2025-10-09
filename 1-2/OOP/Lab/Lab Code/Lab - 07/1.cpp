#include<bits/stdc++.h>
using namespace std;

class Menu{
private :
    stack<int> st;
public :
    void Push(){
        int x;
        cout << "Enter a value to push : ";
        cin >> x;
        st.push(x);
        cout << "Value " << x << " push to the stack.\n";
    }
    void Pop(){
        if (!st.empty()){
            st.pop();
            cout << "The last value of the stack is poped.\n";
        }
        else cout << "The stack is already empty.\n";
    }
    void Display(){
        cout << "Stack = ";
        if (st.empty()){
            cout << "Empty.\n";
            return;
        }
        while(!st.empty()){
            cout << st.top() << ' ';
            st.pop();
        }
        cout << '\n';
    }
};

int main(void){
    Menu mu;

    int option;
    while (4){
        cout << "\t*** Stack ***\n";
        cout << "1. Push.\n";
        cout << "2. Pop.\n";
        cout << "3. Display.\n";
        cout << "4. Exit.\n";

        cout << "\nEnter a option = ";
        cin >> option;
        while (option < 1 || option > 4){
            cout << "Invalied option.\n";
            cout << "\nEnter a option = ";
            cin >> option;
        }

        if (option == 1) mu.Push();
        else if (option == 2) mu.Pop();
        else if (option == 3) mu.Display();
        else if (option == 4){
            cout << "\nThe menu is closed.\n";
            break; 
        }
        cout << '\n';
    }
}